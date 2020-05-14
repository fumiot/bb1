/*
 * Copyright (C) 2015-2017 Alibaba Group Holding Limited
 */

#include "aos/hal/flash.h"
#include "aos/hal/gpio.h"
#include <aos/kernel.h>
#include "aos/kernel.h"

#include "aos/yloop.h"
#include "ulog/ulog.h"
/* Logic partition on flash devices */
const hal_logic_partition_t hal_partitions[] =
{
	[HAL_PARTITION_BOOTLOADER] =
	{
	    .partition_owner            = HAL_FLASH_EMBEDDED,
	    .partition_description      = "Bootloader",
	    .partition_start_addr       = 0x1000,
	    .partition_length           = 0x7000,    //28k bytes
	    .partition_options          = PAR_OPT_READ_EN | PAR_OPT_WRITE_DIS,
	},
	[HAL_PARTITION_PARAMETER_1] =
    {
        .partition_owner            = HAL_FLASH_EMBEDDED,
        .partition_description      = "PARAMETER1",
        .partition_start_addr       = 0x310000,
        .partition_length           = 0x1000, // 4k bytes
        .partition_options          = PAR_OPT_READ_EN | PAR_OPT_WRITE_EN,
    },
    [HAL_PARTITION_PARAMETER_2] =
    {
        .partition_owner            = HAL_FLASH_EMBEDDED,
        .partition_description      = "PARAMETER2",
        .partition_start_addr       = 0x311000,
        .partition_length           = 0x2000, //8k bytes
        .partition_options          = PAR_OPT_READ_EN | PAR_OPT_WRITE_EN,
    },
	[HAL_PARTITION_APPLICATION] =
	{
	    .partition_owner            = HAL_FLASH_EMBEDDED,
	    .partition_description      = "Application",
	    .partition_start_addr       = 0x10000,
	    .partition_length           = 0x100000, //1MB bytes
	    .partition_options          = PAR_OPT_READ_EN | PAR_OPT_WRITE_EN,
	},
    [HAL_PARTITION_OTA_TEMP] =
    {
        .partition_owner           = HAL_FLASH_EMBEDDED,
        .partition_description     = "OTA Storage",
        .partition_start_addr      = 0x110000,
        .partition_length          = 0x100000, //1MB bytes
        .partition_options         = PAR_OPT_READ_EN | PAR_OPT_WRITE_EN,
    },
    [HAL_PARTITION_PARAMETER_3] =
    {
        .partition_owner            = HAL_FLASH_EMBEDDED,
        .partition_description      = "PARAMETER3",
        .partition_start_addr       = 0x313000,
        .partition_length           = 0x1000, //4k bytes
        .partition_options          = PAR_OPT_READ_EN | PAR_OPT_WRITE_EN,
    },
    [HAL_PARTITION_PARAMETER_4] =
    {
        .partition_owner            = HAL_FLASH_EMBEDDED,
        .partition_description      = "PARAMETER4",
        .partition_start_addr       = 0x314000,
        .partition_length           = 0x1000, //4k bytes
        .partition_options          = PAR_OPT_READ_EN | PAR_OPT_WRITE_EN,
    },
    /*add for gravity fs*/
     [HAL_PARTITION_SPIFFS] =
    {
        .partition_owner            = HAL_FLASH_EMBEDDED,
        .partition_description      = "spiffs",
        .partition_start_addr       = 0x315000,
        .partition_length           = 0x80000, //512k bytes
        .partition_options          = PAR_OPT_READ_EN | PAR_OPT_WRITE_EN,
    },
};


#define GPIO_BOOT_KEY_IO 0
gpio_dev_t boot_key,control_out, led_blue, led_red;
static uint64_t   boot_key_time = 0;

typedef void (*click_cb_t)(void);

click_cb_t click_callback = NULL;

void register_click_callback(click_cb_t cb)
{
//    printf("Click callback registered.\n");
    click_callback = cb;
}
static void key_poll_func(void *arg)
{
    uint32_t level = 1;
    uint64_t diff;

    hal_gpio_input_get(&boot_key, &level);
    if (level == 0) {
        aos_post_delayed_action(10, key_poll_func, NULL);
    } else {
        diff = aos_now_ms() - boot_key_time;
        if (diff > 6000) { /*long long press */
            boot_key_time = 0;
            aos_post_event(EV_KEY, CODE_BOOT, VALUE_KEY_LLTCLICK);
        } else if (diff > 2000) { /* long press */
            boot_key_time = 0;
            aos_post_event(EV_KEY, CODE_BOOT, VALUE_KEY_LTCLICK);
        } else if (diff > 40) { /* short press */
            boot_key_time = 0;
            aos_post_event(EV_KEY, CODE_BOOT, VALUE_KEY_CLICK);
            if (click_callback) click_callback();
        } else {
            aos_post_delayed_action(10, key_poll_func, NULL);
        }
    }
}

int boot_key_int_counter = 0;
static void handle_boot_key()
{
    uint32_t level = 1;
    hal_gpio_input_get(&boot_key, &level);
    if ((level == 0) && (boot_key_time == 0)) {
        boot_key_time = aos_now_ms();
        aos_schedule_call(key_poll_func, NULL);
       // aos_loop_schedule_work(0, key_proc_work, NULL, NULL, NULL);
    }
 //   HAL_Printf("key_int counter: %d\n",boot_key_int_counter);
}


static void boot_key_gpio_isr_handler(void* arg)
{

    uint32_t gpio_num = 0;//(uint32_t) arg;
    uint32_t value = 0;

    hal_gpio_input_get(&boot_key, &value);
    if (value == 0){
        handle_boot_key();
    }
    boot_key_int_counter++;
    //hal_gpio_clear_irq(&boot_key); //until 20190812, esp32 hal gpio.c do this wrong, it disabled the irq, not clear it.
                                     //计数发现，不用代码显式清除中断，不影响中断次数的计数。这里与esp8266不同，esp8266 blink发现，必须显式调用
                                     //hal_gpio_clear_irq，否则中断来上两三次系统就挂起了。
} 


int key_gpio_init(void)
{

   /* input pin config */
    boot_key.port = GPIO_BOOT_KEY_IO;
    /* set as interrupt mode */
    boot_key.config = IRQ_MODE;
    /* configure GPIO with the given settings */
    hal_gpio_init(&boot_key);
    /* gpio interrupt config */
    hal_gpio_enable_irq(&boot_key, IRQ_TRIGGER_FALLING_EDGE, boot_key_gpio_isr_handler, (void *) GPIO_BOOT_KEY_IO);
//    HAL_Printf("key_gpio_init.\n");

    control_out.port = 2;
    /* set as interrupt mode */
    boot_key.config = OUTPUT_PUSH_PULL;
    /* configure GPIO with the given settings */
    hal_gpio_init(&control_out);
    hal_gpio_output_high(&control_out);
   
    return 0;
}



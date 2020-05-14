/* KEYWORD: PART1 USER DEFINED CONFIGURATION */
/* Put user defined macro here */




/* KEYWORD: PART2 COMPONENTS CONFIGURATION */
/* Put configuration defined in Config.in files of components here.
 It's better to modify the configuration by menuconfig, and the 
 compiler will copy it here automatically.*/
//================This is split line================
// KEYWORD: COMPONENT NAME IS  network

// description:CAN NOT BE MODIFIED
#define AOS_COMP_NETWORK 1

// #if AOS_COMP_NETWORK

// description:CAN NOT BE MODIFIED
#define CONFIG_AOS_TCPIP 1

// description:CAN NOT BE MODIFIED
// #define CONFIG_VENDOR_TCPIP 0 

// description:CAN NOT BE MODIFIED
// #define CONFIG_LINUX_TCPIP 0 

// description:CAN NOT BE MODIFIED
// #define CONFIG_NO_TCPIP 0 

// description:ENABLE AOS TCP/IP
#define CONFIG_AOS_LWIP 1

// description:ENABLE VENDOR TCP/IP
// #define CONFIG_VENDOR_LWIP 0 

// description:ENABLE LINUX TCP/IP
// #define CONFIG_LINUX_IPSTACK 0 

// description:DISABLE TCP/IP
// #define CONFIG_NO_LWIP 0 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  libkm_se

// description:Root of trust, SE-KM
// #define AOS_COMP_LIBKM_SE 0 

// #if AOS_COMP_LIBKM_SE

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  libkm

// description:Root of trust, Soft-KM
// #define AOS_COMP_LIBKM 0 

// #if AOS_COMP_LIBKM

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  bt_common

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_BT_COMMON 1 

// #endif

// #if !AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_BT_COMMON 0 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  fatfs

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_FATFS 1 

// #endif

// #if !AOS_CREATE_PROJECT

// description:fatfs
// #define AOS_COMP_FATFS 0 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  libiot_infra

// description:PLATFORM_HAS_STDINT
#define PLATFORM_HAS_STDINT 1

// description:PLATFORM_HAS_DYNMEM
#define PLATFORM_HAS_DYNMEM 1

// description:CAN NOT BE MODIFIED
#define INFRA_STRING 1

// description:CAN NOT BE MODIFIED
#define INFRA_NET 1

// description:CAN NOT BE MODIFIED
#define INFRA_LIST 1

// description:FEATURE_INFRA_NETWORK_PAYLOAD
#define INFRA_LOG_NETWORK_PAYLOAD 1

// description:FEATURE_INFRA_LOG, depends on INFRA_LOG
#define INFRA_LOG 1

// description:CAN NOT BE MODIFIED
// #define INFRA_LOG_ALL_MUTED 0 

// description:MUTE LEVEL of FLOW  (6)
#define INFRA_LOG_MUTE_FLW 1

// description:MUTE LEVEL of DEBUG (5)
#define INFRA_LOG_MUTE_DBG 1

// description:MUTE LEVEL of INFO  (4)
// #define INFRA_LOG_MUTE_INF 0 

// description:MUTE LEVEL of WARN  (3)
// #define INFRA_LOG_MUTE_WRN 0 

// description:MUTE LEVEL of ERROR (2)
// #define INFRA_LOG_MUTE_ERR 0 

// description:MUTE LEVEL of CRIT  (1)
// #define INFRA_LOG_MUTE_CRT 0 

// description:CAN NOT BE MODIFIED
// #define INFRA_MEM_STATS 0 

// description:CAN NOT BE MODIFIED
#define INFRA_TIMER 1

// description:CAN NOT BE MODIFIED
#define INFRA_JSON_PARSER 1

// description:CAN NOT BE MODIFIED
#define INFRA_CJSON 1

// description:CAN NOT BE MODIFIED
#define INFRA_MD5 1

// description:CAN NOT BE MODIFIED
#define INFRA_SHA1 1

// description:CAN NOT BE MODIFIED
#define INFRA_SHA256 1

// description:CAN NOT BE MODIFIED
#define INFRA_REPORT 1

// description:CAN NOT BE MODIFIED
// #define INFRA_HTTPC 0 

// description:CAN NOT BE MODIFIED
// #define INFRA_MEM_STATS 0 

// description:CAN NOT BE MODIFIED
#define INFRA_COMPAT 1

// description:CAN NOT BE MODIFIED
// #define INFRA_PREAUTH 0 

// description:CAN NOT BE MODIFIED
// #define INFRA_AES_BUILDIN 0 

// description:CAN NOT BE MODIFIED
// #define INFRA_AES_ROM_TABLES 0 

// description:CAN NOT BE MODIFIED
#define INFRA_AES 1

//================This is split line================
// KEYWORD: COMPONENT NAME IS  sensor

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_SENSOR 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:Sensor Drivers Configuration
// #define AOS_COMP_SENSOR 0 

// #endif

// description:Enable Sensor Depends
#define SENSOR_CONFIG_DEPENDS_ENABLE 1

// description:Enable Sensor Interrupt
// #define SENSOR_CONFIG_INT_ENABLE 0 

// description:Enable Modbus Sensors
// #define SENSOR_CONFIG_MODBUS_ENABLE 0 

// #if SENSOR_CONFIG_MODBUS_ENABLE

// description:ZD-6
// #define AOS_SENSOR_ALS_KUNLUN_ZD6 0 

// description:MSLT100MB
// #define AOS_SENSOR_ALS_MTM_MSLT100MB 0 

// description:JQYB
// #define AOS_SENSOR_BARO_KUNLUN_JQYB 0 

// description:MSP1000MB
// #define AOS_SENSOR_BARO_MTM_MSP1000MB 0 

// description:JQAW-6W1-V
// #define AOS_SENSOR_CO2_KUNLUN_JQAW6W1V 0 

// description:HAQEAW
// #define AOS_SENSOR_CO2_HONEYWELL_HAQEAW 0 

// description:MSCO2MB
// #define AOS_SENSOR_CO2_MTM_MSCO2MB 0 

// description:HAQEAW
// #define AOS_SENSOR_TVOC_HONEYWELL_HAQEAW 0 

// description:JWSK-V
// #define AOS_SENSOR_TEMP_KUNLUN_JWSKV 0 

// description:JTWS-AC
// #define AOS_SENSOR_TEMP_KUNLUN_JTWSAC 0 

// description:HAQEAW
// #define AOS_SENSOR_TEMP_HONEYWELL_HAQEAW 0 

// description:MSTH1000
// #define AOS_SENSOR_TEMP_MTM_MSTH1000 0 

// description:MSPH10
// #define AOS_SENSOR_TEMP_MTM_MSPH10 0 

// description:MSEC10
// #define AOS_SENSOR_TEMP_MTM_MSEC10 0 

// description:MLWS10
// #define AOS_SENSOR_TEMP_MTM_MLWS10 0 

// description:JWSK-V
// #define AOS_SENSOR_HUMI_KUNLUN_JWSKV 0 

// description:HAQEAW
// #define AOS_SENSOR_HUMI_HONEYWELL_HAQEAW 0 

// description:MSTH1000
// #define AOS_SENSOR_HUMI_MTM_MSTH1000 0 

// description:MSN1000MB
// #define AOS_SENSOR_NOISE_MTM_MSN1000MB 0 

// description:MSF1000MB
// #define AOS_SENSOR_HCHO_MTM_MSF1000MB 0 

// description:HAQEAW
// #define AOS_SENSOR_HCHO_HONEYWELL_HAQEAW 0 

// description:MSPM25MB
// #define AOS_SENSOR_PM25_MTM_MSPM25MB 0 

// description:HAQEAW
// #define AOS_SENSOR_PM25_HONEYWELL_HAQEAW 0 

// description:MSPM25MB
// #define AOS_SENSOR_PM1_MTM_MSPM25MB 0 

// description:MSPM25MB
// #define AOS_SENSOR_PM10_MTM_MSPM25MB 0 

// description:MSPH10
// #define AOS_SENSOR_PH_MTM_MSPH10 0 

// description:JTWS-AC
// #define AOS_SENSOR_VWC_KUNLUN_JTWSAC 0 

// description:MLWS10
// #define AOS_SENSOR_VWC_MTM_MLWS10 0 

// description:MSSM10
// #define AOS_SENSOR_VWC_MTM_MSSM10 0 

// description:MSEC10
// #define AOS_SENSOR_EC_MTM_MSEC10 0 

// description:MSEC10
// #define AOS_SENSOR_SALINITY_MTM_MSEC10 0 

// description:MSEC10
// #define AOS_SENSOR_TDS_MTM_MSEC10 0 

// description:JHFS-W1
// #define AOS_SENSOR_WINDSPEED_KUNLUN_JHFSW1 0 

// description:JHFX-W1
// #define AOS_SENSOR_WINDDIRECTION_KUNLUN_JHFXW1 0 

// description:JHYL-W1
// #define AOS_SENSOR_CURRENTRAINFALL_KUNLUN_JHYLW1 0 

// description:JHYL-W1
// #define AOS_SENSOR_DAILYRAINFALL_KUNLUN_JHYLW1 0 

// #endif

// description:Enable SPI Bus Sensors
// #define SENSOR_CONFIG_SPI_ENABLE 0 

// #if SENSOR_CONFIG_SPI_ENABLE

// description:BME280
// #define AOS_SENSOR_BARO_BME280_SPI 0 

// description:BME280
// #define AOS_SENSOR_TEMP_BME280_SPI 0 

// description:BME280
// #define AOS_SENSOR_HUMI_BME280_SPI 0 

// #endif

// description:Enable I2C Bus Sensors
#define SENSOR_CONFIG_I2C_ENABLE 1

// #if SENSOR_CONFIG_I2C_ENABLE

// description:ADXL372
// #define AOS_SENSOR_ACC_ADI_ADXL372 0 

// description:ADXL345
// #define AOS_SENSOR_ACC_ADI_ADXL345 0 

// description:ADXL355
// #define AOS_SENSOR_ACC_ADI_ADXL355 0 

// description:BMA253
// #define AOS_SENSOR_ACC_BOSCH_BMA253 0 

// description:BMA280
// #define AOS_SENSOR_ACC_BOSCH_BMA280 0 

// description:BMA421
// #define AOS_SENSOR_ACC_BOSCH_BMA421 0 

// description:BMA422
// #define AOS_SENSOR_ACC_BOSCH_BMA422 0 

// description:BMA455
// #define AOS_SENSOR_ACC_BOSCH_BMA455 0 

// description:BMA456
// #define AOS_SENSOR_ACC_BOSCH_BMA456 0 

// description:BMI055
// #define AOS_SENSOR_ACC_BOSCH_BMI055 0 

// description:BMI088
// #define AOS_SENSOR_ACC_BOSCH_BMI088 0 

// description:BMI120
// #define AOS_SENSOR_ACC_BOSCH_BMI120 0 

// description:BMI160
// #define AOS_SENSOR_ACC_BOSCH_BMI160 0 

// description:BMI260
// #define AOS_SENSOR_ACC_BOSCH_BMI260 0 

// description:SH200L
// #define AOS_SENSOR_ACC_SENODIA_SH200L 0 

// description:SH200Q
// #define AOS_SENSOR_ACC_SENODIA_SH200Q 0 

// description:LSM6DS3
// #define AOS_SENSOR_ACC_ST_LSM6DS3 0 

// description:LSM6DS3TR_C
// #define AOS_SENSOR_ACC_ST_LSM6DS3TR_C 0 

// description:LSM6DSL
// #define AOS_SENSOR_ACC_ST_LSM6DSL 0 

// description:LSM6DSM
// #define AOS_SENSOR_ACC_ST_LSM6DSM 0 

// description:LSM6DSOQ
// #define AOS_SENSOR_ACC_ST_LSM6DSOQ 0 

// description:LSM6DSR
// #define AOS_SENSOR_ACC_ST_LSM6DSR 0 

// description:LSM303AGR
// #define AOS_SENSOR_ACC_ST_LSM303AGR 0 

// description:DA213B
// #define AOS_SENSOR_ACC_MIR3_DA213B 0 

// description:DA215
// #define AOS_SENSOR_ACC_MIR3_DA215 0 

// description:DA217
// #define AOS_SENSOR_ACC_MIR3_DA217 0 

// description:DA270
// #define AOS_SENSOR_ACC_MIR3_DA270 0 

// description:DA312B
// #define AOS_SENSOR_ACC_MIR3_DA312B 0 

// description:DA380B
// #define AOS_SENSOR_ACC_MIR3_DA380B 0 

// description:AIS328DQ
// #define AOS_SENSOR_ACC_ST_AIS328DQ 0 

// description:H3LIS100DL
// #define AOS_SENSOR_ACC_ST_H3LIS100DL 0 

// description:H3LIS331DL
// #define AOS_SENSOR_ACC_ST_H3LIS331DL 0 

// description:LIS2DH12
// #define AOS_SENSOR_ACC_ST_LIS2DH12 0 

// description:LIS2DW12
// #define AOS_SENSOR_ACC_ST_LIS2DW12 0 

// description:LIS2HH12
// #define AOS_SENSOR_ACC_ST_LIS2HH12 0 

// description:LIS3DH
// #define AOS_SENSOR_ACC_ST_LIS3DH 0 

// description:LIS331HH
// #define AOS_SENSOR_ACC_ST_LIS331HH 0 

// description:N2DM
// #define AOS_SENSOR_ACC_ST_N2DM 0 

// description:BMI055
// #define AOS_SENSOR_GYRO_BOSCH_BMI055 0 

// description:BMI088
// #define AOS_SENSOR_GYRO_BOSCH_BMI088 0 

// description:BMI120
// #define AOS_SENSOR_GYRO_BOSCH_BMI120 0 

// description:BMI160
// #define AOS_SENSOR_GYRO_BOSCH_BMI160 0 

// description:BMI260
// #define AOS_SENSOR_GYRO_BOSCH_BMI260 0 

// description:SH200L
// #define AOS_SENSOR_GYRO_SENODIA_SH200L 0 

// description:SH200Q
// #define AOS_SENSOR_GYRO_SENODIA_SH200Q 0 

// description:LSM6DS3
// #define AOS_SENSOR_GYRO_ST_LSM6DS3 0 

// description:LSM6DS3TR_C
// #define AOS_SENSOR_GYRO_ST_LSM6DS3TR_C 0 

// description:LSM6DSL
// #define AOS_SENSOR_GYRO_ST_LSM6DSL 0 

// description:LSM6DSM
// #define AOS_SENSOR_GYRO_ST_LSM6DSM 0 

// description:LSM6DSOQ
// #define AOS_SENSOR_GYRO_ST_LSM6DSOQ 0 

// description:LSM6DSR
// #define AOS_SENSOR_GYRO_ST_LSM6DSR 0 

// description:BMG160
// #define AOS_SENSOR_GYRO_BOSCH_BMG160 0 

// description:A3G4250D
// #define AOS_SENSOR_GYRO_ST_A3G4250D 0 

// description:I3G4250D
// #define AOS_SENSOR_GYRO_ST_I3G4250D 0 

// description:L3GD20H
// #define AOS_SENSOR_GYRO_ST_L3GD20H 0 

// description:BMM150
// #define AOS_SENSOR_MAG_BOSCH_BMM150 0 

// description:LSM303AGR
// #define AOS_SENSOR_MAG_ST_LSM303AGR 0 

// description:AK09917
// #define AOS_SENSOR_MAG_AKM_AK09917 0 

// description:AK09918
// #define AOS_SENSOR_MAG_AKM_AK09918 0 

// description:AK09940
// #define AOS_SENSOR_MAG_AKM_AK09940 0 

// description:BM1422A
// #define AOS_SENSOR_MAG_ROHM_BM1422A 0 

// description:ST350
// #define AOS_SENSOR_MAG_SENODIA_ST350 0 

// description:ST480
// #define AOS_SENSOR_MAG_SENODIA_ST480 0 

// description:LIS2MDL
// #define AOS_SENSOR_MAG_ST_LIS2MDL 0 

// description:LIS3MDL
// #define AOS_SENSOR_MAG_ST_LIS3MDL 0 

// description:MMC3680KJ
// #define AOS_SENSOR_MAG_MEMSIC_MMC3680KJ 0 

// description:TCS3400
// #define AOS_SENSOR_ALS_AMS_TCS3400 0 

// description:TMD2725
// #define AOS_SENSOR_ALS_AMS_TMD2725 0 

// description:LTR303
// #define AOS_SENSOR_ALS_LITEON_LTR303 0 

// description:LTR568
// #define AOS_SENSOR_ALS_LITEON_LTR568 0 

// description:LTR507
// #define AOS_SENSOR_ALS_LITEON_LTR507 0 

// description:LTR553
// #define AOS_SENSOR_ALS_LITEON_LTR553 0 

// description:LTR559
// #define AOS_SENSOR_ALS_LITEON_LTR559 0 

// description:BH1730
// #define AOS_SENSOR_ALS_ROHM_BH1730 0 

// description:TMD2725
// #define AOS_SENSOR_PS_AMS_TMD2725 0 

// description:LTR507
// #define AOS_SENSOR_PS_LITEON_LTR507 0 

// description:LTR553
// #define AOS_SENSOR_PS_LITEON_LTR553 0 

// description:LTR559
// #define AOS_SENSOR_PS_LITEON_LTR559 0 

// description:LTR659
// #define AOS_SENSOR_PS_LITEON_LTR659 0 

// description:LTR690
// #define AOS_SENSOR_PS_LITEON_LTR690 0 

// description:LTR706
// #define AOS_SENSOR_PS_LITEON_LTR706 0 

// description:DSP310
// #define AOS_SENSOR_BARO_IFX_DSP310 0 

// description:BMP280
// #define AOS_SENSOR_BARO_BOSCH_BMP280 0 

// description:BMP380
// #define AOS_SENSOR_BARO_BOSCH_BMP380 0 

// description:BM1383A
// #define AOS_SENSOR_BARO_ROHM_BM1383A 0 

// description:LPS22HB
// #define AOS_SENSOR_BARO_ST_LPS22HB 0 

// description:LPS33HB
// #define AOS_SENSOR_BARO_ST_LPS33HB 0 

// description:LPS35HB
// #define AOS_SENSOR_BARO_ST_LPS35HB 0 

// description:BME280
// #define AOS_SENSOR_BARO_BOSCH_BME280 0 

// description:PAJ7620
// #define AOS_SENSOR_GESTURE_PIXART_PAJ7620 0 

// description:AK9754
// #define AOS_SENSOR_IR_AKM_AK9754 0 

// description:LTR381
// #define AOS_SENSOR_RGB_LITEON_LTR381 0 

// description:LTR390
// #define AOS_SENSOR_UV_LITEON_LTR390 0 

// description:ENS210
// #define AOS_SENSOR_TEMP_AMS_ENS210 0 

// description:ADT7410
// #define AOS_SENSOR_TEMP_ADI_ADT7410 0 

// description:BME280
// #define AOS_SENSOR_TEMP_BOSCH_BME280 0 

// description:SHT30
#define AOS_SENSOR_TEMP_SENSIRION_SHT30 1

// description:SHT31
// #define AOS_SENSOR_TEMP_SENSIRION_SHT31 0 

// description:SHTC1
// #define AOS_SENSOR_TEMP_SENSIRION_SHTC1 0 

// description:HTS221
// #define AOS_SENSOR_TEMP_ST_HTS221 0 

// description:ENS210
// #define AOS_SENSOR_HUMI_AMS_ENS210 0 

// description:BME280
// #define AOS_SENSOR_HUMI_BOSCH_BME280 0 

// description:SHT30
#define AOS_SENSOR_HUMI_SENSIRION_SHT30 1

// description:SHT31
// #define AOS_SENSOR_HUMI_SENSIRION_SHT31 0 

// description:SHTC1
// #define AOS_SENSOR_HUMI_SENSIRION_SHTC1 0 

// description:HTS221
// #define AOS_SENSOR_HUMI_ST_HTS221 0 

// description:SCD30
// #define AOS_SENSOR_CO2_SENSIRION_SCD30 0 

// description:ADPD188GG
// #define AOS_SENSOR_ECG_ADI_ADPD188GG 0 

// description:SGP30
// #define AOS_SENSOR_TVOC_SENSIRION_SGP30 0 

// description:CCS811
// #define AOS_SENSOR_TVOC_AMS_CCS811 0 

// description:SIM868
// #define AOS_SENSOR_GPS_SIMCOM_SIM868 0 

// description:ds1307
// #define AOS_SENSOR_RTC_MAXIM_DS1307 0 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  libiot_wrappers

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_SDK_WRAPPERS 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:Linkkit HAL for AliOS Things
// #define AOS_COMP_SDK_WRAPPERS 0 

// #endif

// description:support TLS
#define SUPPORT_TLS 1

// #if SUPPORT_TLS

// description:CAN NOT BE MODIFIED
#define HAL_TLS_DNS_ENHANCE 1

// #endif

// description:use MBEDTLS, depends on SUPPORT_TLS
#define USE_MBEDTLS 1

// description:use iTLS, depends on !USE_MBEDTLS
// #define USE_ITLS 0 

// description:support DTLS
// #define COAP_DTLS_SUPPORT 0 

// description:support save tls ticket, depends on  SUPPORT_TLS
// #define TLS_SAVE_TICKET 0 

// description:CAN NOT BE MODIFIED
#define HAL_KV 1

// description:CAN NOT BE MODIFIED
#define FORCE_SSL_VERIFY 1

// description:CAN NOT BE MODIFIED
#define BUILD_AOS 1

//================This is split line================
// KEYWORD: COMPONENT NAME IS  mcu_esp32

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_MCU_ESP32 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_MCU_ESP32 0 

// #endif

// #if AOS_MCU_ESP32

// description:CAN NOT BE MODIFIED
#define OSAL_CONFIG "rhino"

// description:mesh config
// #define MESH_CONFIG 0 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  lwip

// #if CONFIG_AOS_LWIP

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_LWIP 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:lwip
// #define AOS_COMP_LWIP 0 

// #endif

// #if AOS_COMP_LWIP

// description:AF_PACKET Support
// #define AF_PACKET_ENABLED 0 

// #if 0

// description:SNMP Support
// #define SNMP_ENABLED 0 

// description:HTTPD Support
// #define HTTPD_ENABLED 0 

// #endif

// description:IPERF Support
// #define IPERF_ENABLED 0 

// #if 0

// description:SNTP Support
// #define SNTP_ENABLED 0 

// description:MDNS Support
// #define MDNS_ENABLED 0 

// description:NETBIOSNS Support
// #define NETBIOSNS 0 

// #endif

// description:TFTP Support
// #define TFTP_ENABLED 0 

// #if TFTP_ENABLED

// description:TFTP_FS Support, depends on AOS_COMP_VFS
// #define TFTP_FS_ENABLED 0 

// #endif

// description:TELNETD Support
// #define TELNETD_ENABLED 0 

// description:DHCPD Support
// #define DHCPD_ENABLED 0 

// description:PING Support
// #define PING_ENABLED 0 

// description:SENDFILE Support
// #define SENDFILE_ENABLED 0 

// description:DNS Command Support
// #define DNSCLI_ENABLED 0 

// description:ARP Command Support
// #define ARPCLI_ENABLED 0 

// description:LSFD Command Support
// #define LSFDCLI_ENABLED 0 

// #endif

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  cjson

// description:cJSON library
// #define AOS_COMP_CJSON 0 

//================This is split line================
// KEYWORD: COMPONENT NAME IS  irot

// description:Root of Trust - MCU, SE and TEE
// #define AOS_COMP_IROT 0 

// #if AOS_COMP_IROT

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  libiot_sign

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_SDK_SIGN 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_SDK_SIGN 0 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  activation

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_ACTIVATION 0 

//================This is split line================
// KEYWORD: COMPONENT NAME IS  cli

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_CLI 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:Command-Line Interface
// #define AOS_COMP_CLI 0 

// #endif

// description:Minimum Working Mode Support
// #define CLI_CONFIG_MINIMUM_MODE 0 

// description:Input buffer size (bytes)
#define CLI_CONFIG_INBUF_SIZE 256

// description:Output buffer size (bytes)
#define CLI_CONFIG_OUTBUF_SIZE 512

// description:The maximum number of commands
#define CLI_CONFIG_MAX_COMMANDS 64

// description:The maximum number of command arguments
#define CLI_CONFIG_MAX_ARG_NUM 16

// description:The maximum number of commands in one line
#define CLI_CONFIG_MAX_ONCECMD_NUM 4

// description:The CLI task priority
#define CLI_CONFIG_TASK_PRIORITY 60

// description:Telnet Support
// #define CLI_CONFIG_TELNET_SUPPORT 0 

// description:Login Passwd Check Support
// #define CLI_CONFIG_PASSWD_SUPPORT 0 

//================This is split line================
// KEYWORD: COMPONENT NAME IS  debug

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED, depends on AOS_COMP_RHINO
#define AOS_COMP_DEBUG 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:Coredump debug Support, depends on AOS_COMP_RHINO
// #define AOS_COMP_DEBUG 0 

// #endif

// description:The interval(ms) for CPU usage
#define DEBUG_CONFIG_CPU_USAGE_PERIOD 2000

//================This is split line================
// KEYWORD: COMPONENT NAME IS  yloop

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_YLOOP 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:http
// #define AOS_COMP_YLOOP 0 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  board_esp32devkitc

// description:ESP32DevKitc
#define AOS_BOARD_ESP32DEVKITC 1

// #if AOS_BOARD_ESP32DEVKITC

// description:CAN NOT BE MODIFIED
#define BSP_SUPPORT_UART 1

// description:CAN NOT BE MODIFIED
#define BSP_SUPPORT_GPIO 1

// description:CAN NOT BE MODIFIED
#define BSP_SUPPORT_I2C 1

// description:CAN NOT BE MODIFIED
#define BSP_SUPPORT_FLASH 1

// description:CAN NOT BE MODIFIED
#define BSP_SUPPORT_ADC 1

// description:CAN NOT BE MODIFIED
#define BSP_SUPPORT_DAC 1

// description:CAN NOT BE MODIFIED
#define BSP_SUPPORT_PWM 1

// description:CAN NOT BE MODIFIED
#define BSP_SUPPORT_RTC 1

// description:CAN NOT BE MODIFIED
#define BSP_SUPPORT_WDG 1

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  ls_osa

// description:Link Secuirty OS Interface
// #define AOS_COMP_LS_OSA 0 

// #if AOS_COMP_LS_OSA

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  kv

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_KV 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:Key-value Storage
// #define AOS_COMP_KV 0 

// #endif

// description:The garbage collection task priority
#define KV_CONFIG_TASK_PRIORITY 32

// description:The garbage collection task stack size (bytes)
#define KV_CONFIG_TASK_STACK_SIZE 1024

// description:The maximum length of key buffer (bytes)
#define KV_CONFIG_MAX_KEY_LEN 128

// description:The maximum length of value buffer (bytes)
#define KV_CONFIG_MAX_VAL_LEN 512

// description:Key-value Storage Security Support
// #define KV_CONFIG_SECURE_SUPPORT 0 

// #if KV_CONFIG_SECURE_SUPPORT = 1

// description:Key-value Storage Security Level
// #define KV_CONFIG_SECURE_LEVEL 1 

// description:Key-value Storage security Implementation
// #define KV_CONFIG_SECURE_CRYPT_IMPL 1 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  mbedtls

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_MBEDTLS 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:Mbed TLS 2.16.0
// #define AOS_COMP_MBEDTLS 0 

// #endif

// description:mbedtls user extra configuration
// #define MBEDTLS_CONFIG_USER_CONFIG 0 

// description:mbedtls user extra configuration header file
// #define MBEDTLS_CONFIG_USER_FILE "" 

// description:Cryptographic algorithms support
#define MBEDTLS_CONFIG_CRYPTO 1

// #if MBEDTLS_CONFIG_CRYPTO

// description:MD5 hash algorithm
#define MBEDTLS_CONFIG_CRYPTO_MD5 1

// description:SHA1 hash algorithm
#define MBEDTLS_CONFIG_CRYPTO_SHA1 1

// description:SHA224 and SHA256 hash algorithm
#define MBEDTLS_CONFIG_CRYPTO_SHA256 1

// description:SHA384 and SHA512 hash algorithm
// #define MBEDTLS_CONFIG_CRYPTO_SHA512 0 

// description:RIPEMD160 hash algorithm
// #define MBEDTLS_CONFIG_CRYPTO_RIPEMD160 0 

// description:ARIA block cipher algorithm
// #define MBEDTLS_CONFIG_CRYPTO_ARIA 0 

// description:DES/3DES block cipher algorithm
// #define MBEDTLS_CONFIG_CRYPTO_DES 0 

// description:AES(128/192/256) block cipher algorithm
#define MBEDTLS_CONFIG_CRYPTO_AES 1

// description:Use precomputed AES tables stored in ROM, depends on MBEDTLS_CONFIG_CRYPTO_AES
// #define MBEDTLS_CONFIG_CRYPTO_AES_ROM_TABLES 0 

// description:Use less ROM/RAM for AES tables, depends on MBEDTLS_CONFIG_CRYPTO_AES
// #define MBEDTLS_CONFIG_CRYPTO_AES_FEWER_TABLES 0 

// description:Cipher Block Chaining mode (CBC) for symmetric block ciphers
#define MBEDTLS_CONFIG_CRYPTO_MODE_CBC 1

// description:Cipher Feedback mode (CFB) for symmetric block ciphers
#define MBEDTLS_CONFIG_CRYPTO_MODE_CFB 1

// description:Counter Block Cipher mode (CTR) for symmetric block ciphers
// #define MBEDTLS_CONFIG_CRYPTO_MODE_CTR 0 

// description:Output Feedback mode (OFB) for symmetric block ciphers
// #define MBEDTLS_CONFIG_CRYPTO_MODE_OFB 0 

// description:Xor-encrypt-xor with ciphertext stealing mode (XTS) for AES, depends on MBEDTLS_CONFIG_CRYPTO_AES
// #define MBEDTLS_CONFIG_CRYPTO_MODE_XTS 0 

// description:Galois/Counter Mode (GCM) for AES or Camellia, depends on MBEDTLS_CONFIG_CRYPTO_AES || MBEDTLS_CONFIG_CRYPTO_CAMELLIA
// #define MBEDTLS_CONFIG_CRYPTO_MODE_GCM 0 

// description:Counter with CBC-MAC (CCM) mode for 128-bit block cipher, depends on MBEDTLS_CONFIG_CRYPTO_AES || MBEDTLS_CONFIG_CRYPTO_CAMELLIA
// #define MBEDTLS_CONFIG_CRYPTO_MODE_CCM 0 

// description:ARC4 stream cipher algorithm
// #define MBEDTLS_CONFIG_CRYPTO_ARC4 0 

// description:Blowfish block cipher algorithm
// #define MBEDTLS_CONFIG_CRYPTO_BLOWFISH 0 

// description:Camellia block cipher algorithm
// #define MBEDTLS_CONFIG_CRYPTO_CAMELLIA 0 

// description:XTEA block cipher
// #define MBEDTLS_CONFIG_CRYPTO_XTEA 0 

// description:ChaCha20 stream cipher (RFC7539)
// #define MBEDTLS_CONFIG_CRYPTO_CHACHA20 0 

// description:Poly1305 MAC algorithm (RFC7539)
// #define MBEDTLS_CONFIG_CRYPTO_POLY1305 0 

// description:ChaCha20-Poly1305 AEAD algorithm (RFC7539)
// #define MBEDTLS_CONFIG_CRYPTO_CHACHAPOLY 0 

// #endif # MBEDTLS_CONFIG_CRYPTO

// description:X.509 certificate support
#define MBEDTLS_CONFIG_X509 1

// description:TLS/DTLS protocol support, depends on !AOS_COMP_MAL
#define MBEDTLS_CONFIG_TLS 1

// #if MBEDTLS_CONFIG_TLS

// description:TLS 1.2 (and DTLS 1.2 if DTLS is enabled) protocol support
#define MBEDTLS_CONFIG_TLS1_2 1

// description:DTLS protocol support
#define MBEDTLS_CONFIG_DTLS 1

// description:Enable debug functions in TLS/DTLS
// #define MBEDTLS_CONFIG_TLS_DEBUG 0 

// description:TLS/DTLS maximum incoming/outgoing content length
#define MBEDTLS_CONFIG_TLS_MAX_CONTENT_LEN 4096

// #endif # MBEDTLS_CONFIG_TLS

// description:CAN NOT BE MODIFIED
// #define MBEDTLS_CONFIG_SELFTEST 0 

// description:Error string support
// #define MBEDTLS_CONFIG_ERROR 0 

//================This is split line================
// KEYWORD: COMPONENT NAME IS  libiot_certs

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_SDK_CERT 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_SDK_CERT 0 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  libiot_coap

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define COAP_COMM_ENABLED 1

// description:CAN NOT BE MODIFIED
#define COAP_SERVER 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:FEATURE_COAP_COMM_ENABLED
// #define COAP_COMM_ENABLED 0 

// description:CAN NOT BE MODIFIED
// #define COAP_SERVER 0 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  ota

// #if AOS_CREATE_PROJECT

// description:OTA Features
#define AOS_COMP_OTA 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:OTA Features
// #define AOS_COMP_OTA 0 

// #endif

// description:Download Config
// #define OTA_CONFIG_DOWNLOAD 0 

// #if OTA_CONFIG_DOWNLOAD

// description:Secure Download Mode
// #define OTA_CONFIG_SECURE_DL_MODE 0 

// description:Download Retry Count
// #define OTA_DOWNLOAD_RETRY_CNT 5 

// description:Download Timeout(ms)
// #define OTA_DOWNLOAD_TIMEOUT 20000 

// description:Download Block Size(bytes)
// #define OTA_DOWNLOAD_BLOCK_SIZE 512 

// #endif

// description:RSA Verify Support
// #define OTA_CONFIG_RSA 0 

// #if OTA_CONFIG_RSA

// description:cloud sign
// #define OTA_CONFIG_CLOUD_RSA 0 

// description:local sign
// #define OTA_CONFIG_LOCAL_RSA 0 

// #endif

// description:write flash cache size(bytes)
#define OTA_FLASH_WRITE_CACHE_SIZE 1024

// description:MCU OTA Config
// #define OTA_CONFIG_MCU_OTA 0 

// #if OTA_CONFIG_MCU_OTA

// description:Ymodem upgrade Support
// #define OTA_CONFIG_MCU_YMODEM 1 

// description:CAN Master upgrade Support
// #define OTA_CONFIG_MCU_CAN 0 

// #endif

// description:BLE upgrade Support
// #define OTA_CONFIG_BLE 0 

// description:OTA via uAgent
// #define OTA_CONFIG_UAGENT 0 

//================This is split line================
// KEYWORD: COMPONENT NAME IS  libiot_mqtt

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_SDK_MQTT 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:FEATURE_MQTT_COMM_ENABLED
// #define AOS_COMP_SDK_MQTT 0 

// #endif

// description:FEATURE_MQTT_DEFAULT_IMPL
#define MQTT_DEFAULT_IMPL 1

// description:CAN NOT BE MODIFIED
// #define MQTT_PRE_AUTH 0 

// description:FEATURE_MQTT_DIRECT
#define MQTT_DIRECT 1

// description:CAN NOT BE MODIFIED
#define MQTT_AUTO_SUBSCRIBE 1

// description:FEATURE_ASYNC_PROTOCOL_STACK
// #define ASYNC_PROTOCOL_STACK 0 

// description:FEATURE_ENABLE_DYNAMIC_REGISTER
// #define ENABLE_DYNAMIC_REGISTER 0 

// description:FEATURE_MQTT_DYNAMIC_REGISTER, depends on DYNAMIC_REGISTER
// #define MQTT_DYNAMIC_REGISTER 0 

// description:CAN NOT BE MODIFIED
#define MQTT_COMM_ENABLED 1

//================This is split line================
// KEYWORD: COMPONENT NAME IS  libkm_tee

// description:Root of trust, TEE-KM
// #define AOS_COMP_LIBKM_TEE 0 

// #if AOS_COMP_LIBKM_TEE

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  uagent

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_UAGENT 1 

// #endif

// #if !AOS_CREATE_PROJECT

// description:uagent
// #define AOS_COMP_UAGENT 0 

// #endif

// description:Payload Length uAgent Support
// #define UAGENT_INFO_PAYLOAD_SIZE 1200 

//================This is split line================
// KEYWORD: COMPONENT NAME IS  osal_aos

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_OSAL_AOS 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:AOS API Support
// #define AOS_COMP_OSAL_AOS 1 

// #endif

// description:RHINO
#define OSAL_RHINO 1

// description:FREERTOS, depends on kernel_core = freertos
// #define OSAL_FREERTOS 0 

// description:CAN NOT BE MODIFIED
// #define OSAL_CONFIG "freertos" 

//================This is split line================
// KEYWORD: COMPONENT NAME IS  bt_host

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_BT_HOST 1 

// #endif

// #if !AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_BT_HOST 0 

// #endif

// description:Enable BLE SMP
// #define CONFIG_BT_SMP 0 

//================This is split line================
// KEYWORD: COMPONENT NAME IS  und

// description:Network Diagnosis
// #define AOS_COMP_UND 0 

// #if AOS_COMP_UND

// description:MQTT-Direct
// #define UND_CONFIG_USE_MQTT 1 

// description:uAgent
// #define UND_CONFIG_USE_UAGENT 0 

// description:Wi-Fi
// #define UND_CONFIG_WITH_WIFI 0 

// description:BLE
// #define UND_CONFIG_WITH_BLE 0 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  spiffs

// description:spiffs
// #define AOS_COMP_SPIFFS 0 

// #if AOS_COMP_SPIFFS

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  lib_rbtree

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_LIB_RBTREE 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:rbtree code
// #define AOS_COMP_LIB_RBTREE 1 

// #endif

// #if AOS_COMP_LIB_RBTREE

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  alicrypto

// description:Crypto Support
// #define AOS_COMP_ALICRYPTO 0 

// #if AOS_COMP_ALICRYPTO

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  vfs

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_VFS 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:Virtual File System
// #define AOS_COMP_VFS 0 

// #endif

// description:The maximum number of VFS device nodes
#define VFS_CONFIG_DEVICE_NODES 25

// description:The default offset of VFS file descriptor
#define VFS_CONFIG_FD_OFFSET 512

// description:The maximum length of device path (bytes)
#define VFS_CONFIG_PATH_MAX 256

// description:The maximum number of VFS files
#define VFS_CONFIG_MAX_FILE_NUM 50

// description:Current Directory Recording Support
// #define VFS_CONFIG_CURRENT_DIRECTORY_ENABLE 0 

//================This is split line================
// KEYWORD: COMPONENT NAME IS  kernel_init

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_KERNEL_INIT 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:Initialize Function
// #define AOS_COMP_KERNEL_INIT 0 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  id2

// description:Link Security ID2
// #define AOS_COMP_ID2 0 

// #if AOS_COMP_ID2

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  chip_code

// description:Chip_code
// #define AOS_COMP_CHIP_CODE 0 

//================This is split line================
// KEYWORD: COMPONENT NAME IS  http

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_HTTP 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:http
// #define AOS_COMP_HTTP 0 

// #endif

// description:New API
// #define CONFIG_NEW_HTTP_API 0 

// description:Support HTTP Secure
// #define CONFIG_HTTP_SECURE 0 

// #if CONFIG_HTTP_SECURE

// description:HTTPS over MbedTLS
// #define CONFIG_HTTP_SECURE_TLS 0 

// description:HTTPS over iTLS
// #define CONFIG_HTTP_SECURE_ITLS 0 

// #endif

// description:The maximum http session, depends on !CONFIG_NEW_HTTP_API
#define CONFIG_HTTPC_SESSION_NUM 1

// description:The size of server name, depends on !CONFIG_NEW_HTTP_API
#define CONFIG_HTTPC_SERVER_NAME_SIZE 64

// description:HTTP client user agent, depends on !CONFIG_NEW_HTTP_API
#define CONFIG_HTTPC_DEFAULT_CLIENT "AliOS-HTTP-Client/2.1"

// description:http status size, depends on !CONFIG_NEW_HTTP_API
#define CONFIG_HTTP_STATUS_SIZE 32

// description:Enable mutex, depends on !CONFIG_NEW_HTTP_API
#define CONFIG_HTTP_ENABLE_MUTEX 1

// description:Enable debug, depends on !CONFIG_NEW_HTTP_API
// #define CONFIG_HTTP_DEBUG 0 

//================This is split line================
// KEYWORD: COMPONENT NAME IS  netmgr

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_NETMGR 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:netmgr
// #define AOS_COMP_NETMGR 0 

// #endif

// #if pvtest

// description:Enable prevalidate test
// #define PREVALIDATE_TEST 1 

// #endif

// #if AOS_COMP_NETMGR

// description:Enable Netmgr with Cellular
// #define AOS_NET_WITH_CELLULAR 0 

// description:Enable Netmgr with Wi-Fi
#define AOS_NET_WITH_WIFI 1

// description:Enable Netmgr with Ethernet
// #define AOS_NET_WITH_ETH 0 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  arch_xtensa_lx6

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_ARCH_XTENSA_LX6 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_ARCH_XTENSA_LX6 0 

// #endif

// #if AOS_ARCH_XTENSA_LX6

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  ulog

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_ULOG 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:uLog Support
// #define AOS_COMP_ULOG 0 

// #endif

// description:Level Stop Filter of Default Direction(UART for RTOS)
#define ULOG_CONFIG_STOP_FILTER_DEFAULT 6

// description:Max Length of Log Text
#define ULOG_CONFIG_LOG_SIZE 256

// description:Support syslog Time Format when Log
// #define ULOG_CONFIG_SYSLOG_TIME_FORMAT 0 

// description:Enable Rich Details for Log
// #define ULOG_CONFIG_SYNC_LOG_DETAILS 0 

// #if ULOG_CONFIG_SYNC_LOG_DETAILS

// description:Enable Color Font for More Details
// #define ULOG_CONFIG_SYNC_DETAIL_COLOR 0 

// description:Enable Log Absolute Path under Detail Mode
// #define ULOG_CONFIG_SYNC_ABS_PATH 0 

// #endif

// description:Switch on Pop Out Log to Cloud
// #define ULOG_CONFIG_POP_CLOUD 0 

// #if ULOG_CONFIG_POP_CLOUD

// description:Level Stop Filter to Cloud
// #define ULOG_CONFIG_STOP_FILTER_CLOUD 0 

// #endif

// description:Switch on Pop Out Log Into File System
// #define ULOG_CONFIG_POP_FS 0 

// #if ULOG_CONFIG_POP_FS

// description:Level Stop Filter of FS
// #define ULOG_CONFIG_STOP_FILTERFS ULOG_CONFIG_FS_SPIFFS 

// description:SPIFFS
// #define ULOG_CONFIG_FS_SPIFFS 0 

// description:SD Card
// #define ULOG_CONFIG_FS_FATFS_SD 0 

// description:FATFS Flash
// #define ULOG_CONFIG_FS_FATFS_FLASH 0 

// description:Max uLog Files on File System
// #define ULOG_CONFIG_LOCAL_FILE_CNT 5 

// description:Max uLog File Size
// #define ULOG_CONFIG_LOCAL_FILE_SIZE 4096 

// description:Reserved Log Temporary When FS is not Ready
// #define ULOG_CONFIG_RESERVED_FS 0 

// #if ULOG_CONFIG_RESERVED_FS

// description:Count of Reserved Log When FS is not Ready
// #define ULOG_CONFIG_RESERVED_FS_SIZE 64 

// #endif

// description:Upload Log File via http
// #define ULOG_CONFIG_UPLOAD 0 

// #endif

// description:Switch on Pop Out Log via Syslog UDP
// #define ULOG_CONFIG_POP_UDP 0 

// #if ULOG_CONFIG_POP_UDP

// description:Level Stop Filter of UDP
// #define ULOG_CONFIG_STOP_FILTER_UDP 4 

// #endif

// description:Using Async Mode to Log on Default Direct
// #define ULOG_CONFIG_DEFAULT_DIR_ASYNC 0 

// description:CAN NOT BE MODIFIED
// #define ULOG_CONFIG_ASYNC 0 

// #if ULOG_CONFIG_ASYNC

// description:Stack Depth of Log Task Under Async Mode
// #define ULOG_CONFIG_LOG_ROUTINE_TASK_STACK_DEPTH 3072 

// description:Default Size of Buffer Queue Under Async Mode
// #define ULOG_CONFIG_ASYNC_BUF_SIZE 5120 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  libiot_dynreg

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define DYNAMIC_REGISTER 1 

// #endif

// #if !AOS_CREATE_PROJECT

// description:FEATURE_DYNAMIC_REGISTER
// #define DYNAMIC_REGISTER 0 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  rhino

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_RHINO 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:Kernel Core (rhino)
// #define AOS_COMP_RHINO 1 

// #endif

// #if 0

// description:RHINO_CONFIG_SEM
// #define RHINO_CONFIG_SEM 1 

// description:RHINO_CONFIG_QUEUE
// #define RHINO_CONFIG_QUEUE 1 

// description:RHINO_CONFIG_BUF_QUEUE
// #define RHINO_CONFIG_BUF_QUEUE 1 

// description:RHINO_CONFIG_WORKQUEUE
// #define RHINO_CONFIG_WORKQUEUE 0 

// #if RHINO_CONFIG_WORKQUEUE = 1

// description:RHINO_CONFIG_WORKQUEUE_STACK_SIZE
// #define RHINO_CONFIG_WORKQUEUE_STACK_SIZE 512 

// description:RHINO_CONFIG_WORKQUEUE_TASK_PRIO
// #define RHINO_CONFIG_WORKQUEUE_TASK_PRIO 20 

// #endif

// description:RHINO_CONFIG_TIMER
// #define RHINO_CONFIG_TIMER 1 

// #if RHINO_CONFIG_TIMER = 1

// description:RHINO_CONFIG_TIMER_TASK_STACK_SIZE
// #define RHINO_CONFIG_TIMER_TASK_STACK_SIZE 200 

// description:RHINO_CONFIG_TIMER_TASK_PRI
// #define RHINO_CONFIG_TIMER_TASK_PRI 5 

// #endif

// description:RHINO_CONFIG_MM_TLF
// #define RHINO_CONFIG_MM_TLF 1 

// #if RHINO_CONFIG_MM_TLF = 1

// description:RHINO_CONFIG_MM_DEBUG
// #define RHINO_CONFIG_MM_DEBUG 0 

// #endif

// description:RHINO_CONFIG_SCHED_RR
// #define RHINO_CONFIG_SCHED_RR 1 

// #if RHINO_CONFIG_SCHED_RR = 1

// description:RHINO_CONFIG_TIME_SLICE_DEFAULT
// #define RHINO_CONFIG_TIME_SLICE_DEFAULT 50 

// #endif

// description:RHINO_CONFIG_TICKS_PER_SECOND
// #define RHINO_CONFIG_TICKS_PER_SECOND 100 

// description:RHINO_CONFIG_PRI_MAX
// #define RHINO_CONFIG_PRI_MAX 62 

// description:RHINO_CONFIG_TASK_STACK_OVF_CHECK
// #define RHINO_CONFIG_TASK_STACK_OVF_CHECK 1 

// description:RHINO_CONFIG_IDLE_TASK_STACK_SIZE
// #define RHINO_CONFIG_IDLE_TASK_STACK_SIZE 100 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  itls

// description:Lightweight TLS Support by ID2
// #define AOS_COMP_ITLS 0 

// #if AOS_COMP_ITLS

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  breeze_hal

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_BREEZE_HAL 1 

// #endif

// #if !AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_BREEZE_HAL 0 

// #endif

// description:CAN NOT BE MODIFIED
// #define CONFIG_COMP_BZ_HAL_BLESTACK 1 

// description:CAN NOT BE MODIFIED
// #define CONFIG_COMP_BZ_HAL_CRYPTO_MEBDTLS 0 

//================This is split line================
// KEYWORD: COMPONENT NAME IS  ls_hal

// description:Link Security Hardware Interface
// #define AOS_COMP_LS_HAL 0 

// #if AOS_COMP_LS_HAL

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  libiot_awss

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_SDK_AWSS 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:FEATURE_WIFI_PROVISION_ENABLED
// #define AOS_COMP_SDK_AWSS 0 

// #endif

// description:CAN NOT BE MODIFIED
#define AWSS_SUPPORT_APLIST 1

// description:CAN NOT BE MODIFIED
// #define AWSS_DISABLE_ENROLLEE 0 

// description:CAN NOT BE MODIFIED
// #define AWSS_DISABLE_REGISTRAR 0 

// description:CAN NOT BE MODIFIED
#define AWSS_SUPPORT_SMARTCONFIG_WPS 1

// description:CAN NOT BE MODIFIED, depends on AOS_COMP_SDK_AWSS
#define AWSS_SUPPORT_DISCOVER 1

// description:FEATURE_AWSS_SUPPORT_BLE_PROVISION
// #define AWSS_SUPPORT_BLE_PROVISION 0 

// description:FEATURE_AWSS_SUPPORT_SMARTCONFIG
#define AWSS_SUPPORT_SMARTCONFIG 1

// description:FEATURE_AWSS_SUPPORT_SMARTCONFIG_MCAST, depends on AWSS_SUPPORT_SMARTCONFIG
#define AWSS_SUPPORT_SMARTCONFIG_MCAST 1

// description:FEATURE_AWSS_SUPPORT_ZEROCONFIG
#define AWSS_SUPPORT_ZEROCONFIG 1

// description:FEATURE_AWSS_SUPPORT_AHA
// #define AWSS_SUPPORT_AHA 0 

// description:FEATURE_AWSS_SUPPORT_DEV_AP
// #define AWSS_SUPPORT_DEV_AP 0 

// description:CAN NOT BE MODIFIED
#define WIFI_PROVISION_ENABLED 1

// description:CAN NOT BE MODIFIED
#define DEV_BIND_ENABLED 1

// description:CAN NOT BE MODIFIED
#define CONFIG_YWSS 1

// description:CAN NOT BE MODIFIED
// #define AWSS_SUPPORT_ADHA 1 

// description:CAN NOT BE MODIFIED
// #define ESP8266_CONFIG 1 

// description:CAN NOT BE MODIFIED
// #define AWSS_SUPPORT_STATIS 1 

// description:CAN NOT BE MODIFIED
// #define MK3165_CONFIG 1 

//================This is split line================
// KEYWORD: COMPONENT NAME IS  libiot_devmodel

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_SDK_DEVMODEL 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:FEATURE_DEVICE_MODEL_ENABLED
// #define AOS_COMP_SDK_DEVMODEL 0 

// #endif

// description:FEATURE_DEVICE_MODEL_GATEWAY
// #define DEVICE_MODEL_GATEWAY 0 

// description:FEATURE_DEPRECATED_LINKKIT
// #define DEPRECATED_LINKKIT 0 

// description:FEATURE_DEVICE_MODEL_RAWDATA_SOLO, depends on DEVICE_MODEL_ENABLED && !DEVICE_MODEL_GATEWAY && !DEPRECATED_LINKKIT
// #define DEVICE_MODEL_RAWDATA_SOLO 0 

// description:FEATURE_ALCS_ENABLED
// #define ALCS_ENABLED 0 

// description:FEATURE_DEVICE_MODEL_SUBDEV_OTA, depends on OTA_ENABLED
// #define DEVICE_MODEL_SUBDEV_OTA 0 

// description:FEATURE_DEVICE_MODEL_SHADOW
// #define DEVICE_MODEL_SHADOW 0 

// description:FEATURE_LOG_REPORT_TO_CLOUD
// #define LOG_REPORT_TO_CLOUD 0 

// description:CAN NOT BE MODIFIED
#define DEVICE_MODEL_ENABLED 1

//================This is split line================
// KEYWORD: COMPONENT NAME IS  breeze

// #if AOS_CREATE_PROJECT

// description:BLE breeze SDK
// #define AOS_COMP_BREEZE 1 

// #endif

// #if !AOS_CREATE_PROJECT

// description:BLE breeze SDK
// #define AOS_COMP_BREEZE 0 

// #endif

// description:Enable secure and sequential advertising.
// #define CONFIG_AIS_SECURE_ADV 0 

// description:Enable auth per product, otherwise auth for per device.
// #define CONFIG_MODEL_SECURITY 0 

// description:Enable AWSS, providing secured ble link for wifi provision.
// #define EN_COMBO_NET 0 

// description:Enable authentication.
// #define EN_AUTH 1 

// #if EN_AUTH

// description:Authentication offline, otherwise online
// #define EN_AUTH_OFFLINE 0 

// description:Authentation Timeout, ms
// #define BZ_AUTH_TIMEOUT 10000 

// #endif

// description:Transportion Timeout, ms
// #define BZ_TRANSPORT_TIMEOUT 10000 

// description:CAN NOT BE MODIFIED
// #define BZ_VERSION "2.0.5" 

// description:Extend MTU from default 20 bytes to long MTU.
// #define EN_LONG_MTU 0 

// description:CAN NOT BE MODIFIED
// #define GATT_MTU_SIZE_DEFAULT 23 

// description:CAN NOT BE MODIFIED
// #define BZ_MTU_SIZE_DEFAULT 20 

// description:CAN NOT BE MODIFIED
// #define ENCRYPT_DATA_SIZE 16 

// description:CAN NOT BE MODIFIED
// #define BZ_MTU_SIZE_LIMIT 128 

// description:CAN NOT BE MODIFIED
// #define GATT_MTU_SIZE_LIMIT 135 

// description:CAN NOT BE MODIFIED
// #define BZ_MAX_PAYLOAD_SIZE 256 

// description:CAN NOT BE MODIFIED
// #define BZ_TRANSPORT_VER 0 

// description:CAN NOT BE MODIFIED
// #define BZ_BLUETOOTH_VER 1 

// description:CAN NOT BE MODIFIED
// #define BZ_MAX_SUPPORTED_MTU 247 

// description:Enable default built-in HALs:blestack, AliOS Things and crypto.
// #define CONFIG_COMP_BZ_BUILTIN_HAL 1 

//================This is split line================
// KEYWORD: COMPONENT NAME IS  envmon

// description:Linkkit Application
#define AOS_APP_ENVMON 1

// #if AOS_APP_ENVMON

// description:Enable OTA
#define ENABLE_OTA 1

// description:SOLO
#define LINKKITAPP_CONFIG_CASE_SOLO 1

// description:Sched
// #define LINKKITAPP_CONFIG_CASE_SCHED 0 

// description:Cntdown
// #define LINKKITAPP_CONFIG_CASE_CNTDOWN 0 

// description:Show Free Heap Duration
// #define LINKKITAPP_CONFIG_PRINT_HEAP 0 

// description:BLE Enable, depends on AWSS_SUPPORT_BLE_PROVISION
// #define BLE 1 

// description:Firmware Version
#define SYSINFO_APP_VERSION "app-1.0.0-20200214.140831"

// #endif

// description:CAN NOT BE MODIFIED
#define AOS_CREATE_PROJECT 1

// description:CAN NOT BE MODIFIED
#define AOS_BUILD_BOARD "esp32devkitc"

// description:CAN NOT BE MODIFIED
#define AOS_BUILD_APP "envmon"

// description:CAN NOT BE MODIFIED
// #define AOS_SDK_PATH "" 

// description:CAN NOT BE MODIFIED
// #define USER_APP_PATH "" 

// #if ((USE_ITLS) || (ENABLE_OTA) || (((ENABLE_OTA) && !OTA_CONFIG_BLE) && CONFIG_HTTP_SECURE_ITLS))

// #endif

// #if ((AWSS_SUPPORT_BLE_PROVISION))

// #endif

// #if (((AWSS_SUPPORT_BLE_PROVISION) && CONFIG_COMP_BZ_BUILTIN_HAL))

// #endif

// #if (((EN_BLE_HOST&&!bt_mesh_standalone_deploy)) || (((AWSS_SUPPORT_BLE_PROVISION) && CONFIG_COMP_BZ_BUILTIN_HAL) && CONFIG_COMP_BZ_HAL_BLESTACK))

// #endif

// #if (((EN_BLE_HOST&&!bt_mesh_standalone_deploy)) || (((AWSS_SUPPORT_BLE_PROVISION) && CONFIG_COMP_BZ_BUILTIN_HAL) && CONFIG_COMP_BZ_HAL_BLESTACK))

// #endif

// #if ((ULOG_CONFIG_FS_FATFS_FLASH || ULOG_CONFIG_FS_FATFS_SD))

// #endif

// #if (((ENABLE_OTA) && !OTA_CONFIG_BLE))

// #endif

// #if ((USE_ITLS) || (ENABLE_OTA) || (((ENABLE_OTA) && !OTA_CONFIG_BLE) && CONFIG_HTTP_SECURE_ITLS))

// #endif

// #if ((USE_ITLS) || (ENABLE_OTA) || (((ENABLE_OTA) && !OTA_CONFIG_BLE) && CONFIG_HTTP_SECURE_ITLS))

// #endif

// #if ((USE_ITLS) || (ENABLE_OTA) || (((ENABLE_OTA) && !OTA_CONFIG_BLE) && CONFIG_HTTP_SECURE_ITLS))

// #endif

// #if ((SUPPORT_TLS || COAP_DTLS_SUPPORT))

// #endif

// #if ((ENABLE_DYNAMIC_REGISTER))

// #endif

// #if ((USE_ITLS) || (ENABLE_OTA) || (((ENABLE_OTA) && !OTA_CONFIG_BLE) && CONFIG_HTTP_SECURE_ITLS))

// #endif

// #if ((USE_ITLS) || (ENABLE_OTA) || (((ENABLE_OTA) && !OTA_CONFIG_BLE) && CONFIG_HTTP_SECURE_ITLS))

// #endif

// #if ((USE_ITLS) || (ENABLE_OTA) || (((ENABLE_OTA) && !OTA_CONFIG_BLE) && CONFIG_HTTP_SECURE_ITLS))

// #endif

// #if ((USE_ITLS) || (ENABLE_OTA) || (((ENABLE_OTA) && !OTA_CONFIG_BLE) && CONFIG_HTTP_SECURE_ITLS))

// #endif

// #if ((USE_ITLS) || (ENABLE_OTA) || (((ENABLE_OTA) && !OTA_CONFIG_BLE) && CONFIG_HTTP_SECURE_ITLS))

// #endif

// #if ((ENABLE_OTA))

// #endif

// #if ((ULOG_CONFIG_FS_SPIFFS))

// #endif

// #if ((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) || (UND_CONFIG_USE_UAGENT))

// #endif


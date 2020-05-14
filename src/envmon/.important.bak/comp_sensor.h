//================This is split line================
// KEYWORD: COMPONENT NAME IS  sensor

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_SENSOR 1 // type: bool

// #endif

// #if !AOS_CREATE_PROJECT

// description:Sensor Drivers Configuration
// #define AOS_COMP_SENSOR 0 // type: bool

// #endif

// description:Enable Sensor Depends
// #define SENSOR_CONFIG_DEPENDS_ENABLE 1 // type: bool

// description:Enable Sensor Interrupt
// #define SENSOR_CONFIG_INT_ENABLE 0 // type: bool

// description:Enable Modbus Sensors
// #define SENSOR_CONFIG_MODBUS_ENABLE 0 // type: bool

// #if SENSOR_CONFIG_MODBUS_ENABLE

// description:ZD-6
// #define AOS_SENSOR_ALS_KUNLUN_ZD6 0 // type: bool

// description:MSLT100MB
// #define AOS_SENSOR_ALS_MTM_MSLT100MB 0 // type: bool

// description:JQYB
// #define AOS_SENSOR_BARO_KUNLUN_JQYB 0 // type: bool

// description:MSP1000MB
// #define AOS_SENSOR_BARO_MTM_MSP1000MB 0 // type: bool

// description:JQAW-6W1-V
// #define AOS_SENSOR_CO2_KUNLUN_JQAW6W1V 0 // type: bool

// description:HAQEAW
// #define AOS_SENSOR_CO2_HONEYWELL_HAQEAW 0 // type: bool

// description:MSCO2MB
// #define AOS_SENSOR_CO2_MTM_MSCO2MB 0 // type: bool

// description:HAQEAW
// #define AOS_SENSOR_TVOC_HONEYWELL_HAQEAW 0 // type: bool

// description:JWSK-V
// #define AOS_SENSOR_TEMP_KUNLUN_JWSKV 0 // type: bool

// description:JTWS-AC
// #define AOS_SENSOR_TEMP_KUNLUN_JTWSAC 0 // type: bool

// description:HAQEAW
// #define AOS_SENSOR_TEMP_HONEYWELL_HAQEAW 0 // type: bool

// description:MSTH1000
// #define AOS_SENSOR_TEMP_MTM_MSTH1000 0 // type: bool

// description:MSPH10
// #define AOS_SENSOR_TEMP_MTM_MSPH10 0 // type: bool

// description:MSEC10
// #define AOS_SENSOR_TEMP_MTM_MSEC10 0 // type: bool

// description:MLWS10
// #define AOS_SENSOR_TEMP_MTM_MLWS10 0 // type: bool

// description:JWSK-V
// #define AOS_SENSOR_HUMI_KUNLUN_JWSKV 0 // type: bool

// description:HAQEAW
// #define AOS_SENSOR_HUMI_HONEYWELL_HAQEAW 0 // type: bool

// description:MSTH1000
// #define AOS_SENSOR_HUMI_MTM_MSTH1000 0 // type: bool

// description:MSN1000MB
// #define AOS_SENSOR_NOISE_MTM_MSN1000MB 0 // type: bool

// description:MSF1000MB
// #define AOS_SENSOR_HCHO_MTM_MSF1000MB 0 // type: bool

// description:HAQEAW
// #define AOS_SENSOR_HCHO_HONEYWELL_HAQEAW 0 // type: bool

// description:MSPM25MB
// #define AOS_SENSOR_PM25_MTM_MSPM25MB 0 // type: bool

// description:HAQEAW
// #define AOS_SENSOR_PM25_HONEYWELL_HAQEAW 0 // type: bool

// description:MSPM25MB
// #define AOS_SENSOR_PM1_MTM_MSPM25MB 0 // type: bool

// description:MSPM25MB
// #define AOS_SENSOR_PM10_MTM_MSPM25MB 0 // type: bool

// description:MSPH10
// #define AOS_SENSOR_PH_MTM_MSPH10 0 // type: bool

// description:JTWS-AC
// #define AOS_SENSOR_VWC_KUNLUN_JTWSAC 0 // type: bool

// description:MLWS10
// #define AOS_SENSOR_VWC_MTM_MLWS10 0 // type: bool

// description:MSSM10
// #define AOS_SENSOR_VWC_MTM_MSSM10 0 // type: bool

// description:MSEC10
// #define AOS_SENSOR_EC_MTM_MSEC10 0 // type: bool

// description:MSEC10
// #define AOS_SENSOR_SALINITY_MTM_MSEC10 0 // type: bool

// description:MSEC10
// #define AOS_SENSOR_TDS_MTM_MSEC10 0 // type: bool

// description:JHFS-W1
// #define AOS_SENSOR_WINDSPEED_KUNLUN_JHFSW1 0 // type: bool

// description:JHFX-W1
// #define AOS_SENSOR_WINDDIRECTION_KUNLUN_JHFXW1 0 // type: bool

// description:JHYL-W1
// #define AOS_SENSOR_CURRENTRAINFALL_KUNLUN_JHYLW1 0 // type: bool

// description:JHYL-W1
// #define AOS_SENSOR_DAILYRAINFALL_KUNLUN_JHYLW1 0 // type: bool

// #endif

// description:Enable SPI Bus Sensors
// #define SENSOR_CONFIG_SPI_ENABLE 0 // type: bool

// #if SENSOR_CONFIG_SPI_ENABLE

// description:BME280
// #define AOS_SENSOR_BARO_BME280_SPI 0 // type: bool

// description:BME280
// #define AOS_SENSOR_TEMP_BME280_SPI 0 // type: bool

// description:BME280
// #define AOS_SENSOR_HUMI_BME280_SPI 0 // type: bool

// #endif

// description:Enable I2C Bus Sensors
// #define SENSOR_CONFIG_I2C_ENABLE 1 // type: bool

// #if SENSOR_CONFIG_I2C_ENABLE

// description:ADXL372
// #define AOS_SENSOR_ACC_ADI_ADXL372 0 // type: bool

// description:ADXL345
// #define AOS_SENSOR_ACC_ADI_ADXL345 0 // type: bool

// description:ADXL355
// #define AOS_SENSOR_ACC_ADI_ADXL355 0 // type: bool

// description:BMA253
// #define AOS_SENSOR_ACC_BOSCH_BMA253 0 // type: bool

// description:BMA280
// #define AOS_SENSOR_ACC_BOSCH_BMA280 0 // type: bool

// description:BMA421
// #define AOS_SENSOR_ACC_BOSCH_BMA421 0 // type: bool

// description:BMA422
// #define AOS_SENSOR_ACC_BOSCH_BMA422 0 // type: bool

// description:BMA455
// #define AOS_SENSOR_ACC_BOSCH_BMA455 0 // type: bool

// description:BMA456
// #define AOS_SENSOR_ACC_BOSCH_BMA456 0 // type: bool

// description:BMI055
// #define AOS_SENSOR_ACC_BOSCH_BMI055 0 // type: bool

// description:BMI088
// #define AOS_SENSOR_ACC_BOSCH_BMI088 0 // type: bool

// description:BMI120
// #define AOS_SENSOR_ACC_BOSCH_BMI120 0 // type: bool

// description:BMI160
// #define AOS_SENSOR_ACC_BOSCH_BMI160 0 // type: bool

// description:BMI260
// #define AOS_SENSOR_ACC_BOSCH_BMI260 0 // type: bool

// description:SH200L
// #define AOS_SENSOR_ACC_SENODIA_SH200L 0 // type: bool

// description:SH200Q
// #define AOS_SENSOR_ACC_SENODIA_SH200Q 0 // type: bool

// description:LSM6DS3
// #define AOS_SENSOR_ACC_ST_LSM6DS3 0 // type: bool

// description:LSM6DS3TR_C
// #define AOS_SENSOR_ACC_ST_LSM6DS3TR_C 0 // type: bool

// description:LSM6DSL
// #define AOS_SENSOR_ACC_ST_LSM6DSL 0 // type: bool

// description:LSM6DSM
// #define AOS_SENSOR_ACC_ST_LSM6DSM 0 // type: bool

// description:LSM6DSOQ
// #define AOS_SENSOR_ACC_ST_LSM6DSOQ 0 // type: bool

// description:LSM6DSR
// #define AOS_SENSOR_ACC_ST_LSM6DSR 0 // type: bool

// description:LSM303AGR
// #define AOS_SENSOR_ACC_ST_LSM303AGR 0 // type: bool

// description:DA213B
// #define AOS_SENSOR_ACC_MIR3_DA213B 0 // type: bool

// description:DA215
// #define AOS_SENSOR_ACC_MIR3_DA215 0 // type: bool

// description:DA217
// #define AOS_SENSOR_ACC_MIR3_DA217 0 // type: bool

// description:DA270
// #define AOS_SENSOR_ACC_MIR3_DA270 0 // type: bool

// description:DA312B
// #define AOS_SENSOR_ACC_MIR3_DA312B 0 // type: bool

// description:DA380B
// #define AOS_SENSOR_ACC_MIR3_DA380B 0 // type: bool

// description:AIS328DQ
// #define AOS_SENSOR_ACC_ST_AIS328DQ 0 // type: bool

// description:H3LIS100DL
// #define AOS_SENSOR_ACC_ST_H3LIS100DL 0 // type: bool

// description:H3LIS331DL
// #define AOS_SENSOR_ACC_ST_H3LIS331DL 0 // type: bool

// description:LIS2DH12
// #define AOS_SENSOR_ACC_ST_LIS2DH12 0 // type: bool

// description:LIS2DW12
// #define AOS_SENSOR_ACC_ST_LIS2DW12 0 // type: bool

// description:LIS2HH12
// #define AOS_SENSOR_ACC_ST_LIS2HH12 0 // type: bool

// description:LIS3DH
// #define AOS_SENSOR_ACC_ST_LIS3DH 0 // type: bool

// description:LIS331HH
// #define AOS_SENSOR_ACC_ST_LIS331HH 0 // type: bool

// description:N2DM
// #define AOS_SENSOR_ACC_ST_N2DM 0 // type: bool

// description:BMI055
// #define AOS_SENSOR_GYRO_BOSCH_BMI055 0 // type: bool

// description:BMI088
// #define AOS_SENSOR_GYRO_BOSCH_BMI088 0 // type: bool

// description:BMI120
// #define AOS_SENSOR_GYRO_BOSCH_BMI120 0 // type: bool

// description:BMI160
// #define AOS_SENSOR_GYRO_BOSCH_BMI160 0 // type: bool

// description:BMI260
// #define AOS_SENSOR_GYRO_BOSCH_BMI260 0 // type: bool

// description:SH200L
// #define AOS_SENSOR_GYRO_SENODIA_SH200L 0 // type: bool

// description:SH200Q
// #define AOS_SENSOR_GYRO_SENODIA_SH200Q 0 // type: bool

// description:LSM6DS3
// #define AOS_SENSOR_GYRO_ST_LSM6DS3 0 // type: bool

// description:LSM6DS3TR_C
// #define AOS_SENSOR_GYRO_ST_LSM6DS3TR_C 0 // type: bool

// description:LSM6DSL
// #define AOS_SENSOR_GYRO_ST_LSM6DSL 0 // type: bool

// description:LSM6DSM
// #define AOS_SENSOR_GYRO_ST_LSM6DSM 0 // type: bool

// description:LSM6DSOQ
// #define AOS_SENSOR_GYRO_ST_LSM6DSOQ 0 // type: bool

// description:LSM6DSR
// #define AOS_SENSOR_GYRO_ST_LSM6DSR 0 // type: bool

// description:BMG160
// #define AOS_SENSOR_GYRO_BOSCH_BMG160 0 // type: bool

// description:A3G4250D
// #define AOS_SENSOR_GYRO_ST_A3G4250D 0 // type: bool

// description:I3G4250D
// #define AOS_SENSOR_GYRO_ST_I3G4250D 0 // type: bool

// description:L3GD20H
// #define AOS_SENSOR_GYRO_ST_L3GD20H 0 // type: bool

// description:BMM150
// #define AOS_SENSOR_MAG_BOSCH_BMM150 0 // type: bool

// description:LSM303AGR
// #define AOS_SENSOR_MAG_ST_LSM303AGR 0 // type: bool

// description:AK09917
// #define AOS_SENSOR_MAG_AKM_AK09917 0 // type: bool

// description:AK09918
// #define AOS_SENSOR_MAG_AKM_AK09918 0 // type: bool

// description:AK09940
// #define AOS_SENSOR_MAG_AKM_AK09940 0 // type: bool

// description:BM1422A
// #define AOS_SENSOR_MAG_ROHM_BM1422A 0 // type: bool

// description:ST350
// #define AOS_SENSOR_MAG_SENODIA_ST350 0 // type: bool

// description:ST480
// #define AOS_SENSOR_MAG_SENODIA_ST480 0 // type: bool

// description:LIS2MDL
// #define AOS_SENSOR_MAG_ST_LIS2MDL 0 // type: bool

// description:LIS3MDL
// #define AOS_SENSOR_MAG_ST_LIS3MDL 0 // type: bool

// description:MMC3680KJ
// #define AOS_SENSOR_MAG_MEMSIC_MMC3680KJ 0 // type: bool

// description:TCS3400
// #define AOS_SENSOR_ALS_AMS_TCS3400 0 // type: bool

// description:TMD2725
// #define AOS_SENSOR_ALS_AMS_TMD2725 0 // type: bool

// description:LTR303
// #define AOS_SENSOR_ALS_LITEON_LTR303 0 // type: bool

// description:LTR568
// #define AOS_SENSOR_ALS_LITEON_LTR568 0 // type: bool

// description:LTR507
// #define AOS_SENSOR_ALS_LITEON_LTR507 0 // type: bool

// description:LTR553
// #define AOS_SENSOR_ALS_LITEON_LTR553 0 // type: bool

// description:LTR559
// #define AOS_SENSOR_ALS_LITEON_LTR559 0 // type: bool

// description:BH1730
// #define AOS_SENSOR_ALS_ROHM_BH1730 0 // type: bool

// description:TMD2725
// #define AOS_SENSOR_PS_AMS_TMD2725 0 // type: bool

// description:LTR507
// #define AOS_SENSOR_PS_LITEON_LTR507 0 // type: bool

// description:LTR553
// #define AOS_SENSOR_PS_LITEON_LTR553 0 // type: bool

// description:LTR559
// #define AOS_SENSOR_PS_LITEON_LTR559 0 // type: bool

// description:LTR659
// #define AOS_SENSOR_PS_LITEON_LTR659 0 // type: bool

// description:LTR690
// #define AOS_SENSOR_PS_LITEON_LTR690 0 // type: bool

// description:LTR706
// #define AOS_SENSOR_PS_LITEON_LTR706 0 // type: bool

// description:DSP310
// #define AOS_SENSOR_BARO_IFX_DSP310 0 // type: bool

// description:BMP280
// #define AOS_SENSOR_BARO_BOSCH_BMP280 0 // type: bool

// description:BMP380
// #define AOS_SENSOR_BARO_BOSCH_BMP380 0 // type: bool

// description:BM1383A
// #define AOS_SENSOR_BARO_ROHM_BM1383A 0 // type: bool

// description:LPS22HB
// #define AOS_SENSOR_BARO_ST_LPS22HB 0 // type: bool

// description:LPS33HB
// #define AOS_SENSOR_BARO_ST_LPS33HB 0 // type: bool

// description:LPS35HB
// #define AOS_SENSOR_BARO_ST_LPS35HB 0 // type: bool

// description:BME280
// #define AOS_SENSOR_BARO_BOSCH_BME280 0 // type: bool

// description:PAJ7620
// #define AOS_SENSOR_GESTURE_PIXART_PAJ7620 0 // type: bool

// description:AK9754
// #define AOS_SENSOR_IR_AKM_AK9754 0 // type: bool

// description:LTR381
// #define AOS_SENSOR_RGB_LITEON_LTR381 0 // type: bool

// description:LTR390
// #define AOS_SENSOR_UV_LITEON_LTR390 0 // type: bool

// description:ENS210
// #define AOS_SENSOR_TEMP_AMS_ENS210 0 // type: bool

// description:ADT7410
// #define AOS_SENSOR_TEMP_ADI_ADT7410 0 // type: bool

// description:BME280
// #define AOS_SENSOR_TEMP_BOSCH_BME280 0 // type: bool

// description:SHT30
// #define AOS_SENSOR_TEMP_SENSIRION_SHT30 0 // type: bool

// description:SHT31
// #define AOS_SENSOR_TEMP_SENSIRION_SHT31 0 // type: bool

// description:SHTC1
// #define AOS_SENSOR_TEMP_SENSIRION_SHTC1 0 // type: bool

// description:HTS221
// #define AOS_SENSOR_TEMP_ST_HTS221 0 // type: bool

// description:ENS210
// #define AOS_SENSOR_HUMI_AMS_ENS210 0 // type: bool

// description:BME280
// #define AOS_SENSOR_HUMI_BOSCH_BME280 0 // type: bool

// description:SHT30
// #define AOS_SENSOR_HUMI_SENSIRION_SHT30 0 // type: bool

// description:SHT31
// #define AOS_SENSOR_HUMI_SENSIRION_SHT31 0 // type: bool

// description:SHTC1
// #define AOS_SENSOR_HUMI_SENSIRION_SHTC1 0 // type: bool

// description:HTS221
// #define AOS_SENSOR_HUMI_ST_HTS221 0 // type: bool

// description:SCD30
// #define AOS_SENSOR_CO2_SENSIRION_SCD30 0 // type: bool

// description:ADPD188GG
// #define AOS_SENSOR_ECG_ADI_ADPD188GG 0 // type: bool

// description:SGP30
// #define AOS_SENSOR_TVOC_SENSIRION_SGP30 0 // type: bool

// description:CCS811
// #define AOS_SENSOR_TVOC_AMS_CCS811 0 // type: bool

// description:SIM868
// #define AOS_SENSOR_GPS_SIMCOM_SIM868 0 // type: bool

// description:ds1307
// #define AOS_SENSOR_RTC_MAXIM_DS1307 0 // type: bool

// #endif


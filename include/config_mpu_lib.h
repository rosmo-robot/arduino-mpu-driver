#ifndef _CONFIG_MPU_LIB_H_
#define _CONFIG_MPU_LIB_H_

#define SPIBUS_READ     (0x80)  /*!< addr | SPIBUS_READ  */
#define SPIBUS_WRITE    (0x7F)  /*!< addr & SPIBUS_WRITE */

// MPU CHIP MODEL
// #define CONFIG_MPU6000
// #define CONFIG_MPU6050
#define CONFIG_MPU6500
// #define CONFIG_MPU6555
// #define CONFIG_MPU9150
// #define CONFIG_MPU9250
// #define CONFIG_MPU9255

// AUX SENSOR
// #define CONFIG_MPU_AK8963
// #define CONFIG_MPU_AK8975
// #define CONFIG_MPU_AK89xx

// COMMUNICATION PROTOCOL
// #define CONFIG_MPU_I2C
#define CONFIG_MPU_SPI

// #define ___ENABLE_DMP
// #define CONFIG_MPU_FIFO_CORRUPTION_CHECK

// MPU LOG LEVEL
//#define CONFIG_MPU_LOG_LEVEL_DEFAULT
//#define CONFIG_MPU_LOG_LEVEL_NONE
//#define CONFIG_MPU_LOG_LEVEL_ERROR
//#define CONFIG_MPU_LOG_LEVEL_WARN
//#define CONFIG_MPU_LOG_LEVEL_INFO
//#define CONFIG_MPU_LOG_LEVEL_DEBUG
#define CONFIG_MPU_LOG_LEVEL_TRACE
 
//#define CONFIG_MPU_LOG_ERROR_TRACES

#define CONFIG_SPIBUS_LOG_READWRITES


#define LOG_COLOR_W "\033[0;31m"
#define LOG_RESET_COLOR "\033[0;32m"

#endif
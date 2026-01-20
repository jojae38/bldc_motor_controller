/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED1_Pin GPIO_PIN_2
#define LED1_GPIO_Port GPIOE
#define LED2_Pin GPIO_PIN_3
#define LED2_GPIO_Port GPIOE
#define BTN1_Pin GPIO_PIN_4
#define BTN1_GPIO_Port GPIOE
#define BTN2_Pin GPIO_PIN_5
#define BTN2_GPIO_Port GPIOE
#define W25Q_QUADSPI_IO3_Pin GPIO_PIN_6
#define W25Q_QUADSPI_IO3_GPIO_Port GPIOF
#define W25Q_QUADSPI_IO2_Pin GPIO_PIN_7
#define W25Q_QUADSPI_IO2_GPIO_Port GPIOF
#define W25Q_QUADSPI_IO0_Pin GPIO_PIN_8
#define W25Q_QUADSPI_IO0_GPIO_Port GPIOF
#define W25Q_QUADSPI_IO1_Pin GPIO_PIN_9
#define W25Q_QUADSPI_IO1_GPIO_Port GPIOF
#define W25Q_QUADSPI_CLK_Pin GPIO_PIN_10
#define W25Q_QUADSPI_CLK_GPIO_Port GPIOF
#define JOYSTICK_V_Pin GPIO_PIN_3
#define JOYSTICK_V_GPIO_Port GPIOH
#define JOYSTICK_H_Pin GPIO_PIN_5
#define JOYSTICK_H_GPIO_Port GPIOH
#define Speaker_Pin GPIO_PIN_4
#define Speaker_GPIO_Port GPIOA
#define MOTOR_W_SHUNT_Pin GPIO_PIN_6
#define MOTOR_W_SHUNT_GPIO_Port GPIOA
#define MOTOR_V_SHUNT_Pin GPIO_PIN_7
#define MOTOR_V_SHUNT_GPIO_Port GPIOA
#define MOTOR_U_SHUNT_Pin GPIO_PIN_4
#define MOTOR_U_SHUNT_GPIO_Port GPIOC
#define VOLTAGE_REF_Pin GPIO_PIN_5
#define VOLTAGE_REF_GPIO_Port GPIOC
#define WS2812_PWMC_Pin GPIO_PIN_0
#define WS2812_PWMC_GPIO_Port GPIOB
#define TEMP_ADC_Pin GPIO_PIN_1
#define TEMP_ADC_GPIO_Port GPIOB
#define JOYSTICK_SEL_Pin GPIO_PIN_1
#define JOYSTICK_SEL_GPIO_Port GPIOJ
#define W25Q_QUADSPI_NCS_Pin GPIO_PIN_10
#define W25Q_QUADSPI_NCS_GPIO_Port GPIOB
#define LCD_BLK_Pin GPIO_PIN_6
#define LCD_BLK_GPIO_Port GPIOH
#define MOTOR_U_SCH_Pin GPIO_PIN_13
#define MOTOR_U_SCH_GPIO_Port GPIOB
#define DBG_USART1_TX_Pin GPIO_PIN_14
#define DBG_USART1_TX_GPIO_Port GPIOB
#define DBG_USART1_RX_Pin GPIO_PIN_15
#define DBG_USART1_RX_GPIO_Port GPIOB
#define MOTOR_V_SCH_Pin GPIO_PIN_11
#define MOTOR_V_SCH_GPIO_Port GPIOD
#define MOTOR_W_SCH_Pin GPIO_PIN_13
#define MOTOR_W_SCH_GPIO_Port GPIOD
#define MOTOR_W_LI_Pin GPIO_PIN_6
#define MOTOR_W_LI_GPIO_Port GPIOJ
#define OE_ENABLE_Pin GPIO_PIN_7
#define OE_ENABLE_GPIO_Port GPIOJ
#define MOTOR_V_LI_Pin GPIO_PIN_8
#define MOTOR_V_LI_GPIO_Port GPIOJ
#define MOTOR_W_HI_Pin GPIO_PIN_9
#define MOTOR_W_HI_GPIO_Port GPIOJ
#define MOTOR_V_HI_Pin GPIO_PIN_11
#define MOTOR_V_HI_GPIO_Port GPIOJ
#define MOTOR_U_LI_Pin GPIO_PIN_0
#define MOTOR_U_LI_GPIO_Port GPIOK
#define MOTOR_U_HI_Pin GPIO_PIN_1
#define MOTOR_U_HI_GPIO_Port GPIOK
#define MOTOR_PULSE_Pin GPIO_PIN_2
#define MOTOR_PULSE_GPIO_Port GPIOG
#define MOTOR_DIR_Pin GPIO_PIN_3
#define MOTOR_DIR_GPIO_Port GPIOG
#define HALL_C_Pin GPIO_PIN_6
#define HALL_C_GPIO_Port GPIOG
#define HALL_B_Pin GPIO_PIN_7
#define HALL_B_GPIO_Port GPIOG
#define HALL_A_Pin GPIO_PIN_6
#define HALL_A_GPIO_Port GPIOC
#define ZC_VW_3_Pin GPIO_PIN_7
#define ZC_VW_3_GPIO_Port GPIOC
#define ZC_UW_2_Pin GPIO_PIN_8
#define ZC_UW_2_GPIO_Port GPIOC
#define ZC_UV_1_Pin GPIO_PIN_9
#define ZC_UV_1_GPIO_Port GPIOA
#define ESP32_USART2_TX_Pin GPIO_PIN_5
#define ESP32_USART2_TX_GPIO_Port GPIOD
#define ESP32_USART2_RX_Pin GPIO_PIN_6
#define ESP32_USART2_RX_GPIO_Port GPIOD
#define ESP32_SPI1_MOSI_Pin GPIO_PIN_7
#define ESP32_SPI1_MOSI_GPIO_Port GPIOD
#define ESP32_SPI1_MISO_Pin GPIO_PIN_9
#define ESP32_SPI1_MISO_GPIO_Port GPIOG
#define ESP32_SPI1_NSS_Pin GPIO_PIN_10
#define ESP32_SPI1_NSS_GPIO_Port GPIOG
#define ESP32_SPI1_SCK_Pin GPIO_PIN_11
#define ESP32_SPI1_SCK_GPIO_Port GPIOG
#define TP_RES_Pin GPIO_PIN_4
#define TP_RES_GPIO_Port GPIOK
#define TP_INT_Pin GPIO_PIN_5
#define TP_INT_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

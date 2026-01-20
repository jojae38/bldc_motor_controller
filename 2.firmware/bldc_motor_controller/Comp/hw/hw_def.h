/*
 * hw_def.h
 *
 *  Created on: 2026. 1. 4.
 *      Author: jaehyun
 */

#ifndef HW_HW_DEF_H_
#define HW_HW_DEF_H_

//하드웨어 특성 파라미터 보관
#include "def.h"
#include "main.h"
#include "bsp.h"

#define LED_CHANNEL_MAX 2
#define BTN_CHANNEL_MAX 3
#define PWM_CHANNEL_MAX 8
#define ADC_CHANNEL_MAX 7
#define UART_CHANNEL_MAX 2

// LED
#define _DEF_LED1               0
#define _DEF_LED2               1

// UART
#define _DEF_UART1_DBG          0
#define _DEF_UART2_ESP32        1

// BTN
#define _DEF_BTN1               0
#define _DEF_BTN2               1
#define _DEF_JOYSTICK_BTN       2

// PWM
#define _DEF_PWM1_CH1_U_HI  	  0
#define _DEF_PWM1_CH2_V_HI  	  1
#define _DEF_PWM1_CH3_V_HI  	  2

#define _DEF_PWM3_CH3_WS2812  	3

#define _DEF_PWM8_CH1_U_LO  	  4
#define _DEF_PWM8_CH2_V_LO  	  5
#define _DEF_PWM8_CH3_V_LO  	  6

#define _DEF_PWM12_CH1_LCD_BLK  7

// ADC
#define _DEF_ADC1_CH5_TEMP 	    0
#define _DEF_ADC1_CH8_VREF      1
#define _DEF_ADC2_CH4_U_SHUNT   2
#define _DEF_ADC2_CH7_V_SHUNT	  3
#define _DEF_ADC2_CH3_W_SHUNT   4
#define _DEF_ADC3_JOY_V         5
#define _DEF_ADC3_JOY_W         6

//CLI
#define HW_CLI_CMD_NAME_MAX    16
#define HW_CLI_CMD_LIST_MAX    16
#define HW_CLI_LINE_HIS_MAX    4
#define HW_CLI_LINE_BUF_MAX    50

#endif /* HW_HW_DEF_H_ */

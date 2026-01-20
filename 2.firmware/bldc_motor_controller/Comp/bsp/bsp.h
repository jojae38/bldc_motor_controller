/*
 * bsp.h
 *
 *  Created on: 2026. 1. 4.
 *      Author: jaehyun
 */

#ifndef BSP_BSP_H_
#define BSP_BSP_H_

#include "stm32h7xx.h"
#include "stm32h743xx.h"
#include "stm32h7xx_hal.h"

void delay(uint32_t ms);
uint32_t millis(void);
void Reset(void);

#endif /* BSP_BSP_H_ */

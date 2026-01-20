/*
 * _pwm.c
 *
 *  Created on: 2026. 1. 4.
 *      Author: jaehyun
 */


#include "_pwm.h"

extern TIM_HandleTypeDef htim1;
extern TIM_HandleTypeDef htim3;
extern TIM_HandleTypeDef htim8;
extern TIM_HandleTypeDef htim12;

//TODO 주파수 조정
pwm_tbl_t pwm_tbl[PWM_CHANNEL_MAX] = {
//타이머 1 모터쪽 H
    {.tim_handler = &htim1,.tim_channel = TIM_CHANNEL_1,.freq = 50000,.duty = 0.5,false},
    {.tim_handler = &htim1,.tim_channel = TIM_CHANNEL_2,.freq = 50000,.duty = 0.5,false},
    {.tim_handler = &htim1,.tim_channel = TIM_CHANNEL_3,.freq = 50000,.duty = 0.5,false},
//타이머 3 ws2812
    {.tim_handler = &htim3,.tim_channel = TIM_CHANNEL_2,.freq = 50000,.duty = 0.5,false},
//타이머 8 모터쪽 L
    {.tim_handler = &htim8,.tim_channel = TIM_CHANNEL_1,.freq = 50000,.duty = 0.5,false},
    {.tim_handler = &htim8,.tim_channel = TIM_CHANNEL_2,.freq = 50000,.duty = 0.5,false},
    {.tim_handler = &htim8,.tim_channel = TIM_CHANNEL_3,.freq = 50000,.duty = 0.5,false},
//타이머 12 LCD BLK - 1000khz
	{.tim_handler = &htim12,.tim_channel = TIM_CHANNEL_1,.freq = 1000,.duty = 0.5,false}
};

void pwmInit(void)
{
  return;
}

void pwmMain(void)
{

}

void pwmChange(uint8_t ch, uint8_t value)
{

}

/*
 * _adc.c
 *
 *  Created on: 2026. 1. 4.
 *      Author: jaehyun
 */


#include "_adc.h"

extern ADC_HandleTypeDef hadc1;
extern ADC_HandleTypeDef hadc2;
extern ADC_HandleTypeDef hadc3;

adc_tbl_t adc_tbl[ADC_CHANNEL_MAX] = {
    {.adc_handler = &hadc1,.adc_channel = ADC_CHANNEL_5},
    {.adc_handler = &hadc2,.adc_channel = ADC_CHANNEL_1}
};


void adcInit(void)
{

}

void adcMain(void)
{

}

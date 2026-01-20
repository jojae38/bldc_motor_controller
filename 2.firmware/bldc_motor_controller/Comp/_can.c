/*
 * _can.c
 *
 *  Created on: 2026. 1. 4.
 *      Author: jaehyun
 */


#include "_can.h"

extern FDCAN_HandleTypeDef hfdcan1;

typedef struct{


}can_tbl_t;

//CAN_FilterTypeDef filter;
//CAN_TxHeaderTypeDef tx_header;

void canInit(void)
{
//  HAL_CAN_ConfigFilter(&hfdcan1, &filter);
}

//TODO 송신


//TODO 수신


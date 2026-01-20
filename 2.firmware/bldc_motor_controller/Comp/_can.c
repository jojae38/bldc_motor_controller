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

void HAL_FDCAN_RxFifo0Callback(FDCAN_HandleTypeDef *hfdcan, uint32_t RxFifo0ITs)
{
    if (RxFifo0ITs & FDCAN_IT_RX_FIFO0_NEW_MESSAGE)
    {
        // 여기서 프레임 읽고 큐잉
    }
}

void HAL_FDCAN_TxBufferCompleteCallback(FDCAN_HandleTypeDef *hfdcan, uint32_t BufferIndexes)
{
    // TX 완료 처리
}

void HAL_FDCAN_ErrorStatusCallback(FDCAN_HandleTypeDef *hfdcan, uint32_t ErrorStatusITs)
{
    // Bus off, error passive 등
}

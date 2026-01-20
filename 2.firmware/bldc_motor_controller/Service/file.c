/*
 * file.c
 *
 *  Created on: 2026. 1. 20.
 *      Author: jojae
 */


#include "file.h"
#include "w25qxx.h"

extern QSPI_HandleTypeDef hqspi;
W25QXX_HandleTypeDef w25qxx_tlb;

void fileInit(void)
{
  w25qxx_init(&w25qxx_tlb, &hqspi, W25Q_QUADSPI_NCS_GPIO_Port, W25Q_QUADSPI_NCS_Pin);
}

void fileMain(void)
{

}

/*
 * Copyright (c) 2025 Analog Devices, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_DMA_MAX78000_DMA_H_
#define ZEPHYR_INCLUDE_DT_BINDINGS_DMA_MAX78000_DMA_H_

#define MAX78_DMA_SLOT_MEMTOMEM 0x00U
#define MAX78_DMA_SLOT_SPI1_RX  0x01U
#define MAX78_DMA_SLOT_UART0_RX 0x04U
#define MAX78_DMA_SLOT_UART1_RX 0x05U
#define MAX78_DMA_SLOT_I2C0_RX  0x07U
#define MAX78_DMA_SLOT_I2C1_RX  0x08U
#define MAX78_DMA_SLOT_ADC      0x09U
#define MAX78_DMA_SLOT_I2C2_RX  0x0AU
#define MAX78_DMA_SLOT_PCIF_RX  0x0DU
#define MAX78_DMA_SLOT_UART2_RX 0x0EU
#define MAX78_DMA_SLOT_SPI0_RX  0x0FU
#define MAX78_DMA_SLOT_UART3_RX 0x1CU
#define MAX78_DMA_SLOT_I2S_RX   0x1EU
#define MAX78_DMA_SLOT_SPI1_TX  0x21U
#define MAX78_DMA_SLOT_UART0_TX 0x24U
#define MAX78_DMA_SLOT_UART1_TX 0x25U
#define MAX78_DMA_SLOT_I2C0_TX  0x27U
#define MAX78_DMA_SLOT_I2C1_TX  0x28U
#define MAX78_DMA_SLOT_I2C2_TX  0x2AU
#define MAX78_DMA_SLOT_CRC      0x2CU
#define MAX78_DMA_SLOT_PCIF_TX  0x2DU
#define MAX78_DMA_SLOT_UART2_TX 0x2EU
#define MAX78_DMA_SLOT_SPI0_TX  0x2FU
#define MAX78_DMA_SLOT_UART3_TX 0x3CU
#define MAX78_DMA_SLOT_I2S_TX   0x3EU

#endif /* ZEPHYR_INCLUDE_DT_BINDINGS_DMA_MAX78000_DMA_H_ */

/*
 * Copyright (c) 2023 Realtek, SIBG-SD7
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_SOC_REALTEK_RTS5912_REG_SYSTEM_H
#define ZEPHYR_SOC_REALTEK_RTS5912_REG_SYSTEM_H

/*
 * @brief System Controller (SYSTEM)
 */
typedef struct {
	union {
		volatile uint32_t I3CCLK;
		volatile uint32_t TMRRST;
	};
	volatile uint32_t I2CCLK;
	volatile uint32_t TMRCLK;
	volatile uint32_t PERICLKPWR0;
	volatile uint32_t UARTCLK;
	volatile uint32_t SYSCLK;
	volatile uint32_t ADCCLK;
	volatile uint32_t PERICLKPWR1;
	volatile const uint32_t RESERVED[24];
	volatile uint32_t SLPCTRL;
	volatile const uint32_t RESERVED1[7];
	volatile uint32_t VIVOCTRL;
	volatile uint32_t LDOCTRL;
	volatile uint32_t RC25MCTRL;
	volatile uint32_t PLLCTRL;
	volatile const uint32_t RESERVED2[12];
	volatile uint32_t RC32KCTRL;
	volatile const uint32_t RESERVED3;
	volatile uint32_t PERICLKPWR2;
} SYSTEM_Type;

/* I3CCLK */
#define SYSTEM_I3CCLK_I3C0DIV_Pos            (0UL)
#define SYSTEM_I3CCLK_I3C0DIV_Msk            GENMASK(1, 0)
#define SYSTEM_I3CCLK_I3C1DIV_Pos            (2UL)
#define SYSTEM_I3CCLK_I3C1DIV_Msk            GENMASK(3, 2)
/* TMRRST */
#define SYSTEM_TMRRST_TMR0RST_Pos            (4UL)
#define SYSTEM_TMRRST_TMR0RST_Msk            BIT(SYSTEM_TMRRST_TMR0RST_Pos)
#define SYSTEM_TMRRST_TMR1RST_Pos            (5UL)
#define SYSTEM_TMRRST_TMR1RST_Msk            BIT(SYSTEM_TMRRST_TMR1RST_Pos)
#define SYSTEM_TMRRST_TMR2RST_Pos            (6UL)
#define SYSTEM_TMRRST_TMR2RST_Msk            BIT(SYSTEM_TMRRST_TMR2RST_Pos)
#define SYSTEM_TMRRST_TMR3RST_Pos            (7UL)
#define SYSTEM_TMRRST_TMR3RST_Msk            BIT(SYSTEM_TMRRST_TMR3RST_Pos)
#define SYSTEM_TMRRST_TMR4RST_Pos            (8UL)
#define SYSTEM_TMRRST_TMR4RST_Msk            BIT(SYSTEM_TMRRST_TMR4RST_Pos)
#define SYSTEM_TMRRST_TMR5RST_Pos            (9UL)
#define SYSTEM_TMRRST_TMR5RST_Msk            BIT(SYSTEM_TMRRST_TMR5RST_Pos)
/* I2CCLK */
#define SYSTEM_I2CCLK_I2C0CLKPWR_Pos         (0UL)
#define SYSTEM_I2CCLK_I2C0CLKPWR_Msk         BIT(SYSTEM_I2CCLK_I2C0CLKPWR_Pos)
#define SYSTEM_I2CCLK_I2C0CLKSRC_Pos         (1UL)
#define SYSTEM_I2CCLK_I2C0CLKSRC_Msk         BIT(SYSTEM_I2CCLK_I2C0CLKSRC_Pos)
#define SYSTEM_I2CCLK_I2C0CLKDIV_Pos         (2UL)
#define SYSTEM_I2CCLK_I2C0CLKDIV_Msk         GENMASK(3, 2)
#define SYSTEM_I2CCLK_I2C1CLKPWR_Pos         (4UL)
#define SYSTEM_I2CCLK_I2C1CLKPWR_Msk         BIT(SYSTEM_I2CCLK_I2C1CLKPWR_Pos)
#define SYSTEM_I2CCLK_I2C1CLKSRC_Pos         (5UL)
#define SYSTEM_I2CCLK_I2C1CLKSRC_Msk         BIT(SYSTEM_I2CCLK_I2C1CLKSRC_Pos)
#define SYSTEM_I2CCLK_I2C1CLKDIV_Pos         (6UL)
#define SYSTEM_I2CCLK_I2C1CLKDIV_Msk         GENMASK(7, 6)
#define SYSTEM_I2CCLK_I2C2CLKPWR_Pos         (8UL)
#define SYSTEM_I2CCLK_I2C2CLKPWR_Msk         BIT(SYSTEM_I2CCLK_I2C2CLKPWR_Pos)
#define SYSTEM_I2CCLK_I2C2CLKSRC_Pos         (9UL)
#define SYSTEM_I2CCLK_I2C2CLKSRC_Msk         BIT(SYSTEM_I2CCLK_I2C2CLKSRC_Pos)
#define SYSTEM_I2CCLK_I2C2CLKDIV_Pos         (10UL)
#define SYSTEM_I2CCLK_I2C2CLKDIV_Msk         GENMASK(11, 10)
#define SYSTEM_I2CCLK_I2C3CLKPWR_Pos         (12UL)
#define SYSTEM_I2CCLK_I2C3CLKPWR_Msk         BIT(SYSTEM_I2CCLK_I2C3CLKPWR_Pos)
#define SYSTEM_I2CCLK_I2C3CLKSRC_Pos         (13UL)
#define SYSTEM_I2CCLK_I2C3CLKSRC_Msk         BIT(SYSTEM_I2CCLK_I2C3CLKSRC_Pos)
#define SYSTEM_I2CCLK_I2C3CLKDIV_Pos         (14UL)
#define SYSTEM_I2CCLK_I2C3CLKDIV_Msk         GENMASK(15, 14)
#define SYSTEM_I2CCLK_I2C4CLKPWR_Pos         (16UL)
#define SYSTEM_I2CCLK_I2C4CLKPWR_Msk         BIT(SYSTEM_I2CCLK_I2C4CLKPWR_Pos)
#define SYSTEM_I2CCLK_I2C4CLKSRC_Pos         (17UL)
#define SYSTEM_I2CCLK_I2C4CLKSRC_Msk         BIT(SYSTEM_I2CCLK_I2C4CLKSRC_Pos)
#define SYSTEM_I2CCLK_I2C4CLKDIV_Pos         (18UL)
#define SYSTEM_I2CCLK_I2C4CLKDIV_Msk         GENMASK(19, 18)
#define SYSTEM_I2CCLK_I2C5CLKPWR_Pos         (20UL)
#define SYSTEM_I2CCLK_I2C5CLKPWR_Msk         BIT(SYSTEM_I2CCLK_I2C5CLKPWR_Pos)
#define SYSTEM_I2CCLK_I2C5CLKSRC_Pos         (21UL)
#define SYSTEM_I2CCLK_I2C5CLKSRC_Msk         BIT(SYSTEM_I2CCLK_I2C5CLKSRC_Pos)
#define SYSTEM_I2CCLK_I2C5CLKDIV_Pos         (22UL)
#define SYSTEM_I2CCLK_I2C5CLKDIV_Msk         GENMASK(23, 22)
#define SYSTEM_I2CCLK_I2C6CLKPWR_Pos         (24UL)
#define SYSTEM_I2CCLK_I2C6CLKPWR_Msk         BIT(SYSTEM_I2CCLK_I2C6CLKPWR_Pos)
#define SYSTEM_I2CCLK_I2C6CLKSRC_Pos         (25UL)
#define SYSTEM_I2CCLK_I2C6CLKSRC_Msk         BIT(SYSTEM_I2CCLK_I2C6CLKSRC_Pos)
#define SYSTEM_I2CCLK_I2C6CLKDIV_Pos         (26UL)
#define SYSTEM_I2CCLK_I2C6CLKDIV_Msk         GENMASK(27, 26)
#define SYSTEM_I2CCLK_I2C7CLKPWR_Pos         (28UL)
#define SYSTEM_I2CCLK_I2C7CLKPWR_Msk         BIT(SYSTEM_I2CCLK_I2C7CLKPWR_Pos)
#define SYSTEM_I2CCLK_I2C7CLKSRC_Pos         (29UL)
#define SYSTEM_I2CCLK_I2C7CLKSRC_Msk         BIT(SYSTEM_I2CCLK_I2C7CLKSRC_Pos)
#define SYSTEM_I2CCLK_I2C7CLKDIV_Pos         (30UL)
#define SYSTEM_I2CCLK_I2C7CLKDIV_Msk         GENMASK(31, 30)
/* TMRCLK */
#define SYSTEM_TMRCLK_TMR0DIV_Pos            (0UL)
#define SYSTEM_TMRCLK_TMR0DIV_Msk            GENMASK(3, 0)
#define SYSTEM_TMRCLK_TMR1DIV_Pos            (4UL)
#define SYSTEM_TMRCLK_TMR1DIV_Msk            GENMASK(7, 4)
#define SYSTEM_TMRCLK_TMR2DIV_Pos            (8UL)
#define SYSTEM_TMRCLK_TMR2DIV_Msk            GENMASK(11, 8)
#define SYSTEM_TMRCLK_TMR3DIV_Pos            (12UL)
#define SYSTEM_TMRCLK_TMR3DIV_Msk            GENMASK(15, 12)
#define SYSTEM_TMRCLK_TMR4DIV_Pos            (16UL)
#define SYSTEM_TMRCLK_TMR4DIV_Msk            GENMASK(19, 16)
#define SYSTEM_TMRCLK_TMR5DIV_Pos            (20UL)
#define SYSTEM_TMRCLK_TMR5DIV_Msk            GENMASK(23, 20)
#define SYSTEM_TMRCLK_TMR0PAUSE_Pos          (24UL)
#define SYSTEM_TMRCLK_TMR0PAUSE_Msk          BIT(SYSTEM_TMRCLK_TMR0PAUSE_Pos)
#define SYSTEM_TMRCLK_TMR1PAUSE_Pos          (25UL)
#define SYSTEM_TMRCLK_TMR1PAUSE_Msk          BIT(SYSTEM_TMRCLK_TMR1PAUSE_Pos)
#define SYSTEM_TMRCLK_TMR2PAUSE_Pos          (26UL)
#define SYSTEM_TMRCLK_TMR2PAUSE_Msk          BIT(SYSTEM_TMRCLK_TMR2PAUSE_Pos)
#define SYSTEM_TMRCLK_TMR3PAUSE_Pos          (27UL)
#define SYSTEM_TMRCLK_TMR3PAUSE_Msk          BIT(SYSTEM_TMRCLK_TMR3PAUSE_Pos)
#define SYSTEM_TMRCLK_TMR4PAUSE_Pos          (28UL)
#define SYSTEM_TMRCLK_TMR4PAUSE_Msk          BIT(SYSTEM_TMRCLK_TMR4PAUSE_Pos)
#define SYSTEM_TMRCLK_TMR5PAUSE_Pos          (29UL)
#define SYSTEM_TMRCLK_TMR5PAUSE_Msk          BIT(SYSTEM_TMRCLK_TMR5PAUSE_Pos)
/* PERICLKPWR0 */
#define SYSTEM_PERICLKPWR0_GPIOCLKPWR_Pos    (0UL)
#define SYSTEM_PERICLKPWR0_GPIOCLKPWR_Msk    BIT(SYSTEM_PERICLKPWR0_GPIOCLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_TACHO0CLKPWR_Pos  (1UL)
#define SYSTEM_PERICLKPWR0_TACHO0CLKPWR_Msk  BIT(SYSTEM_PERICLKPWR0_TACHO0CLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_TACHO1CLKPWR_Pos  (2UL)
#define SYSTEM_PERICLKPWR0_TACHO1CLKPWR_Msk  BIT(SYSTEM_PERICLKPWR0_TACHO1CLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_TACHO2CLKPWR_Pos  (3UL)
#define SYSTEM_PERICLKPWR0_TACHO2CLKPWR_Msk  BIT(SYSTEM_PERICLKPWR0_TACHO2CLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_TACHO3CLKPWR_Pos  (4UL)
#define SYSTEM_PERICLKPWR0_TACHO3CLKPWR_Msk  BIT(SYSTEM_PERICLKPWR0_TACHO3CLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_PS2CLKPWR_Pos     (5UL)
#define SYSTEM_PERICLKPWR0_PS2CLKPWR_Msk     BIT(SYSTEM_PERICLKPWR0_PS2CLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_KBMCLKPWR_Pos     (6UL)
#define SYSTEM_PERICLKPWR0_KBMCLKPWR_Msk     BIT(SYSTEM_PERICLKPWR0_KBMCLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_PECICLKPWR_Pos    (7UL)
#define SYSTEM_PERICLKPWR0_PECICLKPWR_Msk    BIT(SYSTEM_PERICLKPWR0_PECICLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_PL0CLKPWR_Pos     (8UL)
#define SYSTEM_PERICLKPWR0_PL0CLKPWR_Msk     BIT(SYSTEM_PERICLKPWR0_PL0CLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_PL1CLKPWR_Pos     (9UL)
#define SYSTEM_PERICLKPWR0_PL1CLKPWR_Msk     BIT(SYSTEM_PERICLKPWR0_PL1CLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_PWM0CLKPWR_Pos    (10UL)
#define SYSTEM_PERICLKPWR0_PWM0CLKPWR_Msk    BIT(SYSTEM_PERICLKPWR0_PWM0CLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_PWM1CLKPWR_Pos    (11UL)
#define SYSTEM_PERICLKPWR0_PWM1CLKPWR_Msk    BIT(SYSTEM_PERICLKPWR0_PWM1CLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_PWM2CLKPWR_Pos    (12UL)
#define SYSTEM_PERICLKPWR0_PWM2CLKPWR_Msk    BIT(SYSTEM_PERICLKPWR0_PWM2CLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_PWM3CLKPWR_Pos    (13UL)
#define SYSTEM_PERICLKPWR0_PWM3CLKPWR_Msk    BIT(SYSTEM_PERICLKPWR0_PWM3CLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_PWM4CLKPWR_Pos    (14UL)
#define SYSTEM_PERICLKPWR0_PWM4CLKPWR_Msk    BIT(SYSTEM_PERICLKPWR0_PWM4CLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_PWM5CLKPWR_Pos    (15UL)
#define SYSTEM_PERICLKPWR0_PWM5CLKPWR_Msk    BIT(SYSTEM_PERICLKPWR0_PWM5CLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_PWM6CLKPWR_Pos    (16UL)
#define SYSTEM_PERICLKPWR0_PWM6CLKPWR_Msk    BIT(SYSTEM_PERICLKPWR0_PWM6CLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_PWM7CLKPWR_Pos    (17UL)
#define SYSTEM_PERICLKPWR0_PWM7CLKPWR_Msk    BIT(SYSTEM_PERICLKPWR0_PWM7CLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_PWM8CLKPWR_Pos    (18UL)
#define SYSTEM_PERICLKPWR0_PWM8CLKPWR_Msk    BIT(SYSTEM_PERICLKPWR0_PWM8CLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_PWM9CLKPWR_Pos    (19UL)
#define SYSTEM_PERICLKPWR0_PWM9CLKPWR_Msk    BIT(SYSTEM_PERICLKPWR0_PWM9CLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_PWM10CLKPWR_Pos   (20UL)
#define SYSTEM_PERICLKPWR0_PWM10CLKPWR_Msk   BIT(SYSTEM_PERICLKPWR0_PWM10CLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_PWM11CLKPWR_Pos   (21UL)
#define SYSTEM_PERICLKPWR0_PWM11CLKPWR_Msk   BIT(SYSTEM_PERICLKPWR0_PWM11CLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_ESPICLKPWR_Pos    (22UL)
#define SYSTEM_PERICLKPWR0_ESPICLKPWR_Msk    BIT(SYSTEM_PERICLKPWR0_ESPICLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_KBCCLKPWR_Pos     (23UL)
#define SYSTEM_PERICLKPWR0_KBCCLKPWR_Msk     BIT(SYSTEM_PERICLKPWR0_KBCCLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_ACPICLKPWR_Pos    (24UL)
#define SYSTEM_PERICLKPWR0_ACPICLKPWR_Msk    BIT(SYSTEM_PERICLKPWR0_ACPICLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_PMPORT0CLKPWR_Pos (25UL)
#define SYSTEM_PERICLKPWR0_PMPORT0CLKPWR_Msk BIT(SYSTEM_PERICLKPWR0_PMPORT0CLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_PMPORT1CLKPWR_Pos (26UL)
#define SYSTEM_PERICLKPWR0_PMPORT1CLKPWR_Msk BIT(SYSTEM_PERICLKPWR0_PMPORT1CLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_PMPORT2CLKPWR_Pos (27UL)
#define SYSTEM_PERICLKPWR0_PMPORT2CLKPWR_Msk BIT(SYSTEM_PERICLKPWR0_PMPORT2CLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_PMPORT3CLKPWR_Pos (28UL)
#define SYSTEM_PERICLKPWR0_PMPORT3CLKPWR_Msk BIT(SYSTEM_PERICLKPWR0_PMPORT3CLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_P80CLKPWR_Pos     (29UL)
#define SYSTEM_PERICLKPWR0_P80CLKPWR_Msk     BIT(SYSTEM_PERICLKPWR0_P80CLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_EMI0CLKPWR_Pos    (30UL)
#define SYSTEM_PERICLKPWR0_EMI0CLKPWR_Msk    BIT(SYSTEM_PERICLKPWR0_EMI0CLKPWR_Pos)
#define SYSTEM_PERICLKPWR0_EMI1CLKPWR_Pos    (31UL)
#define SYSTEM_PERICLKPWR0_EMI1CLKPWR_Msk    BIT(SYSTEM_PERICLKPWR0_EMI1CLKPWR_Pos)
/* UARTCLK */
#define SYSTEM_UARTCLK_PWR_Pos               (0UL)
#define SYSTEM_UARTCLK_PWR_Msk               BIT(SYSTEM_UARTCLK_PWR_Pos)
#define SYSTEM_UARTCLK_SRC_Pos               (1UL)
#define SYSTEM_UARTCLK_SRC_Msk               BIT(SYSTEM_UARTCLK_SRC_Pos)
#define SYSTEM_UARTCLK_DIV_Pos               (2UL)
#define SYSTEM_UARTCLK_DIV_Msk               GENMASK(3, 2)
/* SYSCLK */
#define SYSTEM_SYSCLK_SRC_Pos                (1UL)
#define SYSTEM_SYSCLK_SRC_Msk                BIT(SYSTEM_SYSCLK_SRC_Pos)
#define SYSTEM_SYSCLK_DIV_Pos                (2UL)
#define SYSTEM_SYSCLK_DIV_Msk                BIT(SYSTEM_SYSCLK_DIV_Pos)
/* ADCCLK */
#define SYSTEM_ADCCLK_PWR_Pos                (0UL)
#define SYSTEM_ADCCLK_PWR_Msk                BIT(SYSTEM_ADCCLK_PWR_Pos)
#define SYSTEM_ADCCLK_SRC_Pos                (1UL)
#define SYSTEM_ADCCLK_SRC_Msk                BIT(SYSTEM_ADCCLK_SRC_Pos)
#define SYSTEM_ADCCLK_DIV_Pos                (2UL)
#define SYSTEM_ADCCLK_DIV_Msk                GENMASK(4, 2)
/* PERICLKPWR1 */
#define SYSTEM_PERICLKPWR1_EMI2CLKPWR_Pos    (0UL)
#define SYSTEM_PERICLKPWR1_EMI2CLKPWR_Msk    BIT(SYSTEM_PERICLKPWR1_EMI2CLKPWR_Pos)
#define SYSTEM_PERICLKPWR1_EMI3CLKPWR_Pos    (1UL)
#define SYSTEM_PERICLKPWR1_EMI3CLKPWR_Msk    BIT(SYSTEM_PERICLKPWR1_EMI3CLKPWR_Pos)
#define SYSTEM_PERICLKPWR1_EMI4CLKPWR_Pos    (2UL)
#define SYSTEM_PERICLKPWR1_EMI4CLKPWR_Msk    BIT(SYSTEM_PERICLKPWR1_EMI4CLKPWR_Pos)
#define SYSTEM_PERICLKPWR1_EMI5CLKPWR_Pos    (3UL)
#define SYSTEM_PERICLKPWR1_EMI5CLKPWR_Msk    BIT(SYSTEM_PERICLKPWR1_EMI5CLKPWR_Pos)
#define SYSTEM_PERICLKPWR1_EMI6CLKPWR_Pos    (4UL)
#define SYSTEM_PERICLKPWR1_EMI6CLKPWR_Msk    BIT(SYSTEM_PERICLKPWR1_EMI6CLKPWR_Pos)
#define SYSTEM_PERICLKPWR1_EMI7CLKPWR_Pos    (5UL)
#define SYSTEM_PERICLKPWR1_EMI7CLKPWR_Msk    BIT(SYSTEM_PERICLKPWR1_EMI7CLKPWR_Pos)
#define SYSTEM_PERICLKPWR1_I3C0CLKPWR_Pos    (9UL)
#define SYSTEM_PERICLKPWR1_I3C0CLKPWR_Msk    BIT(SYSTEM_PERICLKPWR1_I3C0CLKPWR_Pos)
#define SYSTEM_PERICLKPWR1_I3C1CLKPWR_Pos    (10UL)
#define SYSTEM_PERICLKPWR1_I3C1CLKPWR_Msk    BIT(SYSTEM_PERICLKPWR1_I3C1CLKPWR_Pos)
#define SYSTEM_PERICLKPWR1_I2CAUTOCLKPWR_Pos (11UL)
#define SYSTEM_PERICLKPWR1_I2CAUTOCLKPWR_Msk BIT(SYSTEM_PERICLKPWR1_I2CAUTOCLKPWR_Pos)
#define SYSTEM_PERICLKPWR1_MCCLKPWR_Pos      (12UL)
#define SYSTEM_PERICLKPWR1_MCCLKPWR_Msk      BIT(SYSTEM_PERICLKPWR1_MCCLKPWR_Pos)
#define SYSTEM_PERICLKPWR1_TMR0CLKPWR_Pos    (13UL)
#define SYSTEM_PERICLKPWR1_TMR0CLKPWR_Msk    BIT(SYSTEM_PERICLKPWR1_TMR0CLKPWR_Pos)
#define SYSTEM_PERICLKPWR1_TMR1CLKPWR_Pos    (14UL)
#define SYSTEM_PERICLKPWR1_TMR1CLKPWR_Msk    BIT(SYSTEM_PERICLKPWR1_TMR1CLKPWR_Pos)
#define SYSTEM_PERICLKPWR1_TMR2CLKPWR_Pos    (15UL)
#define SYSTEM_PERICLKPWR1_TMR2CLKPWR_Msk    BIT(SYSTEM_PERICLKPWR1_TMR2CLKPWR_Pos)
#define SYSTEM_PERICLKPWR1_TMR3CLKPWR_Pos    (16UL)
#define SYSTEM_PERICLKPWR1_TMR3CLKPWR_Msk    BIT(SYSTEM_PERICLKPWR1_TMR3CLKPWR_Pos)
#define SYSTEM_PERICLKPWR1_TMR4CLKPWR_Pos    (17UL)
#define SYSTEM_PERICLKPWR1_TMR4CLKPWR_Msk    BIT(SYSTEM_PERICLKPWR1_TMR4CLKPWR_Pos)
#define SYSTEM_PERICLKPWR1_TMR5CLKPWR_Pos    (18UL)
#define SYSTEM_PERICLKPWR1_TMR5CLKPWR_Msk    BIT(SYSTEM_PERICLKPWR1_TMR5CLKPWR_Pos)
#define SYSTEM_PERICLKPWR1_RTMRCLKPWR_Pos    (19UL)
#define SYSTEM_PERICLKPWR1_RTMRCLKPWR_Msk    BIT(SYSTEM_PERICLKPWR1_RTMRCLKPWR_Pos)
#define SYSTEM_PERICLKPWR1_SLWTMR0CLKPWR_Pos (20UL)
#define SYSTEM_PERICLKPWR1_SLWTMR0CLKPWR_Msk BIT(SYSTEM_PERICLKPWR1_SLWTMR0CLKPWR_Pos)
#define SYSTEM_PERICLKPWR1_SLWTMR1CLKPWR_Pos (21UL)
#define SYSTEM_PERICLKPWR1_SLWTMR1CLKPWR_Msk BIT(SYSTEM_PERICLKPWR1_SLWTMR1CLKPWR_Pos)
/* SLPCTRL */
#define SYSTEM_SLPCTRL_SLPMDSEL_Pos          (1UL)
#define SYSTEM_SLPCTRL_SLPMDSEL_Msk          BIT(SYSTEM_SLPCTRL_SLPMDSEL_Pos)
#define SYSTEM_SLPCTRL_ESPIWKEN_Pos          (2UL)
#define SYSTEM_SLPCTRL_ESPIWKEN_Msk          BIT(SYSTEM_SLPCTRL_ESPIWKEN_Pos)
#define SYSTEM_SLPCTRL_PS2WKEN_Pos           (3UL)
#define SYSTEM_SLPCTRL_PS2WKEN_Msk           BIT(SYSTEM_SLPCTRL_PS2WKEN_Pos)
#define SYSTEM_SLPCTRL_I2CWKEN_Pos           (4UL)
#define SYSTEM_SLPCTRL_I2CWKEN_Msk           BIT(SYSTEM_SLPCTRL_I2CWKEN_Pos)
#define SYSTEM_SLPCTRL_GPIOWKEN_Pos          (5UL)
#define SYSTEM_SLPCTRL_GPIOWKEN_Msk          BIT(SYSTEM_SLPCTRL_GPIOWKEN_Pos)
/* VIVOCTRL */
#define SYSTEM_VIVOCTRL_VIN0MD_Pos           (0UL)
#define SYSTEM_VIVOCTRL_VIN0MD_Msk           BIT(SYSTEM_VIVOCTRL_VIN0MD_Pos)
#define SYSTEM_VIVOCTRL_VIN1MD_Pos           (1UL)
#define SYSTEM_VIVOCTRL_VIN1MD_Msk           BIT(SYSTEM_VIVOCTRL_VIN1MD_Pos)
#define SYSTEM_VIVOCTRL_VIN2MD_Pos           (2UL)
#define SYSTEM_VIVOCTRL_VIN2MD_Msk           BIT(SYSTEM_VIVOCTRL_VIN2MD_Pos)
#define SYSTEM_VIVOCTRL_VIN3MD_Pos           (3UL)
#define SYSTEM_VIVOCTRL_VIN3MD_Msk           BIT(SYSTEM_VIVOCTRL_VIN3MD_Pos)
#define SYSTEM_VIVOCTRL_VIN4MD_Pos           (4UL)
#define SYSTEM_VIVOCTRL_VIN4MD_Msk           BIT(SYSTEM_VIVOCTRL_VIN4MD_Pos)
#define SYSTEM_VIVOCTRL_VIN5MD_Pos           (5UL)
#define SYSTEM_VIVOCTRL_VIN5MD_Msk           BIT(SYSTEM_VIVOCTRL_VIN5MD_Pos)
#define SYSTEM_VIVOCTRL_VIN0STS_Pos          (6UL)
#define SYSTEM_VIVOCTRL_VIN0STS_Msk          BIT(SYSTEM_VIVOCTRL_VIN0STS_Pos)
#define SYSTEM_VIVOCTRL_VIN1STS_Pos          (7UL)
#define SYSTEM_VIVOCTRL_VIN1STS_Msk          BIT(SYSTEM_VIVOCTRL_VIN1STS_Pos)
#define SYSTEM_VIVOCTRL_VIN2STS_Pos          (8UL)
#define SYSTEM_VIVOCTRL_VIN2STS_Msk          BIT(SYSTEM_VIVOCTRL_VIN2STS_Pos)
#define SYSTEM_VIVOCTRL_VIN3STS_Pos          (9UL)
#define SYSTEM_VIVOCTRL_VIN3STS_Msk          BIT(SYSTEM_VIVOCTRL_VIN3STS_Pos)
#define SYSTEM_VIVOCTRL_VIN4STS_Pos          (10UL)
#define SYSTEM_VIVOCTRL_VIN4STS_Msk          BIT(SYSTEM_VIVOCTRL_VIN4STS_Pos)
#define SYSTEM_VIVOCTRL_VIN5STS_Pos          (11UL)
#define SYSTEM_VIVOCTRL_VIN5STS_Msk          BIT(SYSTEM_VIVOCTRL_VIN5STS_Pos)
#define SYSTEM_VIVOCTRL_VIN0POL_Pos          (12UL)
#define SYSTEM_VIVOCTRL_VIN0POL_Msk          BIT(SYSTEM_VIVOCTRL_VIN0POL_Pos)
#define SYSTEM_VIVOCTRL_VIN1POL_Pos          (13UL)
#define SYSTEM_VIVOCTRL_VIN1POL_Msk          BIT(SYSTEM_VIVOCTRL_VIN1POL_Pos)
#define SYSTEM_VIVOCTRL_VIN2POL_Pos          (14UL)
#define SYSTEM_VIVOCTRL_VIN2POL_Msk          BIT(SYSTEM_VIVOCTRL_VIN2POL_Pos)
#define SYSTEM_VIVOCTRL_VIN3POL_Pos          (15UL)
#define SYSTEM_VIVOCTRL_VIN3POL_Msk          BIT(SYSTEM_VIVOCTRL_VIN3POL_Pos)
#define SYSTEM_VIVOCTRL_VIN4POL_Pos          (16UL)
#define SYSTEM_VIVOCTRL_VIN4POL_Msk          BIT(SYSTEM_VIVOCTRL_VIN4POL_Pos)
#define SYSTEM_VIVOCTRL_VIN5POL_Pos          (17UL)
#define SYSTEM_VIVOCTRL_VIN5POL_Msk          BIT(SYSTEM_VIVOCTRL_VIN5POL_Pos)
#define SYSTEM_VIVOCTRL_REGWREN_Pos          (30UL)
#define SYSTEM_VIVOCTRL_REGWREN_Msk          BIT(SYSTEM_VIVOCTRL_REGWREN_Pos)
#define SYSTEM_VIVOCTRL_VOUTMD_Pos           (31UL)
#define SYSTEM_VIVOCTRL_VOUTMD_Msk           BIT(SYSTEM_VIVOCTRL_VOUTMD_Pos)
/* LDOCTRL */
#define SYSTEM_LDOCTRL_LDO2EN_Pos            (3UL)
#define SYSTEM_LDOCTRL_LDO2EN_Msk            BIT(SYSTEM_LDOCTRL_LDO2EN_Pos)
#define SYSTEM_LDOCTRL_LDO3EN_Pos            (7UL)
#define SYSTEM_LDOCTRL_LDO3EN_Msk            BIT(SYSTEM_LDOCTRL_LDO3EN_Pos)
/* RC25MCTRL */
#define SYSTEM_RC25MCTRL_EN_Pos              (0UL)
#define SYSTEM_RC25MCTRL_EN_Msk              BIT(SYSTEM_RC25MCTRL_EN_Pos)
#define SYSTEM_RC25MCTRL_CALCURR_Pos         (1UL)
#define SYSTEM_RC25MCTRL_CALCURR_Msk         GENMASK(7, 1)
/* PLLCTRL */
#define SYSTEM_PLLCTRL_EN_Pos                (0UL)
#define SYSTEM_PLLCTRL_EN_Msk                BIT(SYSTEM_PLLCTRL_EN_Pos)
#define SYSTEM_PLLCTRL_RDY_Pos               (19UL)
#define SYSTEM_PLLCTRL_RDY_Msk               BIT(SYSTEM_PLLCTRL_RDY_Pos)
/* RC32KCTRL */
#define SYSTEM_RC32KCTRL_EN_Pos              (0UL)
#define SYSTEM_RC32KCTRL_EN_Msk              BIT(SYSTEM_RC32KCTRL_EN_Pos)
#define SYSTEM_RC32KCTRL_CAL_Pos             (1UL)
#define SYSTEM_RC32KCTRL_CAL_Msk             GENMASK(7, 1)
/* PERICLKPWR2 */
#define SYSTEM_PERICLKPWR2_RTCCLKPWR_Pos     (0UL)
#define SYSTEM_PERICLKPWR2_RTCCLKPWR_Msk     BIT(SYSTEM_PERICLKPWR2_RTCCLKPWR_Pos)
#define SYSTEM_PERICLKPWR2_WDTCLKPWR_Pos     (1UL)
#define SYSTEM_PERICLKPWR2_WDTCLKPWR_Msk     BIT(SYSTEM_PERICLKPWR2_WDTCLKPWR_Pos)
#define SYSTEM_PERICLKPWR2_PWRBTNCLKPWR_Pos  (2UL)
#define SYSTEM_PERICLKPWR2_PWRBTNCLKPWR_Msk  BIT(SYSTEM_PERICLKPWR2_PWRBTNCLKPWR_Pos)
#define SYSTEM_PERICLKPWR2_RC32KSRC_Pos      (30UL)
#define SYSTEM_PERICLKPWR2_RC32KSRC_Msk      GENMASK(31, 30)

#endif /* ZEPHYR_SOC_REALTEK_RTS5912_REG_SYSTEM_H */

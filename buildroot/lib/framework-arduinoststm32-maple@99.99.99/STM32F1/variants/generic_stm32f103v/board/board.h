/******************************************************************************
 * The MIT License
 *
 * Copyright (c) 2011 LeafLabs, LLC.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *****************************************************************************/

/**
 * @file   maple_RET6.h
 * @author Marti Bolivar <mbolivar@leaflabs.com>
 * @brief  Private include file for Maple RET6 Edition in boards.h
 *
 * See maple.h for more information on these definitions.
 */

#ifndef _BOARDS_GENERIC_STM32F103V_H_
#define _BOARDS_GENERIC_STM32F103V_H_

/* A few of these values will seem strange given that it's a
 * high-density board. */

#define CYCLES_PER_MICROSECOND	(F_CPU / 1000000U)
#define SYSTICK_RELOAD_VAL     (F_CPU/1000) - 1 /* takes a cycle to reload */

#define BOARD_BUTTON_PIN        PC0
#define BOARD_BUTTON_PIN2       PD12
#define BOARD_LED_PIN           PE5
#define BOARD_LED_PIN2          PE6

// USARTS
#define BOARD_NR_USARTS         5
#define BOARD_USART1_TX_PIN     PA9
#define BOARD_USART1_RX_PIN     PA10

#define BOARD_USART2_TX_PIN     PD5
#define BOARD_USART2_RX_PIN     PD6

#define BOARD_USART3_TX_PIN     PB10
#define BOARD_USART3_RX_PIN     PB11

#define BOARD_USART4_TX_PIN     PC10
#define BOARD_USART4_RX_PIN     PC11

#define BOARD_USART5_TX_PIN     PC12
#define BOARD_USART5_RX_PIN     PD2



/* Note:
 *
 * SPI3 is unusable due to pin 43 (PB4) and NRST tie-together :(, but
 * leave the definitions so as not to clutter things up.  This is only
 * OK since RET6 Ed. is specifically advertised as a beta board. */
#define BOARD_NR_SPI            3
#define BOARD_SPI1_NSS_PIN      PA4
#define BOARD_SPI1_SCK_PIN      PA5
#define BOARD_SPI1_MISO_PIN     PA6
#define BOARD_SPI1_MOSI_PIN     PA7



#define BOARD_SPI2_NSS_PIN      PB12
#define BOARD_SPI2_SCK_PIN      PB13
#define BOARD_SPI2_MISO_PIN     PB14
#define BOARD_SPI2_MOSI_PIN     PB15


#define BOARD_SPI3_NSS_PIN      PA15
#define BOARD_SPI3_SCK_PIN      PB3
#define BOARD_SPI3_MISO_PIN     PB4
#define BOARD_SPI3_MOSI_PIN     PB5


/* GPIO A to E = 5 * 16  = 80*/
/* value is now 80 as boo1 was added via PR to the pinmap but this value was not increased*/
#define BOARD_NR_GPIO_PINS      80
/* Note: NOT 19. The missing one is D38 a.k.a. BOARD_BUTTON_PIN, which
 * isn't broken out to a header and is thus unusable for PWM. */
#define BOARD_NR_PWM_PINS       19
#define BOARD_NR_ADC_PINS       16
#define BOARD_NR_USED_PINS      7

#define BOARD_JTMS_SWDIO_PIN    PA13
#define BOARD_JTCK_SWCLK_PIN    PA14
#define BOARD_JTDI_PIN          PA15
#define BOARD_JTDO_PIN          PB3
#define BOARD_NJTRST_PIN        PB4

/* USB configuration.  BOARD_USB_DISC_DEV is the GPIO port containing
 * the USB_DISC pin, and BOARD_USB_DISC_BIT is that pin's bit. */
#define BOARD_USB_DISC_DEV      GPIOC
#define BOARD_USB_DISC_BIT      12

/*
 * SDIO Pins
 */
#define BOARD_SDIO_D0 			PC8
#define BOARD_SDIO_D1 			PC9
#define BOARD_SDIO_D2 			PC10
#define BOARD_SDIO_D3 			PC11
#define BOARD_SDIO_CLK 			PC12
#define BOARD_SDIO_CMD 			PD2

/* Pin aliases: these give the GPIO port/bit for each pin as an
 * enum. These are optional, but recommended. They make it easier to
 * write code using low-level GPIO functionality. */
enum {
PA0,PA1,PA2,PA3,PA4,PA5,PA6,PA7,PA8,PA9,PA10,PA11,PA12,PA13,PA14,PA15,
PB0,PB1,PB2,PB3,PB4,PB5,PB6,PB7,PB8,PB9,PB10,PB11,PB12,PB13,PB14,PB15,
PC0,PC1,PC2,PC3,PC4,PC5,PC6,PC7,PC8,PC9,PC10,PC11,PC12,PC13,PC14,PC15,
PD0,PD1,PD2,PD3,PD4,PD5,PD6,PD7,PD8,PD9,PD10,PD11,PD12,PD13,PD14,PD15,
PE0,PE1,PE2,PE3,PE4,PE5,PE6,PE7,PE8,PE9,PE10,PE11,PE12,PE13,PE14,PE15,
};

#endif

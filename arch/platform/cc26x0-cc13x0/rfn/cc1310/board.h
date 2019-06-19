/*---------------------------------------------------------------------------*/
/** \addtogroup rfn-cc1310
 * @{
 *
 * \defgroup rfn-cc1310-peripherals Peripherals for the RFN Tag
 *
 * Defines related to the RFN Tag
 *
 * This file provides connectivity information on LEDs, Buttons, UART and
 * other peripherals
 *
 * This file can be used as the basis to configure other boards using the
 * CC13xx/CC26xx code as their basis.
 *
 * This file is not meant to be modified by the user.
 * @{
 *
 * \file
 * Header file with definitions related to the I/O connections on the TI
 * RFN Tag
 *
 * \note   Do not include this file directly. It gets included by contiki-conf
 *         after all relevant directives have been set.
 */
/*---------------------------------------------------------------------------*/
#ifndef BOARD_H_
#define BOARD_H_
/*---------------------------------------------------------------------------*/
#include "ioc.h"
/*---------------------------------------------------------------------------*/
/**
 * \name LED HAL configuration
 *
 * Those values are not meant to be modified by the user
 * @{
 */
#define LEDS_CONF_COUNT                 1
#define LEDS_CONF_RED                   1
/** @} */
/*---------------------------------------------------------------------------*/
/**
 * \name LED IOID mappings
 *
 * Those values are not meant to be modified by the user
 * @{
 */
#define BOARD_IOID_LED_1          IOID_4
/** @} */
/*---------------------------------------------------------------------------*/
/**
 * \name UART IOID mapping
 *
 * Those values are not meant to be modified by the user
 * @{
 */
#define BOARD_IOID_UART_RX        IOID_1
#define BOARD_IOID_UART_TX        IOID_0
#define BOARD_IOID_UART_CTS       IOID_UNUSED //IOID_19
#define BOARD_IOID_UART_RTS       IOID_UNUSED //IOID_18
#define BOARD_UART_RX             (1 << BOARD_IOID_UART_RX)
#define BOARD_UART_TX             (1 << BOARD_IOID_UART_TX)
#define BOARD_UART_CTS            (1 << BOARD_IOID_UART_CTS)
#define BOARD_UART_RTS            (1 << BOARD_IOID_UART_RTS)
/** @} */
/*---------------------------------------------------------------------------*/
/**
 * \name Button IOID mapping
 *
 * Those values are not meant to be modified by the user
 * @{
 */
#define BOARD_IOID_KEY_LEFT       IOID_14
#define BOARD_IOID_KEY_SELECT     IOID_12
#define BOARD_KEY_LEFT            (1 << BOARD_IOID_KEY_LEFT)
#define BOARD_KEY_SELECT          (1 << BOARD_IOID_KEY_SELECT)
/** @} */
/*---------------------------------------------------------------------------*/
/**
 * \name SPI IOID mapping
 *
 * Those values are not meant to be modified by the user
 * @{
 */
//#define BOARD_IOID_SPI_SCK        IOID_10
//#define BOARD_IOID_SPI_MOSI       IOID_9
//#define BOARD_IOID_SPI_MISO       IOID_8
//#define BOARD_SPI_SCK             (1 << BOARD_IOID_SPI_SCK)
//#define BOARD_SPI_MOSI            (1 << BOARD_IOID_SPI_MOSI)
//#define BOARD_SPI_MISO            (1 << BOARD_IOID_SPI_MISO)
/** @} */
/*---------------------------------------------------------------------------*/
/**
 * \name LCD IOID mapping
 *
 * Those values are not meant to be modified by the user
 * @{
 */
//#define BOARD_IOID_LCD_MODE       IOID_4
//#define BOARD_IOID_LCD_RST        IOID_5
//#define BOARD_IOID_LCD_CS         IOID_14
//#define BOARD_IOID_LCD_SCK        BOARD_IOID_SPI_SCK
//#define BOARD_IOID_LCD_MOSI       BOARD_IOID_SPI_MOSI
//#define BOARD_LCD_MODE            (1 << BOARD_IOID_LCD_MODE)
//#define BOARD_LCD_RST             (1 << BOARD_IOID_LCD_RST)
//#define BOARD_LCD_CS              (1 << BOARD_IOID_LCD_CS)
//#define BOARD_LCD_SCK             BOARD_SPI_SCK
//#define BOARD_LCD_MOSI            BOARD_SPI_MOSI
/** @} */
/*---------------------------------------------------------------------------*/
/**
 * \name SD Card IOID mapping
 *
 * Those values are not meant to be modified by the user
 * @{
 */
//#define BOARD_IOID_SDCARD_CS      IOID_30
//#define BOARD_SDCARD_CS           (1 << BOARD_IOID_SDCARD_CS)
//#define BOARD_IOID_SDCARD_SCK     BOARD_IOID_SPI_SCK
//#define BOARD_SDCARD_SCK          BOARD_SPI_SCK
//#define BOARD_IOID_SDCARD_MOSI    BOARD_IOID_SPI_MOSI
//#define BOARD_SDCARD_MOSI         BOARD_SPI_MOSI
//#define BOARD_IOID_SDCARD_MISO    BOARD_IOID_SPI_MISO
//#define BOARD_SDCARD_MISO         BOARD_SPI_MISO
/** @} */
/*---------------------------------------------------------------------------*/
/**
 * \name ALS IOID mapping
 *
 * Those values are not meant to be modified by the user
 * @{
 */
//#define BOARD_IOID_ALS_PWR        IOID_26
//#define BOARD_IOID_ALS_OUT        IOID_23
//#define BOARD_ALS_PWR             (1 << BOARD_IOID_ALS_PWR)
//#define BOARD_ALS_OUT             (1 << BOARD_IOID_ALS_OUT)
/** @} */
/*---------------------------------------------------------------------------*/
/**
 * \name ACC IOID mapping
 *
 * Those values are not meant to be modified by the user
 * @{
 */
//#define BOARD_IOID_ACC_PWR        IOID_20
//#define BOARD_IOID_ACC_INT        IOID_28
//#define BOARD_IOID_ACC_INT1       IOID_28
//#define BOARD_IOID_ACC_INT2       IOID_29
//#define BOARD_IOID_ACC_CS         IOID_24
//#define BOARD_ACC_PWR             (1 << BOARD_IOID_ACC_PWR)
//#define BOARD_ACC_INT             (1 << BOARD_IOID_ACC_INT)
//#define BOARD_ACC_INT1            (1 << BOARD_IOID_ACC_INT1)
//#define BOARD_ACC_INT2            (1 << BOARD_IOID_ACC_INT2)
//#define BOARD_ACC_CS              (1 << BOARD_IOID_ACC_CS)
//#define BOARD_IOID_ACC_SCK        BOARD_IOID_SPI_SCK
//#define BOARD_ACC_SCK             BOARD_SPI_SCK
//#define BOARD_IOID_ACC_MOSI       BOARD_IOID_SPI_MOSI
//#define BOARD_ACC_MOSI            BOARD_SPI_MOSI
//#define BOARD_IOID_ACC_MISO       BOARD_IOID_SPI_MISO
//#define BOARD_ACC_MISO            BOARD_SPI_MISO
/** @} */
/*---------------------------------------------------------------------------*/
/**
 * \brief ROM bootloader configuration
 *
 * Change CCXXWARE_CONF_BL_PIN_NUMBER to BOARD_IOID_KEY_xyz to select which
 * button triggers the bootloader on reset. Use CCXXWARE_CONF_BL_LEVEL to
 * control the pin level that enables the bootloader (0: low, 1: high). It is
 * also possible to use any other externally-controlled DIO.
 * @{
 */
#define CCXXWARE_CONF_BL_PIN_NUMBER   IOID_UNUSED//BOARD_IOID_KEY_SELECT
#define CCXXWARE_CONF_BL_LEVEL        0
/** @} */
/*---------------------------------------------------------------------------*/
/**
 * \brief Remaining pins
 *
 * Those values are not meant to be modified by the user
 * @{
 */
#define BOARD_IOID_CS             IOID_11
#define BOARD_IOID_TDO            IOID_16
#define BOARD_IOID_TDI            IOID_17
#define BOARD_IOID_DIO15          IOID_15
#define BOARD_IOID_DIO21          IOID_21
#define BOARD_IOID_DIO22          IOID_22
#define BOARD_IOID_DIO23          IOID_23
#define BOARD_IOID_DIO24          IOID_24
#define BOARD_IOID_DIO25          IOID_25
#define BOARD_IOID_DIO26          IOID_26
#define BOARD_IOID_DIO27          IOID_27
#define BOARD_IOID_DIO28          IOID_28
#define BOARD_IOID_DIO29          IOID_29
#define BOARD_IOID_DIO30          IOID_30

#define BOARD_UNUSED_PINS { \
    BOARD_IOID_CS, BOARD_IOID_TDO, BOARD_IOID_TDI, \
    BOARD_IOID_DIO15, BOARD_IOID_DIO21, BOARD_IOID_DIO22, BOARD_IOID_DIO23, \
    BOARD_IOID_DIO24, BOARD_IOID_DIO25, BOARD_IOID_DIO26, BOARD_IOID_DIO27, \
    BOARD_IOID_DIO28, BOARD_IOID_DIO29, BOARD_IOID_DIO30, \
    IOID_UNUSED \
  }
/** @} */
/*---------------------------------------------------------------------------*/
/**
 * \brief Board indices for the button HAL
 *
 * Those values are not meant to be modified by the user
 * @{
 */
#define BOARD_BUTTON_HAL_INDEX_KEY_LEFT   0x00
#define BOARD_BUTTON_HAL_INDEX_KEY_SELECT 0x01
/** @} */
/*---------------------------------------------------------------------------*/
/**
 * \name Device string used on startup
 * @{
 */
#define BOARD_STRING "RFN Tag"
/** @} */
/*---------------------------------------------------------------------------*/
#endif /* BOARD_H_ */
/*---------------------------------------------------------------------------*/
/**
 * @}
 * @}
 */

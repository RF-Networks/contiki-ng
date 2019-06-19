/*---------------------------------------------------------------------------*/
/**
 * \addtogroup srf06-common-peripherals
 * @{
 *
 * \file
 * Defines SmarfRF06 + CC13xxEM/CC26xxEM buttons for use with the button HAL
 */
/*---------------------------------------------------------------------------*/
#include "contiki.h"
#include "dev/button-hal.h"

#include "ti-lib.h"
/*---------------------------------------------------------------------------*/
BUTTON_HAL_BUTTON(reed_relay, "Reed Relay", BOARD_IOID_KEY_LEFT, \
				  GPIO_HAL_PIN_CFG_PULL_NONE, BOARD_BUTTON_HAL_INDEX_KEY_LEFT, \
                  true);

BUTTON_HAL_BUTTON(key_select, "Key Select", BOARD_IOID_KEY_SELECT, \
				  GPIO_HAL_PIN_CFG_PULL_NONE, BOARD_BUTTON_HAL_INDEX_KEY_SELECT, \
                  true);
/*---------------------------------------------------------------------------*/
BUTTON_HAL_BUTTONS(&reed_relay, &key_select);
/*---------------------------------------------------------------------------*/
/** @} */

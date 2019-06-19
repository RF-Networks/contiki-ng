/*---------------------------------------------------------------------------*/
/**
 * \addtogroup rfn-common-peripherals
 * @{
 *
 * \file
 *  Board-initialisation for the RFN Tag.
 */
/*---------------------------------------------------------------------------*/
#include "contiki.h"
#include "lpm.h"
#include "ti-lib.h"
#include "board-peripherals.h"
#include "rf-core/rf-switch.h"

#include <stdint.h>
#include <string.h>
#include <stdbool.h>
/*---------------------------------------------------------------------------*/
static void
wakeup_handler(void)
{
  /* Turn on the PERIPH PD */
  ti_lib_prcm_power_domain_on(PRCM_DOMAIN_PERIPH);
  while(ti_lib_prcm_power_domain_status(PRCM_DOMAIN_PERIPH)
        != PRCM_DOMAIN_POWER_ON);
}
/*---------------------------------------------------------------------------*/
/*
 * Declare a data structure to register with LPM.
 * We don't care about what power mode we'll drop to, we don't care about
 * getting notified before deep sleep. All we need is to be notified when we
 * wake up so we can turn power domains back on
 */
LPM_MODULE(rfn_tag_module, NULL, NULL, wakeup_handler, LPM_DOMAIN_NONE);
/*---------------------------------------------------------------------------*/
static void
configure_unused_pins(void)
{
  uint32_t pins[] = BOARD_UNUSED_PINS;

  uint32_t *pin;

  for(pin = pins; *pin != IOID_UNUSED; pin++) {
    ti_lib_ioc_pin_type_gpio_input(*pin);
    ti_lib_ioc_io_port_pull_set(*pin, IOC_IOPULL_DOWN);
  }
}
/*---------------------------------------------------------------------------*/
void
board_init()
{
  /* Disable global interrupts */
  bool int_disabled = ti_lib_int_master_disable();

  /* Turn on relevant PDs */
  wakeup_handler();

  /* Enable GPIO peripheral */
  ti_lib_prcm_peripheral_run_enable(PRCM_PERIPH_GPIO);

  /* Apply settings and wait for them to take effect */
  ti_lib_prcm_load_set();
  while(!ti_lib_prcm_load_get());

  lpm_register_module(&rfn_tag_module);

  /* For unsupported peripherals, select a default pin configuration */
  configure_unused_pins();

  /* Initialise the RF switch if present */
  rf_switch_init();

  /* Re-enable interrupt if initially enabled. */
  if(!int_disabled) {
    ti_lib_int_master_enable();
  }
}
/*---------------------------------------------------------------------------*/
/** @} */

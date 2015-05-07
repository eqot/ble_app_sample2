#ifndef ADVERTISING_H__
#define ADVERTISING_H__

#define ADVERTISING_LED_PIN_NO          BSP_LED_0                                   /**< Is on when device is advertising. */

void advertising_init(ble_lbs_t *lbs);
void advertising_start(void);

#endif // ADVERTISING_H__

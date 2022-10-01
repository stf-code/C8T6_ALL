#ifndef __led_h_
#define __led_h_

#include "tim.h"
void led_on(void);
void led_off(void);

void led_breath(TIM_HandleTypeDef * htim,uint32_t Channel,uint8_t compare);

#endif

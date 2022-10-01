#ifndef __sg90_h_
#define __sg90_h_

#include "stdint.h"
#include "tim.h"

void sg90_set_angle(TIM_HandleTypeDef * htim,uint32_t Channel,uint8_t angle);


#endif

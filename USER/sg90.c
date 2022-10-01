#include "sg90.h"
#include "stm32f1xx_hal.h"
#include "tim.h"

void sg90_set_angle(TIM_HandleTypeDef * htim,uint32_t Channel,uint8_t angle)
{
	uint8_t compare = 0;
	if(angle <= 180)
	{
		compare = 500 + 2000 / 180 * angle;
		__HAL_TIM_SetCompare(htim,Channel,compare);
	}
}

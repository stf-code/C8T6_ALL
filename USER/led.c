#include "led.h"
#include "main.h"

uint16_t led_breath_compare = 0;

void led_on(void)
{
	HAL_GPIO_WritePin(LED_GPIO_Port,LED_Pin,GPIO_PIN_RESET);
}

void led_off(void)
{
	HAL_GPIO_WritePin(LED_GPIO_Port,LED_Pin,GPIO_PIN_SET);
}

/*�����Ƴ��򣬵��õ�ʱ����pwm�ն˷�������ʹ��*/
void led_breath(TIM_HandleTypeDef * htim,uint32_t Channel,uint8_t compare)
{
	__HAL_TIM_SetCompare(htim,Channel,led_breath_compare);	
	led_breath_compare++;
	if(led_breath_compare == compare)
	{
		led_breath_compare = 0;
	}
}

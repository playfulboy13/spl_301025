#ifndef _MAIN_H
#define _MAIN_H

#include <stm32f10x_gpio.h>
#include <stm32f10x_usart.h>

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct
{
	GPIO_TypeDef* GPIO_Port;
	uint16_t GPIO_Pin;
	GPIOMode_TypeDef GPIO_Mode;
	GPIOSpeed_TypeDef GPIO_Speed;
}GPIO_Config_t;

void SystemClock_Config(void);
void GPIO_Init_Config(void);
void GPIO_Config(void);


#endif
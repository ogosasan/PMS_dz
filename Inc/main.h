#ifndef MAIN_H_
#define MAIN_H_

#include "stm32f1xx.h"
#include "stdbool.h"

/* Прототипы функций */
void initClk(void);
void initTIM2(void);
void delay(uint32_t takts);
uint16_t read_adc(uint8_t channel);
#endif

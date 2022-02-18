#ifndef _STM32F072B_RCC_H_
#define _STM32F072B_RCC_H_

#ifndef STM32F072
#define STM32F072
#endif /* STM32F072 */
#include "CMSIS/stm32f0xx.h"

void rcc_deinit(void);

void set_sys_clock_16(void);

#endif /* _STM32F072B_RCC_H_ */

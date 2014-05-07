
#ifndef __STM32_H
#define __STM32_H

#if defined(STM32F4XX)
	#include "stm32f4xx.h"
#elif defined(STM32F2XX)
	#include "stm32f2xx.h"
#elif defined(STM32F1XX)
	#include "stm32f1xx.h"
#elif defined(STM32F3XX)
	#include "stm32f3xx.h"
#elif defined(STM32F0XX) || defined(STM32F0XX_LD)
	#include "stm32f0xx.h"
#else
	#include "stm32f1xx.h"
#endif

#endif /* __STM32_H */
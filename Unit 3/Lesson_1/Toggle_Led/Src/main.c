/*
 * main.c
 *
 *  Created on: Sep 6, 2025
 *      Author: Youssef Khaled
 */
#include "Platform_Types.h"

#define Youssef 1

#define RCC_BASE 			0x40021000
#define GPIOA_BASE 			0x40010800

#define RCC_APB2ENR 		*((vuint32_t*) (RCC_BASE + 0x18))
#define GPIOA_CRH 			*((vuint32_t*) (GPIOA_BASE + 0x04))
#define GPIOA_ODR 			*((vuint32_t*) (GPIOA_BASE + 0x0C))
#define RCC_IOPAEN	(1<<2)
#define GPIOA_Pin13	(1UL<<13)

typedef union {
	uint32 Register;
	struct {
		uint32 reserved :13;
		uint32 p_13 :1;

	} Pin;
} R_ODR_T;

volatile R_ODR_T *R_ODR = (volatile R_ODR_T*) (GPIOA_BASE + 0x0C);

int main() {
	volatile uint8 i = 0;
	/* Enable CLock */
	RCC_APB2ENR |= RCC_IOPAEN;
	/* Clear First to make sure*/
	GPIOA_CRH &= 0xFF0FFFFF;
	/* Set The required Pins */
	GPIOA_CRH |= 0xFFFFFFFF;
	while (Youssef) {
		R_ODR->Pin.p_13 = 1;
		for (i = 0; i < 5000; i++)
			;
		R_ODR->Pin.p_13 = 0;
		for (i = 0; i < 5000; i++)
			;
	}
}


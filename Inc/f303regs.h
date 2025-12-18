/*
 * f303regs.h
 *
 *  Created on: Feb 26, 2025
 *      Author: idocs
 */

#ifndef F303REGS_H_
#define F303REGS_H_
#include <stdint.h>

// AHB peripheral clock enable register
typedef union
{
	uint32_t value;
	struct
	{
		uint32_t DMA1EN   : 1;
		uint32_t DMA2EN   : 1;
		uint32_t SRAMEN   : 1;
		uint32_t RESERVED1: 1;
		uint32_t FLITFEN  : 1;
		uint32_t FMCEN    : 1;
		uint32_t CRCEN    : 1;
		uint32_t RESERVED2: 9;
		uint32_t GPIOHEN  : 1;
		uint32_t GPIOAEN  : 1;
		uint32_t GPIOBEN  : 1;
		uint32_t GPIOCEN  : 1;
		uint32_t GPIODEN  : 1;
		uint32_t GPIOEEN  : 1;
		uint32_t GPIOFEN  : 1;
		uint32_t GPIOGEN  : 1;
		uint32_t TSCEN    : 1;
		uint32_t RESERVED3: 3;
		uint32_t ADC12EN  : 1;
		uint32_t ADC34EN  : 1;
		uint32_t RESERVED4: 2;
	} Ports;
} RCC_AHBENR_t;

typedef union
{
	uint32_t value;
	struct
	{
		uint32_t moder0:  2;
		uint32_t moder1:  2;
		uint32_t moder2:  2;
		uint32_t moder3:  2;
		uint32_t moder4:  2;
		uint32_t moder5:  2;
		uint32_t moder6:  2;
		uint32_t moder7:  2;
		uint32_t moder8:  2;
		uint32_t moder9:  2;
		uint32_t moder10: 2;
		uint32_t moder11: 2;
		uint32_t moder12: 2;
		uint32_t moder13: 2;
		uint32_t moder14: 2;
		uint32_t moder15: 2;
	} Moders;
} GPIOx_MODE_t;

typedef union
{
	uint32_t value;
	struct
	{
		uint32_t IDR0:     1;
		uint32_t IDR1:     1;
		uint32_t IDR2:     1;
		uint32_t IDR3:     1;
		uint32_t IDR4:     1;
		uint32_t IDR5:     1;
		uint32_t IDR6:     1;
		uint32_t IDR7:     1;
		uint32_t IDR8:     1;
		uint32_t IDR9:     1;
		uint32_t IDR10:    1;
		uint32_t IDR11:    1;
		uint32_t IDR12:    1;
		uint32_t IDR13:    1;
		uint32_t IDR14:    1;
		uint32_t IDR15:    1;
		uint32_t RESERVED: 16;

	} Ports;
} GPIOx_IDR_t;

typedef union
{
	uint32_t value;
	struct
	{
		uint32_t ODR0:     1;
		uint32_t ODR1:     1;
		uint32_t ODR2:     1;
		uint32_t ODR3:     1;
		uint32_t ODR4:     1;
		uint32_t ODR5:     1;
		uint32_t ODR6:     1;
		uint32_t ODR7:     1;
		uint32_t ODR8:     1;
		uint32_t ODR9:     1;
		uint32_t ODR10:    1;
		uint32_t ODR11:    1;
		uint32_t ODR12:    1;
		uint32_t ODR13:    1;
		uint32_t ODR14:    1;
		uint32_t ODR15:    1;
		uint32_t RESERVED: 16;

	} Ports;
} GPIOx_ODR_t;

typedef union
{
	uint32_t value;
	struct
	{
		uint32_t pin0:  2;
		uint32_t pin1:  2;
		uint32_t pin2:  2;
		uint32_t pin3:  2;
		uint32_t pin4:  2;
		uint32_t pin5:  2;
		uint32_t pin6:  2;
		uint32_t pin7:  2;
		uint32_t pin8:  2;
		uint32_t pin9:  2;
		uint32_t pin10: 2;
		uint32_t pin11: 2;
		uint32_t pin12: 2;
		uint32_t pin13: 2;
		uint32_t pin14: 2;
		uint32_t pin15: 2;
	} Ports;
} GPIOx_PUPDR_t;
#endif /* F303REGS_H_ */

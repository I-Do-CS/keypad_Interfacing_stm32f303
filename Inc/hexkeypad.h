/*
 * hexkeypad.h
 *
 *  Created on: Feb 26, 2025
 *      Author: idocs
 */

#ifndef HEXKEYPAD_H_
#define HEXKEYPAD_H_

/**
 * Only works with this exact setup
 */
typedef union
{
	uint32_t const value;
	struct
	{
		uint32_t r1 : 1;
		uint32_t r2 : 1;
		uint32_t r3 : 1;
		uint32_t r4 : 1;
		uint32_t const RESERVED : 28;
	};
} Keypad_rows_t;

/**
 * Only works with this exact setup
 */
typedef union
{
	uint32_t const value;
	struct
	{
		uint32_t const RESERVED1 : 4;
		uint32_t c1 : 1;
		uint32_t c2 : 1;
		uint32_t c3 : 1;
		uint32_t c4 : 1;
		uint32_t const RESERVED2 : 24;
	};
} Keypad_cols_t;

#endif /* HEXKEYPAD_H_ */

#ifndef _SCREEN_H_
#define _SCREEN_H_

#include "system.h"

#define MAX_ROWS 		30
#define MAX_COLS 		80

#define BLACK			0x0
#define BLUE			0x1
#define GREEN			0x2
#define CYAN			0x3
#define RED			    0x4
#define MAGENTA			0x5
#define BROWN			0x6
#define WHITE			0x7
#define GRAY			0x8
#define LIGHT_BLUE		0x9
#define LIGHT_GREEN		0xa
#define LIGHT_CYAN		0xb
#define LIGHT_RED		0xc
#define LIGHT_MAGENTA	0xd
#define YELLOW			0xe
#define BRIGHT_WHITE	0xf

void puts(uint8_t row, uint8_t col, uint8_t fgcolor, uint8_t bgcolor, const char *message);
void clear_screen(uint8_t bgcolor);

#endif

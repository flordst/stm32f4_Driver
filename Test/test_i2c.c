/*
 * test_i2c.c
 *
 *  Created on: Sep 6, 2024
 *      Author: admin
 */

#include "STM32F407_OLED_SSD1306_Driver.h"

int main(void)
{

	OLED_SSD1306_Init();
	OLED_SSD1306_Puts("HELLO WORLD ",&OLED_Font_11x18, OLED_COLOR_WHITE);
	OLED_SSD1306_UpdateScreen(); // Always update screen after any changes to appear in OLED

}

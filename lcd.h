#ifndef LCD_H
#define LCD_H

#include <stm32f10x.h>

/*CABECERAS*/

void delay_us (uint16_t t);
uint8_t string_len(char* data);
void lcd_init(void);
void lcd_sendData (uint8_t data);
void lcd_sendCommand (uint8_t cmd);
void lcd_putValue (uint8_t value);
void lcd_string(char* data);

#endif

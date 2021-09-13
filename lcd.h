#ifndef LCD_H
#define LCD_H

#include <stm32f10x.h>
#include "keypadScan.h"	//pal delay_us por ahora

//PARA CAMBIAR EL PUERTO CAMBIAR GPIOx DONDE x CORRESPONDE AL PUERTO
#define LCD_PORT 		GPIOA->CRL
#define LCD_PIN_IN 		GPIOA->IDR			//Input Data Register
#define LCD_PIN_OUT 		GPIOA->ODR			//Output Data Register

//Since BRR and BSRR are opposite of each other, 
//you can use both if you don't want to do the bit shift left operation
#define LCD_PORT_BSRR	GPIOA->BSRR
#define LCD_PORT_BRR	GPIOA->BRR 
	
#define LCD_RS 4
#define LCD_RW 6
#define LCD_EN 5

/*CABECERAS*/

void delay_us (uint16_t t);
uint8_t string_len(char* data);
void lcd_init(void);
void lcd_sendData (uint8_t data);
void lcd_sendCommand (uint8_t cmd);
void lcd_putValue (uint8_t value);
void lcd_string(char* data, uint8_t nBytes);
#endif


/* Main.c file generated by New Project wizard
 *
 * Created:   Tue Sep 7 2021
 * Processor: STM32F103C6
 * Compiler:  Keil for ARM
 */



#include <keypadScan.h>	//pal delay_us por ahora


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


void lcd_init(void);
void lcd_sendData (uint8_t data);
void lcd_sendCommand (uint8_t cmd);
void lcd_putValue (uint8_t value);
void lcd_string(char* data, uint8_t nBytes);

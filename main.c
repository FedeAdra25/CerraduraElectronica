/* Main.c file generated by New Project wizard
 *
 * Created:   Tue Sep 7 2021
 * Processor: STM32F103C6
 * Compiler:  Keil for ARM
 */

#include <stm32f10x.h>
#include <string.h>
#include "keypadScan.h"

#define LCD_RS 4
#define LCD_RW 6
#define LCD_EN 5

/*CABECERAS*/
void delay_us (uint16_t t);


int main (void)
{ 
   // Write your code here
   
    RCC->APB2ENR |= 0xFC;        /* Enable clocks for GPIO ports */
    KEYPAD_Init();
    
    //GPIOA->CRL = 0x44333333;    // PA0-PA7 as outputs => Esto no va, los pines los usa el LCD
	//Los de keypad los usas en KEYPAD_init
    
    //4 indica Entrada de Alta Impedancia.
    //3 Indica Salida
    //8 Indica Entrada

    
    
	while (1){ 
//		KEYPAD_Scan(&a);
	}
}

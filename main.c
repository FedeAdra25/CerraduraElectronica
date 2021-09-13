/* Main.c file generated by New Project wizard
 *
 * Created:   Tue Sep 7 2021
 * Processor: STM32F103C6
 * Compiler:  Keil for ARM
 */

#include <stm32f10x.h>

#include "keypadScan.h"
#include "lcd.h"



int main (void)
 { 
	 uint8_t a;
    //4 indica Entrada de Alta Impedancia.
    //3 Indica Salida
    //8 Indica Entrada
    
   // CODIGO DE PRUEBA KEYPAD + LCD
   
    RCC->APB2ENR |= 0xFC;        /* Enable clocks for GPIO ports */
    
    //Inicializo los perifericos
    KEYPAD_Init();
    LCDinit();
    
    LCDstring("TESTEANDO HOLA",11);
    
   while (1){ 
		 KEYPAD_Scan(&a);	//en la variable 'a' se guarda la tecla leida por teclado
		 delay_us(300);
	 }
 }

/* Main.c file generated by New Project wizard
 *
 * Created:   Tue Sep 14 2021
 * Processor: STM32F103C6
 * Compiler:  Keil for ARM
 */

#include <stm32f103x6.h>
#include "main.h"
#include "lcd.h"
#include "keypadScan.h"
#include "MEF.h"
#include "seos.h"
#include "timer.h"

int main(void)
{
   RCC->APB2ENR |= 0xFC;
	
	//Inicializar periféricos	
	KEYPAD_Init();
	LCDinit();
	//Inicializar MEF	
	MEF_Init(10);	
	//Inicializar Timer (para el reloj)
	TIMER_Init((uint8_t)14,(uint8_t)59,(uint8_t)00);	
	//Configurar Arq time-triggered
	//La libreria interrumpe cada xxms
	SEOS_Init();	
	//Habilitar interrupciones
   
    while (1) 
    {
       //realizar  tareas
       SEOS_Dispatch_Tasks();
    }
}

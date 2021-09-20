/*
 * seos.c
 *
 * Created: 08-May-21 4:39:28 PM
 *  Author: fedea
 */ 

#include "seos.h"
#include "timer.h"
#include "MEF.h"
#include <stm32f103x6.h>

volatile unsigned char Flag_MEF=0;
static unsigned char iCont=0;
static unsigned char iClock=0;

void SEOS_Init(){
	//configuro Timer0 para interrupciones cada 4 ms
	SysTick->LOAD = (uint32_t)63999;
	SysTick->CTRL = 0x3;
}

void SEOS_Dispatch_Tasks(){
	
	if(Flag_MEF==1){ //Esto corre cada 100ms
		if(++iClock==10){
			TIMER_Update();
			iClock=0;
		}
		Flag_MEF=0;
		MEF_Update();
	}	
}

void SysTick_Handler() //Esto corre cada 4ms
{
	if(++iCont==25){
		Flag_MEF=1;
		iCont=0;
	}
}

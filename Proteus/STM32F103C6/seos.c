/*
 * seos.c
 *
 * Created: 08-May-21 4:39:28 PM
 *  Author: fedea
 */ 

#include "seos.h"
#include "timer.h"
#include "MEF.h"


volatile unsigned char Flag_MEF=0;
static unsigned char iClock=0;

void SEOS_Init(){
	//configuro SysTick para interrupciones cada 100 ms
	SysTick->LOAD = (uint32_t)7199999;
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

void SysTick_Handler() //Esto corre cada 100ms
{
	Flag_MEF=1;
}

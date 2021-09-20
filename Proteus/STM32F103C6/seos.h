/*
 * seos.h
 *
 * Created: 08-May-21 4:39:43 PM
 *  Author: fedea
 */ 

#ifndef SEOS_H_
#define SEOS_H_

#include <stm32f103x6.h>

void SEOS_Init(void);
void SEOS_Dispatch_Tasks(void);

#endif /* SEOS_H_ */

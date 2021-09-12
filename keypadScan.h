/*
 * KeypadScanLib.h
 *
 * Created: 19-Apr-21 4:52:13 PM
 *  Author: fedea
 */


#ifndef KEYPADSCANLIB_H_
#define KEYPADSCANLIB_H_
//#include <inttypes.h>
//#include <avr/io.h>


/************************************************
Librería para leer teclado matricial
	
	row/col x -> mcu pin i
	
	COL1 -> KEYPAD_PORT_Pin8
	COL2 -> KEYPAD_PORT_Pin9
	COL3 -> KEYPAD_PORT_Pin10
	COL4 -> KEYPAD_PORT_Pin11
	
	ROW1 -> KEYPAD_PORT_Pin12
	ROW2 -> KEYPAD_PORT_Pin13
	ROW3 -> KEYPAD_PORT_Pin14
	ROW4 -> KEYPAD_PORT_Pin15
	
***************************************************/
//Configuracion del puerto que usa el teclado
//Cambiar todos los define si se quiere cambiar el puerto
//*************************
	#define KEYPAD_PORT PORTD
	#define KEYPAD_DDR DDRD
	#define KEYPAD_PIN PIND
	
	#define KEYPAD_PORT0 GPIOA->BSRR = (1<<8)		//PA8
	#define KEYPAD_PORT1 GPIOA->BSRR = (1<<9)		//PA9
	#define KEYPAD_PORT2 GPIOA->BSRR = (1<<10)	// ...
	#define KEYPAD_PORT3 GPIOA->BSRR = (1<<11)
	#define KEYPAD_PORT4 GPIOA->BSRR = (1<<12)
	#define KEYPAD_PORT5 GPIOA->BSRR = (1<<13)
	#define KEYPAD_PORT6 GPIOA->BSRR = (1<<14)
	#define KEYPAD_PORT7 GPIOA->BSRR = (1<<15)	//PA15
//*************************



void KEYPAD_Init();

uint8_t KEYPAD_Scan (uint8_t *pkey); //funcion para escanear con doble verificacion y memoria


#endif /* KEYPADSCANLIB_H_ */
 
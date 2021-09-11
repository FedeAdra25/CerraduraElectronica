#include <stm32f10x.h>

void delay_ms(uint16_t time);

void delay_ms(uint16_t time){
	volatile unsigned long l=0;
	for(uint16_t i=0;i<time;i++)
		for(l=0;l<9975;l++);
}

int main(){
	
	RCC->APB2ENR |= 0xFC; //Enable GPIO ports clocks
	GPIOC->CRH = 0x44344444; //PC13 as output
	while(1){
		GPIOC->ODR ^= (1<<13); //Toggle PC13
		delay_ms(10000);
	}
	
	return 0;
		
}


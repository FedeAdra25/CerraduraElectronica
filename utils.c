
#include "utils.h"

#define ONE_US_CONST 6

void delay_us(unsigned long amount){
	unsigned long i,l;
	for(i=0;i<amount;i++)
		for(l=0;l<ONE_US_CONST;l++);
	
}

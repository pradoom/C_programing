#include <LPC21xx.H>
#include"header.h"
#define sw ((IOPIN0>>14)&1)//switch connected to pin P0.14 checking is press or not
#define LED 7<<17
int main()
{
	VPBDIV=0;
	IODIR0=LED;
	
	while(1)
	{
			if(sw==0)//when switch pressed on LED
			{
				IOCLR0=LED;
			}
			else//else off LED
			{
				IOSET0=LED;
			}
		
	}
}

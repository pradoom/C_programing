#include <LPC21xx.H>
#include"header.h"
#define sw ((IOPIN0>>14)&1)
int main()
{
	int i;
	VPBDIV=0;
	IODIR0=7<<17;
	
	while(1)
	{
		if(sw==0)//when switech pressed printf binary patton on LED 17 18 19
		{
			for(i=0;i<8;i++)
			{
				IOCLR0=i<<17;
				dalley_ms(30);
				IOSET0=7<<17;
				dalley_ms(30);
			}
		}
	}
	
}

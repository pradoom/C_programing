#include <LPC21xx.H>
#include"header.h"
int main()
{
	int i;
	VPBDIV=1;
	IO0DIR=1<<17|1<<18|1<<19;
	
	while(1)
	{
	for(i=0;i<8;i++)
	{
		//Active high
		//IOSET0=i<<17;
		//dalley_ms(100);
		//IOCLR0=7<<17;
		
		//active low
		IOCLR0=i<<17;
		dalley_ms(100);
		IOSET0=7<<17;
		
	}
	
	}
}

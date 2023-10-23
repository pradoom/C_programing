#include <LPC21xx.H>
#include"header.h"
#define sw ((IOPIN0>>0)&1)//checking 0th bit condation 
int main()
{
	int c=0;
	VPBDIV=0;
	IODIR0=7<<17;
	
	while(1)
	{
		while(sw==0)
		{
			while(sw==0);
			c++;
			
			if(c>7)
			{
				c=0;
			}
			        IOSET0=7<<17;//active low
				IOCLR0=c<<17;//active low
			
				//IOCLR0=7<<17;//active High
				//IOSET0=c<<17;//active High
		}
		
	}
	
}

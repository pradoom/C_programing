	#include <LPC21xx.H>
	#include"header.h"
	#include<stdio.h>

	int main()
	{
		VPBDIV=1;
		IODIR0=0xFFFFFFFF;
		

		while(1)
		{
		IOSET0=0xAAAAAAAA;
		dalley_ms(1);
		IOCLR0=0xFFFFFFFF;
		dalley_ms(1);
		IOSET0=0x55555555;
		dalley_ms(1);
		IOCLR0=0xFFFFFFFF;
		}
		printf("Hello\n");
		
		
	}

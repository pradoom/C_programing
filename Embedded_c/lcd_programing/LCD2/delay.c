#include <LPC21xx.H>
#include"header.h"
void delay_ms(unsigned int ms)
{
	int a[]={15,60,30,0};
	T0TC=0;
	T0PC=0;
	T0PR=a[VPBDIV]*1000-1;
	T0TCR=1;
	while(T0TC<ms);
	T0TCR=0;
	
}

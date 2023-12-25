#include <LPC21xx.H>
#include "header.h"
#define LED1 (1<<17)
#define LED2 (1<<18)
#define LED3 (1<<19)

void TIMER0_handler(void)__irq
{
	IODIR0=0xFFFF;
	T0IR=1;//enable timer0 intrupt
	IOPIN0=0xFFFF;
	VICVectAddr=0;
}

void config_vic(void)
{
	VICIntSelect=0;//default all are irq intrupt
	
	VICVectCntl0=4|(1<<5);//select 4 for TIMER0 intrrupt and set bit 5  for enable entrupt
	
	VICVectAddr0=(int)TIMER0_handler;//assigning intrupt arrress
	
	VICIntEnable|=(1<<4);//enable TIMER0 intrupt
	
	T0PR=1000000;
	T0MR0=10;//it will compare 10 with TC value if same it will reset the TC then continue
	T0MCR=0x03;//Reset on MR0 ,Int. on MR0
	T0TCR=1;//strat timer
}

////////////////////////main//////////////////////////

int main()
{
	config_vic();
	
	
	while(1)
	{
		IOPIN0=~IOPIN0;
	}
	
}

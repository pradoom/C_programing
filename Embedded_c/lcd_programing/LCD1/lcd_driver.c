#include <LPC21xx.H>
#include"header.h"
#define RS (1<<8)
#define RW (1<<9)
#define EN (1<<10)

void led(unsigned char data)
{
		IOCLR0=0x7FF;
		IOSET0=data;
		IOSET0=RS;//write 1
		IOCLR0=RW;//for write 1 for read 0
		IOSET0=EN;//enable lcd
		dalley_ms(2);
		IOCLR0=EN;//desiable lcd
}


void led_comm(unsigned char com)
{
		IOCLR0=0x7FF;
		IOSET0=com;//command
		IOCLR0=RS;//command 0
		IOCLR0=RW;
		IOSET0=EN;
		dalley_ms(2);
		IOCLR0=EN;
}

void init()
{
	IODIR0|=0x7ff;//output pins define
	led_comm(0x38);//double line 8 bit enable
	led_comm(0x0E);//enable couser 
	led_comm(0x01);//clear and come back to orignal position
}

#include <LPC21xx.H>
#include"header.h"

int main()
{
	init();
	led('0');
	//led_comm(0x01);
}

#include <LPC21xx.H>
#define rs (1<<17)
#define rw (1<<18)
#define en (1<<19)

void lcd_data(unsigned char data)
{
	unsigned int temp;
		IOCLR1=0x00FE0000;//clearing pins
		temp=(data&0xF0)<<16;//to send to 20 to 23 pins
		IOSET1=temp;
		IOSET1=rs;//write give 1
		IOCLR1=rw;//read=1 write=0
		IOSET1=en;//enable 1
		delay_ms(2);
		IOCLR1=en;
		
		IOCLR1=0x00FE0000;//clearing pins
		temp=(data&0x0F)<<20;//to send to 20 to 23 pins
		IOSET1=temp;
		IOSET1=rs;//write give 1
		IOCLR1=rw;//read=1 write=0
		IOSET1=en;//enable 1
		delay_ms(2);
		IOCLR1=en;
}


void lcd_cmd(unsigned char cmd)
{
	unsigned int temp;
		IOCLR1=0x00FE0000;//clearing pins
		temp=(cmd&0xF0)<<16;//to send to 20 to 23 pins
		IOSET1=temp;
		IOCLR1=rs;//write give 1
		IOCLR1=rw;//read=1 write=0
		IOSET1=en;//enable 1
		delay_ms(2);
		IOCLR1=en;
		
		IOCLR1=0x00FE0000;//clearing pins
		temp=(cmd&0x0F)<<20;//to send to 20 to 23 pins
		IOSET1=temp;
		IOCLR1=rs;//write give 1
		//IOCLR1=rw;//read=1 write=0
		IOSET1=en;//enable 1
		delay_ms(2);
		IOCLR1=en;
}

void init(void)
{
	IODIR1|=0x00FE0000;//i/odirection
	PINSEL2=0;//set p1.16 to p1.31 as GPIO
	lcd_cmd(0x02);//enabling 4 bit mode
	lcd_cmd(0x28);//double line enable in 4 bit mode
	lcd_cmd(0x03);//single line enbale 4 bit mode
	lcd_cmd(0x0E);//enable cursor
	lcd_cmd(0x01);//clear screen
}
//string printing
void lcd_string(char *p)
{
	while(*p)
	{
		lcd_data(*p);
		p++;
	}
}



#include <LPC21xx.H>
#include"header.h"
#define SW ((IOPIN1>>25)&1)//condaction check
#define op 4
#if(op==1)
int main()
{
	init();
	lcd_data('A');
	
}
#elif(op==2)
int main()
{
	init();
	lcd_string("Hello Rao");

}
#elif(op==3)
int main()
{
	int i;
	init();
	for(i=0;i<26;i++)
	{
		lcd_cmd(0x80);
		lcd_data('A'+i);//print A to Z in first postion
		delay_ms(300);
	}

}
#elif(op==4)
int main()
{
	//Increment lcd count when switch is pressed
	int c=0;
	IODIR1=0<<25;//0 for making output
	int i;
	init();
	
	while(1)
	{
		if(SW==0)
		{
			c++;
			if(c>10)
			{c=0;}
			
			while(SW==0);
			lcd_data(c/10+48);
			lcd_data(c%10+48);

		}
		lcd_cmd(0x80);
	}
}
#endif










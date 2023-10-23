#include <LPC21xx.H>
//second delly
void dalley_sec(unsigned int sec)
{
	int a[]={15,60,60,30,15,15};
	
	T0TC=0;//timer overflow flag
	T0PC=0;//starting value
	T0PR=a[VPBDIV]*1000000-1;//ending count 15000000 clk/sec
	T0TCR=1;
	while(T0TC<sec);
	T0TCR=0;
}

//mili second delly
void dalley_ms(unsigned int ms)
{
	int a[]={15,60,60,30,15,15};
	
	T0TC=0;//timer overflow flag
	T0PC=0;//starting value
	T0PR=a[VPBDIV]*1000-1;//ending count 15000 clk/sec
	T0TCR=1;
	while(T0TC<ms);
	T0TCR=0;
}




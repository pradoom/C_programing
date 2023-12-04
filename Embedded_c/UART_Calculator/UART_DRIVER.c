#include <LPC21xx.H>

void uart_init(unsigned int b_rate)
{
	int a[]={15,60,30,15,15};
	unsigned int pclk=a[VPBDIV]*1000000;
	unsigned int result=0;
	
	result=pclk/(16*b_rate);
	
	PINSEL0|=0x05;     //p0.0 tx  p0.1 rx
	U0LCR=0x83;        // 1000 0011 --->  1000 means bordrate setting unlock  0011 means 8 bits transmit at a time
	U0DLL=result&0xFF; //
	U0DLM=(result>>8)&0xFF;
	U0LCR=0x03;
}
//transmit section
#define THRE ((U0LSR>>5)&1)
void uart_tx(unsigned char data)
{
			U0THR=data;
		while(THRE==0);
}


//reciving section
#define RDR (U0LSR&1)
unsigned char uart_rx(void)
{
	while(RDR==0);
	return U0RBR;
}

//transmit string
void uart_string(char *p)
{
	while(*p)
	{
		uart_tx(*p);
		
		p=p+1;
	}
}


//reciving string
void uart_rx_string(char*p,int size)
{
	int i;
	
	for(i=0;i<size;i++)
	{
		while(RDR==0);
		p[i]=U0RBR;
		uart_tx(p[i]);
		if(p[i]=='\r')
			break;
	}
	p[i]='\0';
	
}



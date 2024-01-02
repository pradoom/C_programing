#include <LPC21xx.H>


void UART_INTI(unsigned int boud_rate)
{
	unsigned int result=0;
	int arr[]={15,60,30,15,15};
	unsigned int pclk=arr[VPBDIV]*10000-1;
	result=pclk/16*boud_rate;
// Bourd rate setting open
	PINSEL0|=0x05;
	U0LCR=0x83;
	U0DLL=result&0xFF;
	U0DLM=result>>8&0xFF;
	U0LCR=0x03;
//Bourd rate setting close
}
//Transmert section
#define THRE ((U0LSR>>5)&1)

	void UART_TX(unsigned char data)
	{
		U0THR=data;
		while(THRE==0);
	}

#define RDR ((U0LSR>>0)&1)
	
	unsigned char UART_RX(void)
	{
		while(RDR==0);
		//UART_TX(U0RBR);
		return U0RBR;
	}
	
void UART_STRING(char*p)
{
	while(*p)
	{
		UART_TX(*p);
		p=p+1;
	}
}


void PRINT_BINEARY(int num)
{
	int x=num;
	int y;
	int s[4],i=0;
	while(x)
	{
		y=x%2;
		x=x/2;
		s[i++]=y+48;
	}
	for( ;i>=0;i--)
	{
		UART_TX(s[i]);
	}
}
void PRIME_OR_NOT(int num)
{
	int i;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
			break;
	}
	if(i==num)
	{
		UART_STRING("\r\n PRIME");
	}
	else
	{
		UART_STRING("\r\n NOT PRIME");
	}
}






void RECIVE_STRING(char *s,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		while(RDR==0);
		s[i]=U0RBR;
		UART_TX(s[i]);
		if(s[i]=='\r')
			break;
	}
	s[i]='\0';
}

int UART_STRING_TO_INTIGER(char *s,int size)
{
	UART_STRING("\r\n ENTER NUMBER:");
		int i,sum=0;
	for(i=0;i<size;i++)
	{
		while(RDR==0);
		s[i]=U0RBR;
		UART_TX(s[i]);
		if(s[i]=='\r')
			break;
	}
	s[i]='\0';
	//string to intiger
	for(i=0;i<size;i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			sum=sum*10+s[i]-48;
		}
	}
	return sum;
}


void UART_INTIGER_TO_STRING(int num)
{
	int num1=num;
	int c=1;
	int count=0;
	while(num1)
	{
		c=c*10;
		count++;
		num1=num1/10;
	}
	
	for(c=c/10;num>0&&count>0;num=num%c,count--,c=c/10)
	{
		UART_TX(num/c+48);
	}
}


void UART_FLOAT(float f)
{
	int a=f;//123
	UART_INTIGER_TO_STRING(a);
	float x=f-a;//0.34
	UART_TX('.');
	int k=x*10000;
	UART_INTIGER_TO_STRING(k);
}


#include <LPC21xx.H>
#include "header.h"
int atoi(char *s);
char opration(char *s);
int main()
{
	char s[50];
	uart_init(9600);
	uart_string("\r\n Enter Here:");
	uart_rx_string(s,10);
//--------------------------atoi-----------------------------------------//
	
	int i,sum1=0,sum2=0,result=0;
	char op;
	for(i=0;s[i];i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			sum1=sum1*10+s[i]-48;
		}

        if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
        {
            op=s[i];
            break;
        }
	}

  for(;s[i];i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			sum2=sum2*10+s[i]-48;
		}
	}
	

	
//-----------------------------end---------------------------------------//
	
//=============================SWITCH case=================================//
	
	switch(op)
	{
		case '+':result=sum1+sum2;break;
		case '-':result=sum1-sum2;break;
		case '*':result=sum1*sum2;break;
		case '/':result=sum1/sum2;break;
		
		if(result<0)
		{
			result=-(result);
		}
	}
	
	
//=========================================================================//
	
	while(uart_rx()!='\r');
	
uart_string("\r\n RESULT Here:");
	uart_tx((result/1000)%10+48);
	uart_tx((result/100)%10+48);
	uart_tx(((result/10)%10)+48);
	uart_tx((result%10)+48);
	result=0;
	
}

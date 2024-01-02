#include <LPC21xx.H>
#include "Header.h"

int main()
{
	char s;
//		int num;
//		char s[100];
		UART_INTI(9600);
//		num=UART_STRING_TO_INTIGER(s,10);
//		PRIME_OR_NOT(num);
	while(1)
	{
	s=UART_RX();
	UART_TX(s);
	}
}



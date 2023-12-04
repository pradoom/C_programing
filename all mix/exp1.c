#include<stdio.h>

int atoi(char *s)
{
	int i,sum1=0,sum2=0;
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

	
	printf("%d %d \n",sum1,sum2);
    printf("%c\n",op);
}
void main()
{
    char s[]="1234+1234";
    atoi(s);
}
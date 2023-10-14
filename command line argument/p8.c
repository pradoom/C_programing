#include<stdio.h>

int my_atoi(const char *);

void main(int argc,char**argv)
{

	int num1=my_atoi(argv[1]);
	
	int num2=my_atoi(argv[3]);

	switch(*argv[2])
	{
		case '+':printf("%d + %d = %d\n",num1,num2,num1+num2);
			 break;
		case '-':printf("%d - %d = %d\n",num1,num2,num1-num2);
			 break;
		case '*':printf("%d x %d = %d\n",num1,num2,num1*num2);
			 break;
		case '/':if(num2==0)
			{
				printf("ERROR: FLOATING POINT ERROR\n");
				break;
			}
			 else
			{
			 printf("%d / %d = %d\n",num1,num2,num1/num2);
			 break;
			}


		default :printf("Wromg Input\n");

	}

}

int my_atoi(const char *p)
{
	int i,num=0;

	for(i=0;p[i];i++)
	{
		if(p[i]>='0'&& p[i]<='9')
		{
			num=num*10+p[i]-48;
		}

	}

	return num;
}

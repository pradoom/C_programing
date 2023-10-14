#include<stdio.h>
double my_atof(const char *nptr);
void main(int argc,char**argv)
{
	float a=my_atof(argv[1]);

	printf(" Value is %f\n",a);
}

double my_atof(const char*p)
{
	int i,num1=0;
	for(i=0;p[i];i++)
	{
		if(p[i]>='0'&& p[i]<='9')
		{
			num1=num1*10+p[i]-48;
		}
		else if(p[i]=='.')
			break;
		else
			return num1;
	}
	//	printf("num1 %d\n",num1);

	i=i+1;

	double num2;

	for(i;p[i];i++)
	{
		if(p[i]>='0'&&p[i]<='9')
		{
			num2=num2*10+p[i]-48;
		}
	}
	//printf("num2 %f\n",num2);

	int j,pos=1,c=0;
	for(i=num2;i;i=i/10)
	{
		c++;
	}

	for(j=0;j<c;j++)
	{
		pos=pos*10;
	}
	//printf("Pos %d\n",pos);

	double sum=num1+num2/pos;
	return sum;


}

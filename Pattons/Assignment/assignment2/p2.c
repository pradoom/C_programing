#include<stdio.h>
void main()
{
    int i,j;
    int a=0,b=1,sum=0;
    for(i=1;sum<31;i++)
    {
        printf("%d\n",sum);
        sum=a+b;
        b=a;
        a=sum;

    }
}
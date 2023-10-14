#include<stdio.h>
void main()
{
    int i,num=12345,sum=0,sum1=0,r;
    for(i=num;i;i=i/10)
        sum=sum*10+i%10;
    int c=0;

    for(i=sum;i;i=i/10)
    {
        c++;
        r=i%10;
        if(c<=4)
        {
            sum1=sum1+r;
        }


    }
    printf("%d\n",sum1);

}
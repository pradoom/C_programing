#include<stdio.h>
void main()
{
    int num=12345,i,r,sum,pow;
    sum=0,pow=1;
    for(i=num;i;i=i/10)
    {
        r=i%10;
        if(r==4)
        {
            continue;
        }
        else
        {
            sum=sum+r*pow;
            pow=pow*10;
        }
    }   
    printf("%d\n",sum);
}
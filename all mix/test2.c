#include<stdio.h>
void main()
{
    int num = 1234,i,r,sum=0,pos=1;

    for(i=num;i;i=i/10)
    {
        r=i%10;
        if(r%3==0)
        {
            r=1;
            sum=sum+r*pos;
            pos=pos*10;
        }
        else
        {
            sum=sum+r*pos;
            pos=pos*10;  
        }
    }

    printf("%d\n",sum);

}
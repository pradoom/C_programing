#include<stdio.h>
//oct to dec
int power(int x,int n)
{
    int i,pos=1;

    for(i=1;i<=n;i++)
    {
        pos=pos*x;
    }
    return pos;
}
int main()
{
    int num=023;
    int i=0,sum=0;
    while(i!=31)
    {
        if(num>>i&1)
        {
            sum=sum+power(2,i);
        }
        i++;
    }
    printf("%d\n",sum);
}
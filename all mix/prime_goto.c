#include<stdio.h>
void main()
{
    int num=11;
    int i=2,f=0;
    L1:
    if(num%i==0)
    {
        f=1;
    }
    i++;
    if(i==num)
    goto L1;

    if(f)
    {
        printf("Not prime\n");
    }
    else
    {
        printf("prime\n");
    }
}
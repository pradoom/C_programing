#include<stdio.h>
void main()
{

    int a=1234;


    int i,j,k;
    for(i=31;i>=0;i--)
    {
        printf("%d",a>>i&1);
        if(i%4==0)
        printf(" ");
    }
    printf("\n");


    for(k=0,j=k+1;k<=31;k++)
    {
        int m,n;
        m=a>>k&1;
        n=a>>j&1;
        if(m!=n)
        {
            a=a^1&k;
            a=a^1&j;
        }
    }
    printf("\n");







        for(i=31;i>=0;i--)
    {
        printf("%d",a>>i&1);
        if(i%4==0)
        printf(" ");
    }
    printf("\n");
}
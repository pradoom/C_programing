#include<stdio.h>
int main()
{
    int num=10;
    int i;
    for(i=4;i<31;i++)
    {
        num=num|1<<i;
    }
    num=num|1<<31;
    for(i=31;i>=0;i--)
    {
        printf("%d",num>>i&1);
        if(i%4==0)
        {
            printf(" ");
        }
    }
    printf("\n");
}
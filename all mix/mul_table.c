#include<stdio.h>
void main()
{
    int i,j;
    for(i=2;i<=9;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%d x %d = %d\n",i,j,i*j);
        }
        printf("\n");
    }
}
#include<stdio.h>
void main()
{
    int i,j,k,t;

    for(i=0;i<6;i++)
    {
        for(j=0,t=3;j<6-i;j++)
        {
            if(j>3)
            {
                k=k+t;
                printf("%d",k);
                t++;
            }
            else
            {
                k=1+j;
                printf("%d",k);
            }
        }
        printf("\n");
    }
}
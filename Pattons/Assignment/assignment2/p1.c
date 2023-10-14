#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=51;i++)
    {
        int sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            sum=sum+j;
        }
        if(sum==i)
        printf("%d\n",sum);
    }
}
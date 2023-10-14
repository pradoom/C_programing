
#include <stdio.h>

int main()
{
    int i,j,c=0,num=12345,r;
    while(num)
    {
        r=num%10;
        for(j=2;j<r;j++)
        {
            if(r%j==0)
            break;
        }
        if(j==r)
        {
            printf("%d\n",j);
        }
        num=num/10;

    }
}


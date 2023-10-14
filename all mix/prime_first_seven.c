
#include <stdio.h>

int main()
{
    int i,j,c=0;
    for(i=21;i>=0;i++)
    {
        
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
        if(j==i)
        {
            c++;
            if(c!=7)
                printf("%d\n",j);
                
            else
            break;
        }


    }
}


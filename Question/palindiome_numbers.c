#include<stdio.h>
void main()
{
    int i,j,sum,z,k,c,p,count,a;
    for(i=10;i<200;i++)
    {
        for(j=i,sum=0,z=0;j;j=j/10)
        {
            int r=j%10;
            sum=sum*10+r;
        }
        if(sum==i)
        {
            for(k=sum,c=0;k;k=k/10)
            {
                c++;
            }

            z=sum%10;
            for(p=0,count=0,a;p<c;p++)
            {
                    a=sum%10;
                    if(a==z)
                    {
                        count++;
                    }
                    sum=sum/10;
            }
            if(c==count)
            {
                printf("%d\n",i);
            }

        }
    }
}
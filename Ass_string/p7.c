#include<stdio.h>
void main()
{
    char s[20]="abc cccccd bda";
    int count[20],c;
    int i,j,k,p;

    for(p=0;s[p];p++)
    {
    count[p]=-1;
    }

    for(i=0;s[i];i++)
    {
        c=1;
        for(j=i+1;s[j];j++)
        {
            if(s[i]==s[j])
            {
                count[j]=0;
                c++;
            }
        }
        if(count[i]!=0)
        {
        count[i]=c;
        //printf("%d\n",count[i]);
        }
    }
    int z;
    for(z=0;s[z];z++)
    {
        if(count[z]!=0)
        {
            printf(" %c :%d\n",s[z],count[z]);
        }
    }


}
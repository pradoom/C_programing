#include<stdio.h>
void main ()
{
    char ch[]="hello";
    char ph[]="world";
    char bp[6];
    
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(ch[i]==ph[j])
            {
                printf("%s %s",ch[i],ph[j]);
                //continue;
            }
            else
            {
                bp[i]=ch[i];
            }

        }
    }
   // printf("%s",bp);
}
#include<stdio.h>
void main()
{
    char s[20]="abc pqr xyz 12";
    int i,c;
    for(i=0,c=0;s[i];i++)
    {
        if(s[i]==' ')
        {
            c++;
        }
    }
    printf("%d",c+1);


}
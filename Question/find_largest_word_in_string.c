#include<stdio.h>
void main()
{
    char s[50];
    printf("Enter the string..\n");
    scanf("%[^/n]",s);

    int i,j,c=0,c1=0;

    for(i=0;s[i];i++)
    {
        c++;
        if(s[i]==' ')
        {
            if(c>c1)
            c1=c;

            c=0;
        }
    }
}
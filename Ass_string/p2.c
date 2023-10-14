#include<stdio.h>
void main()
{
    char s[20]="abc pqr aeiou";
    int i,c;
    for(i=0,c=0;s[i];i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            c++;
        }
    }

    printf("%d \n",c);
}
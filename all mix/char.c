#include<stdio.h>
#include<stdlib.h>
void main()
{
    int num=1234;
int a=0;
    char *s=malloc(sizeof(char)*5);
    int i,j;
    for(i=0,j=num;j;i++,j=j/10)
    {
        s[i]=j%10+48;//int to ascii
    }
    s[i]='\0';

    for(i=0;s[i];i++)
    {
        printf("%c ",s[i]);
    }
    printf("\n");
    
    a=a*10+s[3]-48;
    printf("%d",a);
}
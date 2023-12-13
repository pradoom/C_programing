#include<stdio.h>
#include<string.h>
char *strrchr1(char *s,char c);
void main()
{
    char s[]="Hello rao find the charactor in this string from last thank you";
    int l=strlen(s);
    char *ch=strrchr1(s+l-1,'s');

    printf("%s",ch);
 
}

char *strrchr1(char *s,char c)
{
    if(*s!=c)
    strrchr1(s-1,c);
    else
    return s;
}
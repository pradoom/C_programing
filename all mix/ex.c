#include<stdio.h>
void str_cat(char**);
void main()
{
    char *s="hello";

    str_cat(&s[0]);

    printf("%s ",s);
}

void str_cat(char**s)
{

    *s="a";
}
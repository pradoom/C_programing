#include<stdio.h>
void str_cat(char*,char*);
void main()
{
    char s[]="hello";
    char d[]="rao";
    str_cat(s,d);

    printf("%s ",s);
}

void str_cat(char*s,char* d)
{
    // while(*d!='\0')
    // {
    //     d++;
    // }
    // int i;
    // for(i=0;s[i]!='\0';i++)
    // {
    //     *d=*s;
    //     d++;
    //     s++;
    // }
    // *d='\0';
    *s='a';
}
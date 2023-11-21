#include<stdio.h>
#include<string.h>//not working see in ubantu
void main()
{
    FILE *f=fopen("hello","r+");

    char ch;
    while((ch=fgetc(f))!=-1)
    {
        if((ch>='a')&&(ch<='z'))
        {
            fseek(f,-1,SEEK_CUR);
            ch=ch-32;
            fputc(ch,f);
        }
    }

}
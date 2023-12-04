#include<stdio.h>
void main()
{
    FILE *f=fopen("pradoom.txt","r+");


    char ch;

    while((ch=fgetc(f)!=-1))
    {
        if(ch=='p')
        {
           // fseek(f,-1,SEEK_CUR);
            fputc('x',f);
        }
    }

    fclose(f);

}
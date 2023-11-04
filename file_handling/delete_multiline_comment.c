#include<stdio.h>
#include<string.h>
//delete line having multi line comments
void main(int argc,char**argv)
{
    FILE *f=fopen(argv[1],"r+");
    FILE *f1=fopen("test.txt","w");
    char s[100];

int c=0;
char ch;
    while((ch=fgetc(f)!=-1))
    {
        if(ch='/')
        c=1;
        if(c)
        {
            
        }
       
    }
    
}
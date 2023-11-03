#include<stdio.h>
#include<string.h>
//delete line having single line comment
void main(int argc,char**argv)
{
    FILE *f=fopen(argv[1],"r+");
    FILE *f1=fopen("test.txt","w");
    char s[100];



    while(fgets(s,100,f))
    {
        if(strstr(s,"/")==0)
        {
             fprintf(f1,"%s",s);
        }
       
    }
    
}
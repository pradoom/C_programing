#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(int argc,char**argv)
{
        if(argc!=3)
        {
                printf("Usage message..\n");
                return;
        }

        FILE *f=fopen(argv[1],"r");
        FILE *temp=fopen("t1.txt","w");
        char s[100];
        int c=1;
        char *word=argv[2];
        while((fgets(s,100,f)))
        {
                if((strstr(s,word))==NULL)//if word match if(0)
                {
                        fprintf(temp,"%s",s);
                }
        }
}
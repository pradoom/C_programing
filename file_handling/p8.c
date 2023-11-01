#include<stdio.h>
#include<stdlib.h>
//delete 1st line and last line in file
void main(int argc,char **argv)
{
        if(argc!=2)
        {
                printf("Usage message..\n");
                return;
        }

        FILE *f=fopen(argv[1],"r+");
        FILE *d=fopen("tem_file","w");

        char s[100];

        int count_line=1,count=1;
        while(fgets(s,100,f))
        {
                count_line++;
        }
        printf("Count line are %d\n",count_line);
                rewind(f);
        while(fgets(s,100,f))
        {          //first line && last line condication
                if((count!=1)&&(count!=count_line-1))
                {
                        fputs(s,d);
                }
                count++;
        }


}
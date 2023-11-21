#include<stdio.h>
#include<string.h>
void main()
{
    FILE *f=fopen("data.txt","r");

    char ch;
    int c=1;
    while((ch=fgetc(f))!=-1)
    {
        if(ch=='\n')
        {
            c++;
        }
    }
    printf("line count :%d\n",c);
    rewind(f);
    char s[100];
    int w=0;
    while(fscanf(f,"%s",s)!=-1)
    {
        w++;
    }
    printf("word count :%d\n",w);

    rewind(f);
    c=0;
    while((ch=fgetc(f))!=-1)
    {
        if((ch>='0')&&(ch<='9'))
        {
            c++;
        }
    }
    printf("digit count :%d\n",c);

    fclose(f);
}
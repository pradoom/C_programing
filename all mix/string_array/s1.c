#include<stdio.h>
void main()
{
    char s[30]="Hello";

    char *p=s;
    p="rao";
    printf("%s \n",s);//--------------> Hello 
    printf("%s \n",s+1);//--------------> ello
    printf("%s \n",&s+1);//--------------> dP@
    printf("%s \n",&s);//--------------> Hello
    printf("%s\n",s[0]+1);//no output
    printf("%s\n",&s[0]);//--------------> Hello
    printf("%s\n",s[1]+1);//no output

    //pointer
    printf("%s \n",p);

}
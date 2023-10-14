#include<stdio.h>
void main()
{
    // char s='r';
    // printf("%c",s);//r

    //char s[1]="hello";//valid
    //printf("%s",s);//worning:initializer-string for array of chars is too 
//long op=h

    //s="rao";//error 
    //s='h';//error
    char s[5][10]={{"hello"},{"rao"}};
    printf("%s",s);


}
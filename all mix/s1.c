#include<stdio.h>
void fun(char*);
void main()
{

  //  char s[]="hello";
  //  s[0]='g';//this is valid



    char *p="hello";
    fun(p);
    printf("%s",p);
}
void fun(char *p)
{
    p="rao";
}
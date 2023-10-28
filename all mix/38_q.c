#include<stdio.h>
void main()
{
    double a=2.5;
    char *ptr;
    ptr=(char*)&a;
    printf("%d ",*ptr);
    printf("%d ",*ptr);
}
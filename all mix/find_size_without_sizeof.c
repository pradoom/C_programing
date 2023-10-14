#include<stdio.h>
void main()
{
    int value;

    char*start=(char*)&value;
    char *end=(char *)(&value + 1);
    int diff=end-start;

    printf(" sizeof %d\n",diff);
}
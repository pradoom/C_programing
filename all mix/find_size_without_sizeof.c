#include<stdio.h>
void main()
{
    int value;

    char*start=&value;
    char *end=(&value + 1);
    int diff=end-start;

    printf(" sizeof %d\n",diff);
    
}
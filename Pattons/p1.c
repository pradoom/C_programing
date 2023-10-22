#include<stdio.h>
void main()
{
    int a[]={1,2,3,4,5};
    int *p=a;
    p++;
    p++;
    p++;
    printf("%d\n",p-a);
}
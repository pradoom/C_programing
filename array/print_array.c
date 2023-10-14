#include<stdio.h>

//printing array
void print(int *p,int ele)
{
    int i;
    for(i=0;i<ele;i++)
    {
        printf("%d  ",p[i]);
    }
    printf("\n");
}

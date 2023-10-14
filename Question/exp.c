#include<stdio.h>
void main()
{
    int i;

    for(i=0;i<3;i++)
    {
        if(i==1)
        continue;//1
        // return;//2
        // break;
        printf("hai..\n");
    }
    printf("bye..\n");
}
#include<stdio.h>
void main()
{
    unsigned short int num=426,r1,r2,r3,r4,r5;

    // r1=num>>3;

    // r2=r1<<2;//

    // r3=num<<30;

    // r4=r3>>30;

    // r5=r2|r4;


    // r1=num>>6;

    // r2=r1<<5;//

    // r3=num<<27;

    // r4=r3>>27;//

    // r5=r4|r2;


    r1=num>>8;

    r2=r1<<7;

    r3=num<<9;

    r4=r3>>9;

    r5=r2|r4;




    printf("%d\n",r5);
    int i;
    for(i=16;i>=0;i--)
    {
        printf("%d",r5>>i&1);
        if(i%4==0)
        printf(" ");
    }

}
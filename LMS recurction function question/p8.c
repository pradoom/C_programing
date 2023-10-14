//Write a recursive function to print the palindiome numbers in a given nunmbers.
#include<stdio.h>
#define pf printf
#define sf scanf
int palindiome(int);
void main()
{
    int a;
    for(int i=1;i<10;i++)
    {
        a= palindiome(i);
        pf("%d\n",a);
    }
   
}

int palindiome(int num)
{
    static int sum=0;
    sum=sum*10+num%10;
    num=num/10;
    if(num)
    palindiome(num);

    return sum;
}

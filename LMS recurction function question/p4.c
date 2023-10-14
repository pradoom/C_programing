// Write a recursive function to revese the given number.
#include<stdio.h>
int reverse_num(int);
void main()
{
    int num=1234;
   int a=reverse_num(num);
   printf("%d\n",a);
}

int reverse_num(int num)
{
    static int sum;
    int r=num%10;
    sum=sum*10+r;
    num=num/10;

    if(num)
    reverse_num(num);

    return sum;
}
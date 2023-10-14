//Write a recursive function to find the sum of digits of a given number.
#include<stdio.h>
int sum_of_digits(int);
void main()
{
    int num=12394;
    int a=sum_of_digits(num);
    printf("%d\n",a);
}

int sum_of_digits(int num)
{
    static int i=0,sum=0;
    int r=num%10;
    sum=sum+r;
    num=num/10;

    if(num)
    sum_of_digits(num);

    return sum;
}
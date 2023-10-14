#include<stdio.h>
int rev_fun_sum(int num);
void main()
{
    int num=12345;
    int a=rev_fun_sum(num);
    printf("%d",a);
}
int rev_fun_sum(int num)
{
    static int sum;
    int r=num%10;
    sum=sum*10+r;
    num=num/10;
    if(num!=0)
    rev_fun_sum(num);

    return sum;
}
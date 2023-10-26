#include<stdio.h>
int rev_fun_sum(int num);//first 3 digite sum
void main()
{
    int num=12345;
    int a=rev_fun_sum(num);
    printf("%d",a);
}
int rev_fun_sum(int num)
{
    static int c=0;
    static int sum;
    int r=num%10;
    c=c+1;
    sum=sum+r;
    num=num/10;
    if(c<3)
    rev_fun_sum(num);

    return sum;
}
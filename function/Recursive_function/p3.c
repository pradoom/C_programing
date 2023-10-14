#include<stdio.h>
int rev_fun_product(int num);
void main()
{
    int num=339687;
    int a=rev_fun_product(num);
    printf("%d",a);
}
int rev_fun_product(int num)
{
    static int pro=1;
    int r=num%10;
    if(r%3==0)
    {
        pro=pro*r;
    }
    num=num/10;
    if(num!=0)
    rev_fun_product(num);

    return pro;
}
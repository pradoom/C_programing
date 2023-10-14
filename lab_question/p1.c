//write a c program to delete 1st and last digit using recursive function
#include<stdio.h>//not working 
int digit_rev(int num)
{   
    static int sum=0;
    int r=num%10;
    sum=sum*10+r;
    num=num/10;
    if(num)
    digit_rev(num);
    else
    return sum;
}

int my_rec_del_fun(int num)
{
    int r=num/10;
    int a=digit_rev(r);
    int c=a/10;
    int b=digit_rev(c);
    return b;
}
void main()
{
    int num=12345;
    int a=my_rec_del_fun(num);
    printf("%d\n",a);
}


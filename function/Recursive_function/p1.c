#include<stdio.h>
int rec_fun_sum(int num);
//sum of even digit of given number n=2345 o/p=6
void main()
{
    int n=2345;
    
    int a=rec_fun_sum(n);

    printf("%d\n",a);

}

int rec_fun_sum(int num)
{
    int r;
    static int sum=0;
    r=num%10;
    if(r%2!=0)
    {
        sum=sum+r;
    }
    num=num/10;
    if(num!=0)
    rec_fun_sum(num);

    return sum;
}

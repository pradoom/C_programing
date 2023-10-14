#include<stdio.h>
#define pf printf
#define sf scanf
int rec_fun_rev_bit(int);
void binary_print(int);
void main()
{
    int num=31;
   int a= rec_fun_rev_bit(num);

    binary_print(a);

}
int rec_fun_rev_bit(int num)
{
    static int i=0,j=31;
    int m,n;
    m=num>>i&1;
    n=num>>j&1;
    if(m!=n)
    {
        num=num^1<<j;
        num=num^1<<i;
    }
    i=i+1;
    j=j-1;
    if(i<j)//here if condation is fail so it not retruning anytihing 15<14
    return rec_fun_rev_bit(num);
    else
    return num;

    

}

void binary_print(int num)
{
    static int i=31;
    pf("%d",num>>i&1);
    i=i-1;

    if(i>=0)
    binary_print(num);
}
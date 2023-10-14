#include<stdio.h>
int rec_fun(int num);
//count digite less the 6
void main()
{
    int n=234568;
    
    int a=rec_fun(n);

    printf("%d\n",a);

}

int rec_fun(int num)
{
    int r;
    static int sum=0;
    r=num%10;
    if(r<6)
    {
        sum=sum+1;
    }
    num=num/10;
    if(num!=0)
    rec_fun(num);

    return sum;
}

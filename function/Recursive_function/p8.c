#include<stdio.h>
#define pf printf
int rec_fun_prime(int);
void main()
{
    int num;
    printf("Enter number..\n");
    scanf("%d",&num);
    int a=rec_fun_prime(num);

    if(a)
    pf("Prime..\n");
    else
    pf("Not Prime..\n");

}
int rec_fun_prime(int num)
{
    static int i=2,f=1;
    if(num%i==0)
    {
        f=0;
    }
    i=i+1;
    if(i<num&&f!=0)
    rec_fun_prime(num);

    return f;
}
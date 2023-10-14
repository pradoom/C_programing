//Write a recursive function to find the factorial of a given number..
#include<stdio.h>
int fact_find(int);
void main()
{
    int num;
    printf("Enter number..\n");
    scanf("%d",&num);
    int a=fact_find(num);
    printf(" Fact of num %d is %d",num,a);

}

int fact_find(int num)
{
    static int i=1,f=1;
    f=f*i;
    i++;
    if(i<=num)
    fact_find(num);
    else
    return f;
}
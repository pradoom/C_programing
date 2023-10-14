#include<stdio.h>
void main()
{
    int num,n;
    printf("Enter number...\n");
    scanf("%d",&num);
    n=num;
    n=n>>3;
    n= n<<3;

    // if(n==num)
    // {
    // printf(" number is %d",num);
    // }
    // else
    // {
    // printf("Not divisible of 8");
    // }

    n==num?printf(" number is %d",num):printf("Not divisible of 8");
}
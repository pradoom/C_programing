#include<stdio.h>

int Factorial(int num)
{
   if(num<=0)
    return 1;
   else
   return num*Factorial(num-1);
}
int check_StrongNumber(int num)
{
    int fact;
    static int sum=0;
     if(num>0)
     {
        check_StrongNumber(num/10);
        fact=1;
        int rem=num%10;
        fact=Factorial(rem);
        sum+=fact;
     }
     printf("%d\n",sum);
}

int range(int f,int l)
{  
    check_StrongNumber();
}
int main()
{
    int num;
    // printf("Enter a number:");
    // scanf("%d",&num);
    range(1,200);
//    if(check_StrongNumber(num)==num)
//     printf("It is a Strong Number.");
//    else
//     printf("It is not a strong Number.");
}
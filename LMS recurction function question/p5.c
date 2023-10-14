/*

Write a recursive function to displays all the proper divisors of a given mumber
exept that and retums their sumn.
Ex: 1,3,59,15 & 45 are the proper divisors of 45.
Sum = 1+3+5+9+15
33

*/

#include<stdio.h>
int proper_div(int );
void main()
{
    int num=45;
   int a= proper_div(num);
    printf(" sum is : %d\n",a);
}
int proper_div(int num)
{
    static int i=1,sum=0;
    if(num%i==0)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    i=i+1;
    if(i<num)
    proper_div(num);

    return sum;
}
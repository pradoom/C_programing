//Write a recursive function to print first 100 prime numbers.
#include<stdio.h>
void rec_prime(void);
int prime(int,int);
#define pf printf
void main()
{
   rec_prime();
}
void rec_prime()
{
    static int c=0,num=2;
     int s=prime(2,num);
    if(s)
    {
        pf("%d\n",num);
        c++;
    }
    
    num++;
    if(c<100)
    rec_prime();

}


int prime(int j,int num)
{
    if(j==num){
        return num;
    }
    if(num%j==0){
        return 0;
    }
    else {
        j++;
    }
    return prime(j,num);
}
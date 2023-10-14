//write a c program to delete 1st and last digit using recursive function
#include<stdio.h>
int my_rec_del_fun(int num)
{
    static int p,q,r,s,i;
    if(num)
    {
        p=p*10+num%10;
        my_rec_del_fun(num/10);
    }
    else if(i==0)
    {
        q=p/10;
        i++;
    }
    if(q)
    {
        r=r*10+q%10;
        q=q/10;
        my_rec_del_fun(q);
    }
    else
    {
        return s=r/10;
    }
}


void main()
{
    int num=1287854;
    int a=my_rec_del_fun(num);
    printf("%d\n",a);
}
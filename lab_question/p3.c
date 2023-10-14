#include<stdio.h>
int digite_count(int);
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

    int num=12345;
    int num1=num;
    int i,count,pos;

    pos=digite_count(num);
    int a=num1%10;//a=5
    int b=num1/pos;//b=1
    int z=my_rec_del_fun(num);//234
    int c=a*pos+z*10+b;//50000+2340+1=52341
    printf("%d\n",pos);
}

int digite_count(int num)
{
    int i,c,j;
    for(i=num,c=0;i;i=i/10)
    {
        c++;
    }
    int pos;
    for(j=0,pos=1;j<c-1;j++)
    {
        pos=pos*10;
    }
    return pos;
}
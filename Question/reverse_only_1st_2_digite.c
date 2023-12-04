#include<stdio.h>
int power(int a);
void main()
{
    int num=12,i,sum=0,c=0;

    for(i=num;i;i=i/10)
    c++;
    int pos=power(c-2);

   int r=num%pos;//34

    for(i=num;i;i=i/10)
    sum=sum*10+i%10;

    int k=sum%100;//21

    int first=k%10;//1
    k=k/10;
    int second=k%100;//2

    int f=power(c-1);
    int p=second*f;
    
    int s=power(c-2);
    int q=first*s;

    int sum1=p+q+r;
    
    printf("%d\n",sum1);
    
}
int power(int a)
{
    int i;
    int pos=1;
    for(i=0;i<a;i++)
    {
        pos=pos*10;
    }
    return pos;
}


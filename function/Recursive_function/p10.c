#include<stdio.h>
#define pf printf
#define sf scanf
int rec_fun_sum_arr(int *,int);
void main()
{
    int n,i;
    pf("Enter array size..\n");
    sf("%d",&n);
    int a[n];
    pf("Enter array elements...\n");
    for(i=0;i<n;i++)
    {
        sf("%d",&a[i]);
    }
    int sum=rec_fun_sum_arr(a,n);

    pf("sum :%d\n",sum);

}

int rec_fun_sum_arr(int *p,int n)
{
    static int i=0,sum=0;
    
    sum=sum+p[i];
    i=i+1;

    if(i!=n/2)
    rec_fun_sum_arr(p,n);

    return sum;

}
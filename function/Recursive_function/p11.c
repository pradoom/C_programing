#include<stdio.h>
#define pf printf
#define sf scanf
void rec_fun_rev_arr(int*,int*);
void main()
{
    int n,i;
    pf("Enter array size..\n");
    sf("%d",&n);
    int a[n];
    pf("Enter array elements..\n");
    for(i=0;i<n;i++)
    {
        sf("%d",&a[i]);
    }

    rec_fun_rev_arr(a,&a[n-1]);


    // int j,k;
    // for(j=0;j<n/2;j++)
    // {
    //     int temp = a[j];
    //     a[j]=a[n-j-1];
    //     a[n-j-1]=temp;
    // }


    for(i=0;i<n;i++)
    {
        pf("%d ",a[i]);
    }
}

void rec_fun_rev_arr(int*p,int* n)
{
    if(p<n)
    {
    int temp=*p;
    *p=*n;
    *n=temp;
    p=p+1;
    n=n-1;
    rec_fun_rev_arr(p,n);
    }
   
}
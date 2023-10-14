#include<stdio.h>
//sum of digits in array
void sum_fun(int *a,int *b,int n)
{
    int i,k=0;
for(i=0;i<n;i++)
{
    int c=0,r,sum=0;
    int value=a[i];
    while(value)
    {
        r=value%10;
        sum=sum+r;
        value=value/10;
        
    }
    b[k++]=sum;
}

}



void del_fun(int *a,int n)
{
    int i,r;
        for(i=0;i<n;i++)
    {
        int sum=0;
        int value=a[i];
        while(value)
        {
            r=value%10;
            sum=sum*10+r;
            value=value/10;
        }
        int delete =sum/10;
        int k,sum1=0;
        while(delete)
        {
            k=delete%10;
            sum1=sum1*10+k;
            delete=delete/10;
        }
        a[i]=sum1;
    }
}


int arm_strong(int *a,int n)
{
    int i,j,k,count;
    for(i=0,count=0;i<n;i++)
    {
        int value=a[i];
        int c;
        for(j=value;j;j=j/10)
        {
        c++;
        }
        int r=0,sum=0;
        for(j=value;j;j=j/10)
        {
            r=j%10;
            int p=1;
            for(k=0;k<c;k++)
            {
                p=p*r;
            }
            sum=sum+p;
        }

        if(sum==a[i])
        count++;
    }
}

int strong_fun(int *a,int n)
{
    int i,j,c;
    for(i=0,c=0;i<n;i++)
    {
        int value=a[i],fact,k,sum=0;
        
        for(j=value;j;j=j/10)
        {
            int r=j%10;
            for(k=1,fact=1;k<=r;k++)
            {
                fact*=k;
            }
            sum=sum+fact;

        }
            if(sum==a[i])
            c++;
    }

}


void roteate_fun(int*a,int n,int r)
{
    int i,j;

    for(i=0;i<r;i++)
    {
        int temp=a[n-1];//last element
        for(j=n;j>0;j--)
        {
            a[j]=a[j-1];
        }
        a[0]=temp;

    }
}
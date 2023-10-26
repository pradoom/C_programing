#include<stdio.h>
int bubble_int(int a[],int n)
{
    int i,j;
for(i=0;i<n;i++)
{
    for(j=0;j<n-i;j++)
    {
        if(a[j]>a[j+1])
        {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
return a[n];
}

int select_int(int a[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
return a[n];
}
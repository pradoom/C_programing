#include<stdio.h>
void main()
{
    int a[10]={0,1,1,0,1,0,1,1,0,1};
    //output//{0 0 0 0 1 1 1 1 1 1}
    int ele=sizeof(a)/sizeof(a[0]);
    int s=0;
    int e=ele-1;
    while(s<e)
    {
        if(a[s]==0)
        {
            s++;
        }
        else if(a[e]==1)
        {
            e--;
        }
        else if(a[s]!=a[e])
        {
            int t=a[s];
            a[s]=a[e];
            a[e]=t;
            s++;
            e--;
        }
    }

    int i;
    for(i=0;i<ele-1;i++)
    {
        printf("%d ",a[i]);
    }
}
#include<stdio.h>
void main()
{
    int a[]={0,0,0,8,7,0,3,0,5,0,3};
    int ele=sizeof(a)/sizeof(a[0]);
    int i,j;
for(j=0;j<ele-1;j++)
{
    for(i=0;i<ele-1;i++)
    {
        if(a[i]==0)
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
}


for(i=0;i<ele;i++)
{
    printf("%d ",a[i]);
}
}
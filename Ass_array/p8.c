#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of array...\n");
    scanf("%d",&n);

    int a[n],i,j;
    printf("Enter array element..\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }


    for(i=0;i<n;i++)
    {
        int sum=0;
        for(j=1;j<a[i];j++)
        {
        if(a[i]%j==0)
        {
            sum=sum+j;
        }
        }
        if(sum==a[i])
        {
        printf(" Perfect number :%d\n",a[i]);
        }
    }
}
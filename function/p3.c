#include<stdio.h>
void del_fun(int *,int);
void main()
{
    int n;
    printf("Enter the number..\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element...\n");
    int i,j;
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }

    
    del_fun(a,n);


    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
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
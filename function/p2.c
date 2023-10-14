#include<stdio.h>
void sum_fun(int *a,int *b,int n);
void main()
{
    int n;
    printf("Enter array size..\n");
    scanf("%d",&n);
    int i,j;
    int a[n];
    int b[n];
    printf("Enter elements..\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
///////////////////////logic///////////////////////
sum_fun(a,b,n);
///////////////////////logic///////////////////////
printf("size are...\n");
for(j=0;j<n;j++)
{
    printf("%d ",b[j]);
}
printf("\n");
    
}

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
        sum=sum*10+r;
        value=value/10;
        
    }
    b[k++]=sum;
}

}
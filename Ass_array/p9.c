#include<stdio.h>
void main()
{
    int n;
    printf("Enter array size..\n");
    scanf("%d",&n);

    int a[n],i,j,p,k;
    printf("Enter elements..\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

int c=0;
////////////////////////////////////////////////////////////////////////////////////////
for(i=0;i<n;i++)
{
    int value=a[i],r=0,f,sum=0;
    for(j=value;j;j=j/10)
    {
        r=j%10;
        for(k=1,f=1;k<=r;k++)
        {
            f=f*k;
        }
        sum=sum+f;
    }
    if(sum==a[i])
    {
        c++;
        printf("Strong number: %d\n",a[i]);
    }
}
printf("Count is : %d\n",c);

}

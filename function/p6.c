#include<stdio.h>
void roteate_fun(int*,int,int);
void main()
{
    int n;
    int r;
    int i,j;
    printf("Enter size of array..\n");
    scanf("%d",&n);
    printf("Enter rotation no..\n");
    scanf("%d",&r);
    int a[n];

    printf("Enter elements..\n");
    for(int p=0;p<n;p++)
    {
    scanf("%d",&a[p]);
    }

    roteate_fun(a,n,r);

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
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
#include<stdio.h>
int strong_fun(int *,int);
int arm_strong(int*,int);
void main()
{
    int n;
    printf("Enter the number..\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter element..\n");
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int strong,arms;
    strong=strong_fun(a,n);
   arms=arm_strong(a,n);

    printf("Strong number count : %d Armstrong number count: %d\n",strong,arms);
    // printf("Strong number count : %d ",strong);
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
    return count;
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
    return c;
}
#include<stdio.h>
int dele_neg(int *,int);
void main()
{
    int n;
    printf("Enter the number..\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements..\n");
    int i,j,k=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int c=dele_neg(a,n);

    printf("count : %d\n",c);

        for(int p=0;p<n;p++)
    {
        printf("%d ",a[p]);
    }
    

}

int dele_neg(int *a,int n)
{
    int c=0,i,j;
    for(i=0;i<n;i++)
    {
        int value=a[i];
        if(value>>31&1)
        {
            c++;
            for(j=i;j<n;j++)
            {
                a[j]=a[j+1];
            }
            i--;
            n--;
        }
    }
    return c;
}
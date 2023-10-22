#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of array..\n");
    scanf("%d",&n);
    int a[n];
    int count_a[10];
    int i,j;
    printf("Enter array element..\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        count_a[i]=-1;
    }



///////////////////////////////////////////////////////////////////////////
int count;
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count_a[j]=0;
                count++;
            }
        }
        if(count_a[i]!=0)
        {
            count_a[i]=count;
        }
    }
//////////////////////////////////////////////////////////////////////////
for(i=0;i<n;i++)
{
    if(count_a[i]!=0)
    {
        printf("%d %d\n",a[i],count_a[i]);
    }
}

}


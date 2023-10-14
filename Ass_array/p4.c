#include<stdio.h>
void main()
{
    int n;

    printf("Enter array size..\n");
    scanf("%d",&n);
    int a[n];
    int i,j,k;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);


for(i=0;i<n;i++)
{
printf(" enter elements%d\n",a[i]);
}
printf("\n");
/////////////////////////logic//////////////////////////////
int c;
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        c=1;
        if(a[i]==a[j])
        {
            c++;
            for( k=j;k<n;k++)
            {
                a[k]=a[k+1];
            }
            n--;
            --j;
        }
    }
}

printf("%d\n",c);









/////////////////////////logic//////////////////////////////

for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
printf("\n");
    
}
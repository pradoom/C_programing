#include<stdio.h>
void main()
{
    int n,pos;
    printf("Enter pos ..\n");
    scanf("%d",&pos);
    printf("Enter array size..\n");
    scanf("%d",&n);

    int a[n];
     int ele =sizeof(a)/sizeof(a[0]);
    int i,j;
    for(i=0;i<ele;i++)
        scanf("%d",&a[i]);
/////////////////////////logic//////////////////////////////

for(i=0;i<ele-1;i++)
{
    if(i==pos)
    {
        for(j=pos;j<ele-1;j++)
        {
            a[j]=a[j+1];
        }
    }
}
/////////////////////////logic//////////////////////////////

for(i=0;i<ele-1;i++)
{
printf("%d ",a[i]);
}
printf("\n");
    
}
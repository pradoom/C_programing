#include<stdio.h>
void main()
{
    int n;
    printf("Enter array size..\n");
    scanf("%d",&n);
    int a[n];
    int ele =sizeof(a)/sizeof(a[0]);
    int i;
    for(i=0;i<ele;i++)
        scanf("%d",&a[i]);
/////////////////////////logic//////////////////////////////
int j;
for(i=0,j=ele-1;i<j;i++,j--)
{
    int temp = a[i];
    a[i]=a[j];
    a[j]=temp;
}
/////////////////////////logic//////////////////////////////

for(i=0;i<ele-1;i++)
{
printf("%d ",a[i]);
}
printf("\n");
    
}
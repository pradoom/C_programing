#include<stdio.h>
void main()
{
    int n,pos,num;
    printf("Enter pos you want to insert..\n");
    scanf("%d",&pos);
    printf("Enter array size..\n");
    scanf("%d",&n);
    int a[n];
    //int a[6]={2,3,4,5,6};
     int ele =sizeof(a)/sizeof(a[0]);
    int i,j;
    for(i=0;i<ele;i++)
        scanf("%d",&a[i]);


for(i=0;i<ele-1;i++)
{
printf("%d ",a[i]);
}
printf("\n");
/////////////////////////logic//////////////////////////////
for(i=ele;i>pos;i--)
{
a[i]=a[i-1];
}
a[pos]=9;
ele=ele+1;
/////////////////////////logic//////////////////////////////

for(i=0;i<ele-1;i++)
{
printf("%d ",a[i]);
}
printf("\n");
    
}
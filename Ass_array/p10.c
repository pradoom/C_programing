#include<stdio.h>
#include"sort_tech.c"
void main()
{
    int n,i,j;
    printf("Enter array size..\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements..\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

   // bubble_int(a,n);//bubble function call
    select_int(a,n);//selection sort function call

for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
}
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

/////////////////////////logic//////////////////////////////

for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
       
        if(a[i]==a[j])
        {
            
            for( k=j;k<n;k++)
            {
                a[k]=a[k+1];
            }
            n--;//size 
            --j;//go back and check
        }
    }
}











/////////////////////////logic//////////////////////////////

for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
printf("\n");
    
}
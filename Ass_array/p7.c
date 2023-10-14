#include<stdio.h>
void main()
{
    int n;
    printf("Enter size of array..\n");
    scanf("%d",&n);
    int a[n],i,j;
    printf("Enter elements..\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);


    int large,second;
    if(a[0]>a[1])
    {
        large=a[0];
        second=a[1];
    }
    else 
    {
        large=a[1];
        second=a[0];
    }

    for(i=2;i<n;i++)
    {
        if(a[i]>large)
        {
            second=large;
            large=a[i];
        }
        else if((a[i]>second)&&(a[i]!=large))
        {
                second=a[i];
        }
    }

    printf(" Large : %d Second large : %d \n",large,second);

}
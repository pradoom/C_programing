#include<stdio.h>
void main()
{
    int i=0,j=0,arr[6]={4,2,6,0,5,10};
    while(arr[i])
    {
        j+=arr[i];
        i++;
    }
    printf("%d\n",j);
}
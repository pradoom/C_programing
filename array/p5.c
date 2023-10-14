#include<stdio.h>
void main()
{
    int arr[]={2,20,7,5,1,9,6};
    int ele=sizeof(arr)/sizeof(arr[0]);
    int i=100;
    printf("i=%d a[-1]=%d\n",i,arr[i]);
    arr[-1]=200;
    printf("i=%d a[-1]=%d\n",i,arr[i]);
    
}
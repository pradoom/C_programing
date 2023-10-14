#include<stdio.h>
#include "print_array.c"
void swap_half(int*,int ele);
void main()
{
    int arr[]={10,20,30,40,50,60,70,80,90,100};

    
    int ele=sizeof(arr)/sizeof(arr[0]);
    printf("Before:\n");
    print(arr,ele);
    swap_half(arr,ele);
}
void swap_half(int *p,int ele)
{
    
    int i,j;
    for(i=0,j=ele/2;i<5;i++,j++)
    {
        int temp=p[i];
        p[i]=p[j];
        p[j]=temp;
    }
    
    //printing array
    printf("After:\n");
    print(p,ele);

}
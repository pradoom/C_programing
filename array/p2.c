#include<stdio.h>
#include "print_array.c"
void swap_adjes(int*,int ele);
void main()
{
    int arr[]={10,20,30,40,50,60,70,80,90,100};

    int ele=sizeof(arr)/sizeof(arr[0]);
    swap_adjes(arr,ele);
}
void swap_adjes(int *p,int ele)
{
    
    int i,j;
    for(i=0;i<ele-1;i=i+2)
    {
        int temp=p[i];
        p[i]=p[i+1];
        p[i+1]=temp;
    }
    
    //printing array
    print(p,ele);

}
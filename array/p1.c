#include<stdio.h>
#include "print_array.c"
void reverse_array(int*,int ele);
void main()
{
    int arr[]={10,20,30,40,50,60,70,80,90,100};

    int ele=sizeof(arr)/sizeof(arr[0]);
    reverse_array(arr,ele);
}
void reverse_array(int *p,int ele)
{
    int i,j;
    for(i=0,j=ele-1;i<j;i++,j--)
    {
    int t;
    t=p[i];
    p[i]=p[j];
    p[j]=t;
    }
    
    //printing array
    print(p,ele);
}
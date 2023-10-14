#include<stdio.h>
int fund(int arr[],int);
void func(int arr[],int,int);
int main()
{
    int arr[10]={1,2,3,4,8,10,14,16};
    func(arr,2,7);
    return 0;
}

int fund(int arr[],int size)
{
    if(size==0)
    {
        return 0;
    }
    else if(arr[size-1]%2==0)
    {
        return 1+fund(arr,size-1);
    }
    else
    return fund(arr,size-1);
}
void func(int arr[],int i,int j)
{
    if(i>j)
    {
        return;
    }
    func(arr,i+1,j);
    printf("%d ",arr[i]);
}
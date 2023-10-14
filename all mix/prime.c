#include<stdio.h>
void prime_fun(int*,int);
void main()
{

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int ele=sizeof(arr)/sizeof(arr[0]);
    prime_fun(arr,ele);

}
void prime_fun(int*arr,int ele)
{
    int i,j;
    for(i=0;i<ele;i++)
    {
        for(j=2;j<arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                break;
            }
        }
        if(j==arr[i])
        printf(" prime :%d\n",arr[i]);
    }
}
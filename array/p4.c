#include<stdio.h>
void prime_fun(int *,int);
void main()
{
    int arr[]={2,20,7,5,1,9,6};
    int ele=sizeof(arr)/sizeof(arr[0]);


    prime_fun(arr,ele);
}


void prime_fun(int *p,int ele)
{
    int i,j,c=0;
    for(i=0;i<ele-1;i++)
    {
        for(j=2;j<p[i];j++)
        {
            if(p[i]%j==0)
            break;
        }
        if(j==p[i])
        {
        c++;
        printf("%d\n",p[i]);
        }
    }
    printf("c=%d\n",c);
}
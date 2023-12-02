#include<iostream>
using namespace std;


int main()
{
    int arr[7]={1,2,3,4,5,6},i,j;
    int c1=0,c2=0;

    int size=sizeof(arr)/sizeof(arr[0]);

    int s=0,l=size-1;


     for(i=0;i<size-1;i++)
    {
        if(arr[i]%2==0)
        c1++;
        else
        c2++;
    }

    while(s<l)
    {
        
        if(arr[s]%2!=0)
        {
            s++;
           
            
        }
        if(arr[l]%2==0)
        {
            l--;
            
        }
        else
        {
            int t=arr[s];
            arr[s]=arr[l];
            arr[l]=t;
            s++;
            l--;
        }
    }

    for(i=0;i<c2;i++)
    {
        for(j=i;j<c2-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }


    for(i=c1;i<size-1;i++)
    {
        for(j=i;j<size-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }

    cout<<c1<<" "<<c2<<" "<<endl;


    for(i=0;i<size-1;i++)
    {
        cout<<" "<<arr[i];
    }

}

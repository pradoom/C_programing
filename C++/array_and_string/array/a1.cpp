#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the array size.."<<endl;
    cin>>n;

    int *arr=new int[n];
    int *ar=(int*)malloc(sizeof(int)*n);

    cout<<"Enter the elements.."<<endl;

    int i,j;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    for(i=0,j=n-1;i<j;i++,j--)
    {
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
    }


    for(i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }


}
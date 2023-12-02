#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Emter the array size.."<<endl;
    cin>>n;

    int *arr=new int[n];
    int *ar =(int*)malloc(sizeof(int)*n);

     cout<<"Enter the elements.."<<endl;

    int i,j;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int pos=3;

    for(i=3;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;




    for(i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }

}
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
    int pos=2;
    for(i=n-1;pos<=i;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=9;
    n++;



    for(i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }

}
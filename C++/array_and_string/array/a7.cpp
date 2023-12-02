#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the array size.."<<endl;
    cin>>n;
    
    int *arr=new int[n];
int i;
int big,small;
cout<<"Enter the elements..."<<endl;
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
if(arr[0]>arr[1])
{
    big=arr[0];
    small=arr[1];
}
else
{
    big=arr[1];
    small=arr[0];
}

for(i=2;i<n;i++)
{
    if(arr[i]>big)
    {
        small=big;
        big=arr[i];
    }
    else if(arr[i]>small&&arr[i]!=big)
    {
        small=arr[i];
    }
}
cout<<big<<" "<<small<<endl;

}
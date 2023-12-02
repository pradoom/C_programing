#include<iostream>
using namespace std;
void bubble_sort(int **a,int n);
int main()
{
    int n;
    cout<<"Enter array size"<<endl;
    cin>>n;

    int *arr=new int[n];

    int i;
    cout<<"Enter the elements..."<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubble_sort(&arr,n);



}
void bubble_sort(int **a,int n)
{
    int i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(*a[j]>*a[j+1])
            {
                int t=*a[j];
                *a[j]=*a[j+1];
                *a[j+1]=t;
            }
        }
    }


    for(i=0;i<n;i++)
    {
        cout<<" "<<*a[i];
    }
}
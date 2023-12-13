#include<iostream>
using namespace std;

int main()
{
    int a[]={10,20,30,40,50};


    int i,j;

    for(i=0,j=8;i<7;i++,j++)
    {
        int r=a[0]>>i&1;
        int k=a[1]>>j&1;

        if(r!=k)
        {
            a[0]=a[0]^1<<i;
            a[1]=a[1]^1<<j;
        }
    }

    cout<<a[0]<<" "<<a[1]<<endl;
}
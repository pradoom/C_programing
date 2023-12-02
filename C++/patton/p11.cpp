#include<iostream>
using namespace std;
int main()
{
    int i,j,r,k;

    for(i=0;i<6;i++)
    {
               
        for(j=0,k=0,r=2*k+1;j<6-i;j++,k++)
        {
            if(i%2==0)
            {
                cout<<"*";
            }
            else
            {
                cout<<r;
                r=r+2;
            }
        }
        cout<<endl;
    }
}
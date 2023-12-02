#include<iostream>
using namespace std;
main()
{
    int i,j,k;
    char ch;

    for(i=0;i<5;i++)
    {
        for(j=0,k=5;j<=i;j++,k--)
        {
            if(i%2==0)
            {
                cout<<k;
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
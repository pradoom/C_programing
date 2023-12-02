#include<iostream>
using namespace std;
main()
{
    int i,j,k,r=1;

    for(i=0,k=1;i<7;i++,k++)
    {
        if(i%2!=0)
        continue;
        for(j=0,r=k;j<=i;j++)
        {
            cout<<r;
            r--;
        }
        cout<<endl;
    }

}
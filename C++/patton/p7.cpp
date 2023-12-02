#include<iostream>
using namespace std;

int main()
{
    int i,j,r;

    for(i=0;i<5;i++)
    {
        for(j=0,r=2;j<=i;j++)
        {
            cout<<r;
            r=r+2;
   
        }
        cout<<endl;
    }
}


/*

2
24
246
2468
246810

*/
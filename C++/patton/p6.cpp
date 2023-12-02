#include<iostream>
using namespace std;

int main()
{
    int i,j,r;

    for(i=0;i<4;i++)
    {
        for(j=0,r=1;j<=i;j++)
        {
            cout<<r;
            r=r+2;
        }
        cout<<endl;
    }
}

/*

1
13
135
1357

*/
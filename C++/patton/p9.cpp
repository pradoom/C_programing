#include<iostream>
using namespace std;

int main()
{
    int i,j,s,r;
    for(i=0;i<5;i++)
    {
            for(s=0;s<i;s++)
            cout<<" ";

            for(j=0,r=2*i+1;j<5-i;j++)
            {
                cout<<r;
                r=r+2;

            }
            cout<<endl;
    }
}


/*

13579
 3579
  579
   79
    9

*/
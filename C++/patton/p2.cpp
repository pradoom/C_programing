#include<iostream>
using namespace std;
int main()
{
    int i,j,space;

    for(i=0;i<6;i++)
    {
        for(space=5;space>i;space--)
        {
            cout<<" ";
        }
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

/*

     *
    **
   ***
  ****
 *****
******

*/
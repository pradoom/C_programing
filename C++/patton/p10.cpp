#include<iostream>
using namespace std;

int main()
{
    int i,j;
    char ch;

    for(i=0;i<5;i++)
    {
        for(j=0,ch='A';j<=i;j++,ch++)
        {
            if(j%2==0)
            {
                cout<<ch;
            }
            else
            cout<<"*";
        
        }
        cout<<endl;
    }
}


/*

A
A*
A*C
A*C*
A*C*E


*/
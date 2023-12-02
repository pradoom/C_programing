#include<iostream>
using namespace std;
main()
{
    int i,j,k,s;
    char ch;




    for(i=0,ch='E';i<5;i++,ch--)
    {
        for(j=0;j<=i;j++)
        {
            cout<<ch;
            ch--;
        }
        cout<<endl;
        
    }
}
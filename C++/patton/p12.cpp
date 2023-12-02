#include<iostream>
using namespace std;
main()
{
    int i,j,k;
    char ch;

    for(i=0;i<5;i++)
    {
        for(j=0,k=1,ch='A';j<5-i;j++)
        {
            if(j%2==0)
            {
            cout<<ch;
            ch++;
            }
            else
            {
            cout<<k;
            k++;
            }
        }
        cout<<endl;
    }
}
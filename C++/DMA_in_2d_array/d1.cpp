#include<iostream>
using namespace std;
#define r 3
#define c 4
int main()
{
    int **p,i,j;
    p=new int*[r];//number of rows


    for(i=0;i<r;i++)
    {
        p[i]=new int [c];
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>p[i][j];
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<" "<<p[i][j];
        }
        cout<<endl;
    }



}
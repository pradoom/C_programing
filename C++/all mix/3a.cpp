#include<iostream>
using namespace std;
int main()
{ 
    int i,j,c=0;
    for(i=21;i<100;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
        {
            cout<<i<<endl;
            c++;
            if(c==7)
            break;
        }
        
    }
}
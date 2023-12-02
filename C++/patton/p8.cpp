#include<iostream>
using namespace std;

int main()
{
    int i,j,r;

    for(i=0;i<6;i++)
    {
        for(j=6,r=1;j>i;j--)
        {  
            cout<<r;
            r++;
        }
        cout<<endl;
    }
}


/*

123456
12345 
1234  
123   
12    
1 

*/
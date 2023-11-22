#include<iostream>
using namespace std;
void rotate(int*);
int main()
{
    int n;
    cout<<"Enter number.."<<endl;
    cin>>n;
    rotate(&n);
}
void rotate(int*c)
{   
    int i;
    unsigned int r;
    for(i=0;i<2;i++)
    {
        r=*c&1;
        *c=*c>>1;
        if(r)
        {
            *c=*c|1<<31;
        }
    }


    int p=0,k;
    for(p=31;p>=0;p--)
    {
        k=*c>>p&1;
        cout<<k;
        
    }
    cout<<""<<endl;
}
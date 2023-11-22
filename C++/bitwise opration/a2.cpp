#include<iostream>
using namespace std;
void revese_bit(char*);
int main()
{
    char c;
    cout<<"Enter charactor.."<<endl;
    cin>>c;
    revese_bit(&c);

    int p=0,k;
    for(p=7;p>=0;p--)
    {
        k=c>>p&1;
        cout<<k;
        
    }
    cout<<""<<endl;
}
void revese_bit(char* c)
{
    int i,j,n,m;

    for(i=3,j=4;i>=0;i--,j++)
    {
        m=*c>>i&1;
        n=*c>>j&1;
        if(m!=n)
        {
            *c=*c^1<<i;
            *c=*c^1<<j;
        }
    }
}
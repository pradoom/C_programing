#include<iostream>
using namespace std;
int swap_16(short int);
main()
{
    short int num;
    cout<<"Enter number"<<endl;
    cin>>num;

    int p=0,k;
    for(p=15;p>=0;p--)
    {
        k=num>>p&1;
        cout<<k;
        
    }
    cout<<""<<endl;
    
    swap_16(num);

}
int swap_16(short int n1)
{
    int i,j,n,m;

    for(i=0,j=12;i<4;i++,j++)
    {
        m=n1>>i&1;
        n=n1>>j&1;
        if(m!=n)
        {
            n1=n1^1<<i;
            n1=n1^1<<j;
        }
    }



    int p=0,k;
    for(p=15;p>=0;p--)
    {
        k=n1>>p&1;
        cout<<k;
        
    }
    cout<<""<<endl;
}
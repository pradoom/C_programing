#include<iostream>
using namespace std;
void num_div_8(int*);
int main()
{
    int n;
    cout<<"Enter number.."<<endl;
    cin>>n;
    num_div_8(&n);
}
void num_div_8(int*n)
{   
    int s1,s2;
    s1=*n>>3;
    s2=s1<<3; 
    *n==s2?cout<<"Yes"<<endl:cout<<"No"<<endl;
}
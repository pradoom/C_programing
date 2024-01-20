#include<iostream>
using namespace std;

template <class t>
t sum(t &a,t &b)
{
    return a+b;
}

template <class t1,class t2>
//t3 sum(t1 &a,t2 &b) cout<<sum(a,'f')<<endl;//error
int sum(t1 &a,t2 b)
{
    return a+b;
}

int main()
{
    int a=3,b=9;
    cout<<sum(a,b)<<endl;
    cout<<sum(a,'f')<<endl;
return 0;
}
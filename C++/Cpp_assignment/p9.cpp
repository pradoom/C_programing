#include<iostream>
using namespace std;

/*
9.Write a C++ Program to exchange values of two variables 
between two classes using friend function.
*/
class B;
class A
{
    int p,r;
    public:
    friend void exchange(A&,B&);
};
class B
{
    int p,r;
    public:
    friend void exchange(A&,B&);
};

void exchange(A&a,B&b)
{
    cout<<"Enter A data"<<endl;
    cin>>a.p>>a.r;

    cout<<"Enter B data"<<endl;
    cin>>b.p>>b.r;
    // int r,k;

    // r=a.p;
    // k=a.r;

    // a.p=b.p;
    // a.r=b.r;

    // b.p=r;
    // b.r=k;

    // Swap values directly using std::swap
    swap(a.p, b.p);
    swap(a.r, b.r);

    cout<<"A data:"<<a.p<<" "<<a.r<<endl;
    cout<<"B data:"<<b.p<<" "<<b.r<<endl;
}
int main()
{
    A b1;
    B b2;
    exchange(b1,b2);
return 0;
}
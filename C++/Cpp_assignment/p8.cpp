#include<iostream>
using namespace std;

/*
8.Write a C++ Program to define 3 classes.
Read & Display the data for 3 classes using friend function.
*/
class B;
class C;
class A
{
    int a,b;
    public:
    friend void ABC(A&,B&,C&);
};
class B
{
    int c,d;
    public:
    friend void ABC(A&,B&,C&);
};
class C
{
    int e,f;
    public:
    friend void ABC(A&,B&,C&);
};
void ABC(A &x,B &y,C &z)
{
    cout<<"Enter class A data"<<endl;
    cin>>x.a>>x.b;

    cout<<"Enter class B data"<<endl;
    cin>>y.c>>y.d;

    cout<<"Enter class C data"<<endl;
    cin>>z.e>>z.f;


    cout<<"class A:"<<endl;
    cout<<x.a<<" "<<x.b<<endl;

    cout<<"class B:"<<endl;
    cout<<y.c<<" "<<y.d<<endl;

    cout<<"class C:"<<endl;
    cout<<z.e<<" "<<z.f<<endl;
}
int main()
{
    A b1;
    B b2;
    C b3;

    ABC(b1,b2,b3);
return 0;
}
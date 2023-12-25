#include<iostream>
using namespace std;

class A
{
    
    public:
    int x=10;
    A()
    {
        cout<<"class A constructor"<<endl;
    }

    ~A()
    {
        cout<<"class A distructor"<<endl;
    }

    void get_data()
    {
        cout<<"class A "<<endl;
    }
};

class B:virtual public A
{
    
    public:
    int y=20;
    B()
    {
        cout<<"class B constructor"<<endl;
    }

    ~B()
    {
        cout<<"class B distructor"<<endl;
    }

    void get_data()
    {
        cout<<"class B "<<endl;
    }
};

class C:virtual public A
{
    
    public:
    int z=30;
    C()
    {
        cout<<"class C constructor"<<endl;
    }

    ~C()
    {
        cout<<"class C distructor"<<endl;
    }

    void get_data()
    {
        cout<<"class C "<<endl;
    }
};

class D:public B,public C
{
    
    public:
    int c=40;
    D()
    {
        cout<<"class D constructor"<<endl;
    }

    ~D()
    {
        cout<<"class D distructor"<<endl;
    }

    void get_data()
    {
        cout<<"class D "<<endl;
        cout<<"C::X:"<<C::x<<endl;
        cout<<"D::X:"<<B::x<<endl;
        cout<<"Y:"<<y<<endl;
        cout<<"Z:"<<z<<endl;
        cout<<"C:"<<c<<endl;
       
    }
};


int main()
{
    D b1;

    b1.get_data();
    // b1.A::get_data();//base class "A" is ambiguous

    //without virtual
    // cout<<"A:"<<sizeof(A)<<" Bytes"<<endl;//4
    // cout<<"B:"<<sizeof(B)<<" Bytes"<<endl;//8
    // cout<<"C:"<<sizeof(C)<<" Bytes"<<endl;//8
    // cout<<"D:"<<sizeof(D)<<" Bytes"<<endl;//20


    //with virtual
    
    cout<<"A:"<<sizeof(A)<<" Bytes"<<endl;//
    cout<<"B:"<<sizeof(B)<<" Bytes"<<endl;//
    cout<<"C:"<<sizeof(C)<<" Bytes"<<endl;//
    cout<<"D:"<<sizeof(D)<<" Bytes"<<endl;//

return 0;
}
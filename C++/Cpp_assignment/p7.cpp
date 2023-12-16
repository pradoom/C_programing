#include<iostream>
using namespace std;
/*

7.Write a C++ program to create a class Complex with real and imaginary 
parts perform addition and subtraction of two complex objects.

*/
class complex
{
    int real;
    int img;
    public:
    complex()
    {

    }

    void set_data()
    {
        cout<<"Enter the real and img:"<<endl;
        cin>>real>>img;
    }

    complex operator +(complex &t)
    {
        complex temp;
        temp.real=this->real+t.real;
        temp.img=this->img+t.img;

        return temp;
    }

    void get_data()
    {
        cout<<real<<" "<<img<<endl;
    }
};

int main()
{
    complex b1,b2,s;
    b1.set_data();
    b2.set_data();
    s=b1+b2;
    s.get_data();

return 0;
}
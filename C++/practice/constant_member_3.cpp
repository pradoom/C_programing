#include<iostream>
using namespace std;
class A
{
    const int cash,gold;

    public:

    A()
    {

    }

    void set_data()const//constant member function
    {
        cout<<"Enter data:"<<endl;

    }

    void get_data()const//constant member function
    {
        cout<<cash<<" "<<gold<<endl;
    }
};



int main()
{
    const A b1;

    b1.set_data();
    b1.get_data();
return 0;
}
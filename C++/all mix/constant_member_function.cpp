#include<iostream>
using namespace std;

class A
{
    int cash,gold;
    public:
    A()
    {
        cash=10,gold=20;
    }

    void set_data()
    {
        cout<<"Enter cash and gold"<<endl;
        cin>>cash>>gold;
    }

    void get_data()const
    {
        cout<<"cash:"<<cash<<"gold:"<<gold<<endl;
    }
};

int main()
{
    const A obj;//constant obj can call only constant member
    obj.set_data();//this is not a constant member
    obj.get_data();//constant member
}
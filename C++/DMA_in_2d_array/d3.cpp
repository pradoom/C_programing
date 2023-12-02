#include<iostream>
using namespace std;

class family
{// by default class member of private
    int cash,gold;

    public://we are making public after this line

    void set_person(int,int);
    void get_data();
};

int main()
{
    family s1,s2;

    s1.set_person(10,20);
    s1.get_data();

    s2.set_person(40,7);
    s2.get_data();
}
//Note: Every member function must call througn object only

void family::set_person(int a,int b)
{
    cash=a,gold=b;
}


void family::get_data()
{//this will print address
    cout<<cash<<" "<<gold<<" "<<this<<endl;
}
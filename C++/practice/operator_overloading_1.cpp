#include<iostream>
using namespace std;
class operator_x
{
    int x,y;

    public:

    operator_x():x(0),y(0)//default constructor
    {

    }

    operator_x(int a,int b):x(a),y(b)//parameterized constructor
    {

    }

    void get_data()
    {
        cout<<x<<" "<<y<<endl;
    }

    operator_x operator +(operator_x &t)
    {
        cout<<"Operator+overloaded"<<endl;
        operator_x temp;
        temp.x=x+t.x;
        temp.y=y+t.y;

        return temp;
    }

    operator_x operator -(operator_x &t)
    {
        cout<<"Operator-overloaded"<<endl;
        operator_x temp;
        temp.x=x-t.x;
        temp.y=y-t.y;
        
        return temp;
    }

    operator_x operator *(operator_x &t)
    {
        cout<<"Operator*overloaded"<<endl;
        operator_x temp;
        temp.x=x*t.x;
        temp.y=y*t.y;

        return temp;
    }
};
int main()
{
    operator_x b1(10,20),b2(20,30),b3,b4,b5;

    b3=b1+b2;

    b4=b3-b2;

    b5=b1*b2;

    b5.get_data();
}
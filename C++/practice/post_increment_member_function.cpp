#include<iostream>
using namespace std;


class A
{
    int x,y;

    public:

    A():x(0),y(0)
    {

    }
    A(int a,int b):x(a),y(b)
    {

    }

    void get_data()
    {
        cout<<x<<" "<<y<<endl;
    }

    A operator ++(int)
    {
        A temp;

        temp.x=x++;
        temp.y=y++;

        return temp;
    }


    A operator --(int)
    {
        A temp;

        temp.x=x--;
        temp.y=y--;

        return temp;
    }

};


int main()
{
    A b1(10,20),b2;
    b2=b1--;

    b2.get_data();

}
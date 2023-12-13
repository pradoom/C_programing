#include<iostream>
using namespace std;
/*

There are some operator which can be overloaded only by using
member function.
1) = (Assignment operator)
2) () (Function call)
3) [] (subscripting)
4) -> (Arrow operator)

*/

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

    // = operator
    A operator =(A t)
    {
        this->x=t.x;
        this->y=t.y;
        return t;
    }
};
int main()
{
    A b1(10,20),b2,b3;
    b3=b2=b1;

    b3.get_data();
}
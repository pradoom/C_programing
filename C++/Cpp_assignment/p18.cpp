#include<iostream>
using namespace std;

/*

Write a C++ program to Overload Post increment(++) 
and Pre increment(++) operators  using freind function.

*/
class operator_x
{
    int a,b;
    public:
    operator_x()
    {
        a=66;
        b=9;
    }
    //post increment
    friend operator_x operator++(operator_x&t,int);
    //pre increment
    //friend operator_x operator++(operator_x&t);

//without friend
    operator_x operator --(int)
    {
        operator_x temp;

        temp.a=a--;
        temp.b=b--;

        return temp;
    }
    void print()
    {
        cout<<a<<" "<<b<<endl;
    }
};
//with friend
operator_x operator++(operator_x&t,int)
    {
        operator_x temp;
        temp.a=++t.a;
        temp.b=++t.b;

        return temp;
    }

int main()
{
operator_x b1,b2,b3;
b1=b2++;
b1.print();
return 0;
}
#include<iostream>
using namespace std;
class A
{
    int x,y;
    public:
//default constructor 
A():x(10),y(20)
{
    cout<<x<<" "<<y<<endl;
}
//paramiterized constructore
A(int a,int b):x(a),y(b)
{
    cout<<x<<" "<<y<<endl;
}

//copy constructor
A(A &temp)
{
    cout<<"copy constructor call"<<endl;
    x=temp.x;
    y=temp.y;
}

void get_data()
{
    cout<<x<<" "<<y<<endl;
}

};

A test(A temp)
{
    cout<<"Non member function"<<endl;
    return temp;
}




int main()
{
    //A b1(34,7),b2,b3(b1);//valid
    //A b1(34,7),b2,b3=b1;//valid
    A b1(34,7),b2,b3;
    test(b1);
    b3=b1;//error non-static const member 'const int A::x', can't use default assignment operator
    b3.get_data();
}

/*
//default constructor defination
A::A():x(10),y(20)
{
    cout<<x<<" "<<y<<endl;
}
*/

/*
//paramiterized constructore defination
A::A(int a,int b):x(a),y(b)
{
    cout<<x<<" "<<y<<endl;
}
*/
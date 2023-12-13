#include<iostream>
class A
{
    int x,y;
    public:
    A():x(0),y(0){}

    A(int a,int b):x(a),y(b){}

    void get_data()
    {
        std::cout<<x<<" "<<y<<std::endl;
    }

    // A operator +(A&t)
    // {
    //     std::cout<<"operater overloading with members"<<std::endl;
    //     A ret;
    //     ret.x=x+t.x;
    //     ret.y=y+t.y;

    //     return ret;
    // }
    friend A operator +(A,A);
};

    A operator +(A t1,A t2)
    {
        std::cout<<"operater overloading with members"<<std::endl;
        A ret;
        ret.x=t1.x+t2.x;
        ret.y=t1.y+t2.y;

        return ret;
    }
int main()
{
    A obj1(10,20),obj2(30,40),obj3;
    obj3=obj1+obj2;

    obj3.get_data();
}

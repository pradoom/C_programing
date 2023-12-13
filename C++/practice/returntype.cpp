#include<iostream>
using namespace std;
class complex
{
    int real,img;
    public:

    void set_data()
    {
        cout<<"Enter the data"<<endl;
        cin>>real>>img;
    }

    void get_data()
    {
        cout<<real<<img<<endl;
    }
//
    complex addition1(complex &t1,complex &t2)
    {   complex temp;
        temp.real=t1.real+t2.real;
        temp.img=t1.img+t2.img;

        return temp;
    }
//
    complex* addition2(complex &t1,complex &t2)
    {
        complex temp;
        temp.real=t1.real+t2.real;
        temp.img=t1.img+t2.img;

        return &temp;
    }
//
    complex& addition3(complex &t1,complex &t2)
    {
        real=t1.real+t2.real;
        img=t1.img+t2.img;
    }
};
int main()
{
    complex b1,b2,b3,*b4,b5;
    b1.set_data();
    b2.set_data();
    //
    b3.addition1(b1,b2);
    b3.get_data();
    //
    b4->addition2(b1,b2);
    b4->get_data();
    //
    b5.addition1(b1,b2);
    b5.get_data();

}
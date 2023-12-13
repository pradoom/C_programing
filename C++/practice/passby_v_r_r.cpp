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
//call by value
    void addition1(complex t1,complex t2)
    {
        real=t1.real+t2.real;
        img=t1.img+t2.img;
    }
//call by address
    void addition2(complex *t1,complex *t2)
    {
        real=t1->real+t2->real;
        img=t1->img+t2->img;
    }
//call by reference
    void addition3(complex &t1,complex &t2)
    {
        real=t1.real+t2.real;
        img=t1.img+t2.img;
    }
};
int main()
{
    complex b1,b2,b3,b4,b5;
    b1.set_data();
    b2.set_data();
    //call by value
    b3.addition1(b1,b2);
    b3.get_data();
    //call by address
    b4.addition2(&b1,&b2);
    b4.get_data();
    //call by reference
    b5.addition1(b1,b2);
    b5.get_data();

}
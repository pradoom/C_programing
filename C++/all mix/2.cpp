#include<iostream>
using namespace std;

class complex
{
    int real,img;
    
    public:

    void set_data()
    {
        cout<<"Enter data"<<endl;
        cin>>real>>img;
    }

    void get_data()
    {
        cout<<" "<<real<<" "<<img<<endl;
    }


complex add1(complex t1)
{complex t;
    cout<<"Call by value"<<endl;
    t.real=t1.real;
    t.img=t1.img;

    return t;

}


complex* add2(complex t1)
{
    cout<<"Call by address"<<endl;
    t1.real=9;
    real=t1.real;

}


complex &add3(complex t1)
{
    cout<<"Call by referance"<<endl;
    t1.real=9;
    real=t1.real;
}

};



int main()
{
    class complex c1,c2,c3,*c4,c5;
    c1.set_data();
    c2.set_data();
    c3=c1.add1(c2);
    c3.get_data();
    c4=c1.add2(c2);
    c4->get_data();
}
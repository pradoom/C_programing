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


void add1(complex t1,complex t2)
{
    cout<<"Call by value"<<endl;
    t1.real=9;
    real=t1.real+t2.real;
    img=t1.img+t2.img;
}


void add2(complex *t1,complex *t2)
{
    cout<<"Call by address"<<endl;
    t1->real=9;
    real=t1->real+t2->real;
    img=t1->img+t2->img;
}


void add3(complex &t1,complex &t2)
{
    cout<<"Call by referance"<<endl;
    t1.real=9;
    t2.img=98;
    real=t1.real+t2.real;
    img=t1.img+t2.img;
}

};



int main()
{
    class complex c1,c2,c3,c4,c5;
    c1.set_data();
    c2.set_data();

    c5.add3(c1,c2);
  // c3.add1(c1,c2);
   // c4.add2(&c1,&c2);
    // c3.get_data();
    c1.get_data();
     c2.get_data();
}
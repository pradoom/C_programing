#include<iostream>
using namespace std;

class base
{
    int x;
    public:
    base()
    {
        cout<<"Base constructor"<<endl;
        x=10;
    }
    base(int a):x(a)
    {
        cout<<"Parameter base"<<endl;
    }

    ~base()
    {
        cout<<"Base distructor"<<endl;
    }

    void get()
    {
        cout<<x<<endl;
    }
};

class derive:public base
{
    int y;

    public:

    derive()
    {
        cout<<"Derive constructor"<<endl;
        y=20;
    }
    derive(int a,int b):base(a),y(b)
    {
        cout<<"Parameter derive"<<endl;
    }

    ~derive()
    {
        cout<<"Derive constructor call"<<endl;
    }

    //base::get();//error cant access
    //get()//error cant access
    void get_data()
    {
        cout<<y<<endl;
        //cout<<y<<x<<endl;//cant access because x is in private in base class
        //we can not access private data of base class in derive class
        //but we can access protected data and public data
        get();//can access
        
    }
};
int main()
{
    derive d(10,20);
   // d.base::get_data();
    d.get_data();
return 0;
}
#include<iostream>
using namespace std;

class singleton
{
    static singleton *p;

    singleton()
    {
        cout<<"constructor"<<endl;
    }

    public:

    static singleton* creat_object()
    {
        if(p==0)
        {
            p=new singleton;
            return p;
        }
    }
};

singleton* singleton::p;

int main()
{

    singleton *p1,*p2;

    p1=singleton::creat_object();
    cout<<p1<<endl;
    p2=singleton::creat_object();
    cout<<p2<<endl;
return 0;
}
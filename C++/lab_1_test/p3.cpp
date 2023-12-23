#include<iostream>
using namespace std;
class A
{
    int *p;

    public:
    A()
    {
        p=new int;
    }

    void get_set()
    {
        cout<<"Enter data:"<<endl;
        cin>>*p;
    }

    A & operator =(A&t)
    {
        
        *p=*t.p;
        return t;
    }

    void operator ()(int a,int b)
    {
        *p=a;
    }

    void get_data()
    {
        cout<<*p<<endl;
    }
    ~A()
    {
        delete p;
    }
};
int main()
{
    A b1;
    b1(100,200);
    b1.get_data();

return 0;
}
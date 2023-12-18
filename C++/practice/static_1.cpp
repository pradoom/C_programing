#include<iostream>
using namespace std;
class A
{
    static int c;
    static int k;
    int x;

    public:

    static void get_data()
    {
        cout<<c<<endl;
        cout<<k<<endl;
        //cout<<x<<endl;//non static member will not access by static member
    }
};
int A::c=0;
int A::k=0;
int main()
{
A obj;
obj.get_data();
//A::get_data();

return 0;//
}
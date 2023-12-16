#include<iostream>
using namespace std;

class A
{
    protected:
    int x;
   

    public:void fun()
    {

        int c;
        cin>>x;
        cout<<x<<endl;
    }
        private:void fun()
    {

        int c;
        cin>>x;
        cout<<x<<endl;
    }
};

int main()
{
    A b1;
    b1.fun();
    //b1.x;//invalid 
}
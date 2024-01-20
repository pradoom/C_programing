#include<iostream>
using namespace std;
class Time
{
    int hr,min;

    public:
    Time():hr(0),min(0)
    {

    }
    Time(int n)
    {
        cout<<"Converstion constructor"<<endl;
        hr=n/60;
        min=n%60;
    }

    void get_line()
    {
        cout<<hr<<" "<<" "<<min<<endl;
    }
};
int main()
{
    Time t;
    t.get_line();
    int n=10;
    t=n;
    t.get_line();

return 0;
}
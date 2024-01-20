#include<iostream>
using namespace std;
class Time
{
    int hr,min;

    public:
    Time():hr(0),min(0)
    {
        hr=10,min=8;
    }

    operator int()
    {
        cout<<"Convertion logic"<<endl;
        return hr*60+min;
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
    n=t;
    t.get_line();

return 0;
}
#include<iostream>
using namespace std;

class point
{
    int x,y;
    public:

    point(const point &p)
    {
        x=p.x;
        y=p.y;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
};

int main()
{
    point p1;//error:no default constructor exists for class

    point p2=p1;

    cout << "x = " << p2.getx() << " y = " << p2.gety();
}
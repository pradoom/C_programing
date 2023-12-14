#include<iostream>
using namespace std;
class Point {
    int x;
public:
    Point(int x) { this->x = x; }
    Point(Point &p) { this->x = p.x;}//no error
    //Point(const Point p) { this->x = p.x;}//error
    int getX() { return x; }
};
 
int main()
{
   Point p1(10);
   Point p2 = p1;
   cout << p2.getX();
   return 0;
}

//Why copy constructor argument should be const in C++?
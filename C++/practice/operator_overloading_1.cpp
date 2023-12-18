#include <iostream>
using namespace std;
class operator_x
{
    int x, y;

public:
    operator_x() : x(0), y(0) // default constructor
    {
    }

    operator_x(int a, int b) : x(a), y(b) // parameterized constructor
    {
    }

    void get_data()
    {
        cout << x << " " << y << endl;
    }

    operator_x operator+(operator_x &t)
    {
        cout << "Operator+overloaded" << endl;
        operator_x temp;
        temp.x = this->x + t.x;
        temp.y = this->y + t.y;

        return temp;
    }

    operator_x operator-(operator_x &t)
    {
        cout << "Operator-overloaded" << endl;
        operator_x temp;
        temp.x = this->x - t.x;
        temp.y = this->y - t.y;

        return temp;
    }

   friend  operator_x operator*(int value,operator_x &t1);

};


// operator_x operator*(operator_x &t,operator_x &t1)
//     {
//         cout << "Operator*overloaded" << endl;
//         operator_x temp;
//         temp.x = t1.x * t.x;
//         temp.y = t1.y * t.y;

//         return temp;
//     }

operator_x operator*(int value,operator_x &t1)
    {
        cout << "Operator*overloaded" << endl;
        operator_x temp;
        temp.x = value * t1.x;
        temp.y = value * t1.y;

        return temp;
    }
int main()
{
    operator_x b1(10, 20), b2(20, 30), b3, b4, b5;

    b3 = b1 + b2;

    b4 = b3 - b2;

    b5 = 2 * b2;

    b5.get_data();
}
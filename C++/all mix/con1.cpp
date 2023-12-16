#include <iostream>
using namespace std;

class A
{
    int s, k;

public:
    A()
    {
        cout << "con call" << endl;
    }
};
int main()
{
    A b1,b2,b3;
    return 0;
}
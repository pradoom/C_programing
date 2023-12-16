#include <iostream>
using namespace std;

class sample
{
    
public:
    void set_data(char c);

    void get_data();

private:
    int a = 10;

    char ch;
};

void sample::set_data(char c)
{
    ch = c;
}
void sample::get_data()
{
    cout << a << ch << endl;
}
int main()
{

    sample s;

    s.set_data('A');

    s.get_data();
}

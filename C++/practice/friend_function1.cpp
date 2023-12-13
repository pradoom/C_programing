#include<iostream>
using namespace std;
class friend_function1
{
    char *s;

    public:

    friend_function1()
    {
        s=new char[40];
    }

    ~friend_function1()
    {
        delete []s;
    }

    void input_string()
    {
        cin>>ws;
        cin.getline(s,40);
    }

    void print()
    {
        cout<<s<<endl;
    }

};


int main()
{
    friend_function1 f1;
    f1.input_string();
    f1.print();
}
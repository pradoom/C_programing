#include<iostream>
using namespace std;
class A
{
    private:
    int x=9;
    public:
    int z;
    int y;

};
class B:A
{
    int b;
    public:
    void get()
    {
        cin>>y;
    }

};
int main()
{
    B b;
    b.get();
return 0;
}
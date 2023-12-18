#include<iostream>
using namespace std;

/*

11.Write a C++ Program to declare 3 classes. 
Declare private integers array as data members in each class. 
Perform addition of two data member arrays into array of third 
class using friend function.

will do it by array pointer
*/
class A
{
    int *p;
   
    public:
    A()
    {
        p=new int[5];
    }
};
class B
{
    int *p;

    public:
    B()
    {
        p=new int[5];
    }
};
class C
{
    int *p;
 
    public:
    C()
    {
        p=new int[5];
    }
};

int main()
{
return 0;
}
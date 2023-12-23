#include<iostream>
using namespace std;

/*

11.Write a C++ Program to declare 3 classes. 
Declare private integers array as data members in each class. 
Perform addition of two data member arrays into array of third 
class using friend function.

will do it by array pointer
*/
class B;
class C;
class A
{
    int *p;
   
    public:
    A()
    {
        p=new int[5];

        cout<<"Enter data:"<<endl;

        for(int i=0;i<5;i++)
        {
            cin>>p[i];
        }
    }

    friend void add(A&,B&,C&);
};
class B
{
    int *p;

    public:
    B()
    {
        p=new int[5];

        for(int i=0;i<5;i++)
        {
            cin>>p[i];
        }
    }

    friend void add(A&,B&,C&);
};
class C
{
    int *p;
 
    public:
    C()
    {
        p=new int[5];

    }
    friend void add(A&,B&,C&);
};
void add(A&t1,B&t2,C&t3)
{
        for(int i=0;i<5;i++)
        {
            t3.p[i]=t1.p[i]+t2.p[i];
        }

        for(int j=0;j<5;j++)
        {
            cout<<t3.p[j]<<endl;
        }
}
int main()
{
    A t1;
    B t2;
    C t3;
    add(t1,t2,t3);
return 0;
}
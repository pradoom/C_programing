#include<iostream>
using namespace std;

/*

10.Write a C++ program to find total salary of husband and wife using a friend function. 
Create  a class to hold the information of husband and another for the wife information.

*/
class wife;
class husband
{
    int sal;
    public:
    friend void add(husband&,wife&);
};
class wife
{
    int sal;
    public:
    friend void add(husband&,wife&);
};
void add(husband&h,wife&w)
{
    cout<<"Enter Husbent data"<<endl;
    cin>>h.sal;

    cout<<"Enter wife data"<<endl;
    cin>>w.sal;

    int sum=h.sal+w.sal;

    cout<<"Sum is"<<sum<<endl;
}
int main()
{
    husband h;
    wife w;
    add(h,w);
return 0;
}
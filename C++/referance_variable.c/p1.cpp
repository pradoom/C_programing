#include<iostream>
using namespace std;
void fun(int &rv)
{
    rv=78;
    cout<<rv<<endl;
}
int main()
{
//     int a=65;
//     int &rv=a;
//     rv=43;
//     fun(rv);
//     cout<<rv<<endl;
//    // int b=9;
//    // rv=b;
//     cout<<rv<<endl;

int a=45;
int *ptr=&a;
int *&p=ptr;

cout<<*p<<endl;
int r=67;
int *z=&r;
p=z;
cout<<*p<<endl;
}
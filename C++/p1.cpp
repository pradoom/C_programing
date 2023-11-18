#include<iostream>
using namespace std;
int main()
{
    int a;
    int &rv=a;
    cin>>a;
    cout<<showbase<<endl;
    cout<<" ascii char "<<(char)a<<endl;//printinf acii charactor
    cout<<"hex "<<hex<<a<<endl;
    cout<<"hex "<<oct<<a<<endl;
    cout<<noshowbase<<endl;
    cout<<"value of rv "<<rv<<endl;
    cout<<"value is "<<a<<endl;
    cout<<"hello"<<endl;
}
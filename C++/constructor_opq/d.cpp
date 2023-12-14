#include<iostream>
#include<cstring>
using namespace std;
class A
{
    char *s;

    public:

    A(const char *p) 
    {
        int l=strlen(p);
        s=new char[l+1];
        strcpy(s,p);
    }

    void modify()
    {
        *s='m';
    }

    void print()
    {
        cout<<s<<endl;
    }
};
int main()
{
    A c1("hello");
    A c2=c1;

    c1.modify();

    c1.print();
    c2.print();
}
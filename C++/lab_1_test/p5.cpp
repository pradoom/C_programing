#include<iostream>
using namespace std;
//smart pointer
class person
{
    int age;
    string s;
    public:

    person()
    {

    }

    person(int x,string y)
    {
        age=x,s=y;
    }

    void get_data()
    {
        cout<<age<<" "<<s<<endl;
    }
};
class smart
{
    person *ptr;
    public:
    smart()
    {
    int a;

    string s;

    cout<<"Enter age and name"<<endl;

    cin>>a>>s;

    ptr=new person(a,s);

    }

    ~smart()
    {
        delete ptr;
    }

    person*operator->()
    {
        return ptr;
    }

    person operator*()
    {
        return *ptr;
    }


};
int main()
{
    smart s1,s2;

    s1->get_data();
    (*s2).get_data();
return 0;
}
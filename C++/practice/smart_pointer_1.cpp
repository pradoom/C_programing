#include<iostream>
using namespace std;
class person
{
    int age;
    string name;

    public:

    person(){}

    person(int a,string b)
    {
        age=a,name=b;
    }

    void get_person()
    {
        cout<<age<<" "<<name<<endl;
    }
}endclass;


class smart
{
    person *ptr;

    public:

    smart()
    {
        int a;
        string name;
        cout<<"Enter roll and name"<<endl;
        cin>>a>>name;

        ptr=new person(a,name);
    }

    ~smart()
    {
        delete ptr;
    }

    person * operator ->()//arrow operator
    {
        return ptr;
    }

    person operator *()//dereferance operator      
    {
        return *ptr;
    }
};
int main()
{
    smart p1,p2;
    p1->get_person();

   (*p2).get_person();
}
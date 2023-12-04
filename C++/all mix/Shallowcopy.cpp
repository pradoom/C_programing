#include<iostream>
#include<cstring>
// class shallow
// {
//     char *s;
//     public:
//     // shallow()
//     // {

//     // }
//     shallow(const char*p)
//     {
//         s=new char[strlen(p)+1];
//         strcpy(s,p);
//     }

//     void get_string()
//     {
//         std::cout<<"string  "<<s<<std::endl;
//     }

//     void modify()
//     {
//         *s='s';
//     }

// };

class deep
{
    char *s;
    int *roll;
    public:
    deep()
    {

    }
    deep(const char*p,int n)
    {
        s=new char[strlen(p)+1];
        strcpy(s,p);
        roll=new int;
        *roll=n;
    }

    deep(deep&t)
    {
        s=new char[strlen(t.s)+1];
        strcpy(s,t.s);
        roll=new int;
        roll=t.roll;

    }

    void get_string()
    {
        std::cout<<"string  "<<s<<std::endl;
        std::cout<<"roll  "<<*roll<<std::endl;
    }

    void modify()
    {
        *s='s';
        *roll=8;
    }

};
int main()
{
    int a=6;
    deep s1("vector",a),s2(s1);
    s1.get_string();
    s2.get_string();
    std::cout<<" "<<std::endl;
    s1.modify();
    s1.get_string();
    s2.get_string();
}
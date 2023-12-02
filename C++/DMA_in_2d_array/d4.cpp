#include<iostream>
using namespace std;

class family
{
    /* Size of empty class is 1 byte becasue to show existence of variable */
};

int main()
{
    family s1,s2;

    cout<<"Sizeof "<<sizeof(family);//1 byte
}

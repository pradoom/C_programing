#include<iostream>
#include<stdlib.h>
using namespace std;
 
class Test
{
public:
   Test()
   { cout << "Constructor called"; }
};
 
int main()
{
    //Test *t = (Test *) malloc(sizeof(Test));//not call Constructor
    Test *t=new Test;//call Constructor
    return 0;
}
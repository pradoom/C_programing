#include<iostream>

using namespace std;

namespace my_std
{
    void test()
    {
        cout<<"TEST1 CALL"<<endl;
    }
}

namespace my_std1
{
    void test1()
    {
        cout<<"TEST1 CALL"<<endl;
    }
}
using namespace my_std;

int main()
{
    using namespace my_std1;
    test1();
return 0;
}
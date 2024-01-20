#include<iostream>
using namespace std;
namespace A
{
    int x=9;
}
namespace B
{
    int x;
}
int main()
{
    using namespace A;
   // using namespace B;
   // cout<<A.x<<endl;//error
   cout<<A::x<<endl;//valid
   cout<<x<<endl;//valid
return 0;
}
#include<iostream>
using namespace std;
  
class Test
{
public:
  Test();
};
  
Test::Test()  {
    cout << " Constructor Called. "<<endl;
}
  
void fun() {
  static Test t1;//Note that t is static in fun(), so constructor is called only once.
}
  
int main() {
    cout << " Before fun() called. "<<endl;;
    fun();
    fun();
    cout << " After fun() called. "<<endl;  
    return 0;
}
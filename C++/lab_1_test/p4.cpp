#include<iostream>
using namespace std;

class A
{
    int arr[5];
    public:
    int & operator[](int i)
    {
        return arr[i];
    }
};
int main()
{
    A b1;
    int i;
    for(i=0;i<5;i++)
    {
        cin>>b1[i];
    }

    for(i=0;i<5;i++)
    {
        cout<<b1[i]<<endl;
    }

return 0;
}
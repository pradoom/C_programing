#include<iostream>
using namespace std;
class function_overloding
{
    public:

    int sum(int a,int b)
    {
        cout<<"Sum int"<<endl;
        return a+b;
    }

    int sum(int a,int b,int c)
    {
        cout<<"Sum 3 argument"<<endl;
        return a+b+c;
    }

    float sum(float a,float b)
    {
        cout<<"Sum float"<<endl;
        return a+b;
    }
};

    int sum(int a,int b=9);

int main()
{
    class function_overloding obj;
    cout<<obj.sum(10,20)<<endl;

    cout<<obj.sum(10,20,30)<<endl;


    cout<<obj.sum(10.7f,20.7f)<<endl;

    cout<<sum(4,7)<<endl;
    
}
    int sum(int a,int b)
    {
        cout<<"outside int"<<endl;
        return a+b;
    }
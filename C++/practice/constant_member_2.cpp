#include<iostream>
using namespace std;
class A
{
    int cash,gold;

    public:

    void set_data()const//constant member function
    {
        cout<<"Enter data:"<<endl;
        //cin>>cash>>gold;//error
        //cash=78;//error
        //gold=67;//error
        scanf("%d %d",&cash,&gold);//no error
    }

    void get_data()const//constant member function
    {
        cout<<cash<<" "<<gold<<endl;
    }
};



int main()
{
    A b1;

    b1.set_data();
    b1.get_data();
return 0;
}
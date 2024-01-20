#include<iostream>
using namespace std;
template <class t>
class rao
{
    t a;
    public:

    void set_data()
    {
        cout<<"Enter the data:"<<endl;
        cin>>a;
    }
    void get_data();

};
template <class t>
void rao<t>::get_data()
{
    cout<<a<<endl;
}
int main()
{
    rao <char> op;
    op.set_data();
    op.get_data();
return 0;
}
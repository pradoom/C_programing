#include<iostream>
using namespace std;
struct family
{
    private:
    int cash,gold;

    // void set_person(){
    //     cout<<"cash"<<"gold"<<endl;
    //     cin>>gold>>cash;
    // }
    public:
    void get_person(){
        //set_person();
        cout<<" "<<cash<<" "<<gold<<endl;
    }
};
int main()
{
    family f;
    f.get_person();//can assess data
}
#include<iostream>
using namespace std;
class check
{
    int *num1;
    int *num2;
    
    public:
    check(int a,int b)
    {
        cout<<"Constructor Call"<<endl;
        num1=new int(a);
        num2=new int(b);
    }
    int i,j,c=0;
    void get_data()
    {
        for(i=0;i<=4;i++)
        {
            int r=*num1>>i&1;
            int k=*num2>>i&1;

            if(r!=k)
             {
              c++;
             }
        }
    cout<<c<<endl;
    }

    ~check()
    {
        cout<<"Distructor Call"<<endl;
        delete num1,num2;
    }
};
int main()
{
    check  a(15,16);

    a.get_data();
}
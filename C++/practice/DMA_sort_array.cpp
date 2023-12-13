#include<iostream>
using namespace std;
//allocate dynamic memory and sort it
class A
{
    int *p;

    public:
    A()
    {
        cout<<"Memory allocated"<<endl;
        p=new int[5];
    }
    ~A()
    {
        cout<<"Memory deallocated"<<endl;
        delete []p;
    }

    void get_data()
    {
        cout<<"Enter data"<<endl;
        int i;
        for(i=0;i<5;i++)
        {
            cin>>p[i];
        }
    }

    void sort_array()
    {
        int i,j;
        for(i=0;i<5;i++)
        {
            for(j=0;j<5-i-1;j++)
            {
                if(p[j]>p[j+1])
                {
                    int temp=p[j];
                    p[j]=p[j+1];
                    p[j+1]=temp;
                }
            }
        }
    }

    void print()
    {
        int i;
        for(i=0;i<5;i++)
        {
            cout<<p[i]<<endl;;
        }
    }


};
int main()
{
    A obj1;

    obj1.get_data();
    obj1.sort_array();
    obj1.print();
}
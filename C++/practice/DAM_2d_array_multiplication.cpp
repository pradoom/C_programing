#include<iostream>
using namespace std;
int r,c;
class two_d_array
{
    int **a;
    int **b;
    int **s;
    
    public:

    two_d_array()
    {
        cout<<"Constructor call"<<endl;
        
        cout<<"Enter rows and collom:"<<endl;
        cin>>r>>c;
        a=new int *[r];

        b=new int *[r];

        s=new int *[r];

        int i,j;

        for(i=0;i<r;i++)
        {
            a[i]=new int [c];
        }

        for(i=0;i<r;i++)
        {
            b[i]=new int [c];
        }

        for(i=0;i<r;i++)
        {
            s[i]=new int [c];
        }

    }

    void set_data()
    {
        int i,j;
        cout<<"Enter 1st array data:"<<endl;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cin>>a[i][j];
            }
        }

        cout<<"Enter 2st array data:"<<endl;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cin>>b[i][j];
            }
        }
    }

    void mul()
    {
        int i,j;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                s[i][j]=a[i][j]*b[i][j];
            }
        }
    }

    void print()
    {
        int i,j;
        cout<<"Result is:"<<endl;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cout<<s[i][j]<<endl;;
            }
        }
    }

    ~two_d_array()
    {
        cout<<"distructor call"<<endl;
        delete []a;
        delete a;
        delete []b;
        delete b;
        delete []s;
        delete s;
    }


};



int main()
{
    two_d_array b1;

    b1.set_data();

    b1.mul();

    b1.print();

}
#include<iostream>
using namespace std;
class matrix
{
    int **a;
    int **b;
    int **s;
    int n;
    int r1,c1,r2,c2;
    public:

    matrix()
    {
        cout<<"Enter r1 and c1 of matrix 1:"<<endl;
        cin>>r1>>c1;

        cout<<"Enter r2 and c2 of matrix 2:"<<endl;
        cin>>r2>>c2;

        a=new int*[r1];
        b=new int*[r2];
        s=new int*[r1];


        int i;
        for(i=0;i<r1;i++)
        {
            a[i]=new int[c1];
        }

        for(i=0;i<r2;i++)
        {
            b[i]=new int[c2];
        }

        for(i=0;i<r1;i++)
        {
            s[i]=new int[c2];
        }
    }

    void set_data()
    {
        int i,j;
        cout<<"Enter A data:"<<endl;
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                cin>>a[i][j];
            }
        }

        cout<<"Enter B data:"<<endl;
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                cin>>b[i][j];
            }
        }
    }

    void mul()
    {
        int i,j;
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                s[i][j]=0;
                for(int j=0;j<c1;j++)
                {
                    s[i][j]+=a[i][j]*b[i][j];
                }
            }
        }
    }


    void print()
    {
         int i,j;
        cout<<"Result:"<<endl;
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                cout<<s[i][j]<<endl;;
            }
        }
    }
};
int main()
{
    matrix b1;
    b1.set_data();
    b1.mul();
    b1.print();


return 0;
}
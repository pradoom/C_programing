#include<iostream>
using namespace std;
int main()
{
    int a=45786;

    int i,rus=0;
    int sum=0,c=0;
    for(i=a;i;i=i/10)
    {
        sum=sum*10+i%10;
    }

    for(i=sum;i;i=i/10)
    {
        int r=i%10;
        rus=rus+r;
        c++;
        if(c==4)
        break;
    }
    cout<<rus<<endl;
}
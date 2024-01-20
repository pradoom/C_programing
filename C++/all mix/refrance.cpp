#include<iostream>
using namespace std;
int main()
{
    int i=10,j=20;
    int *p=&i;
    int *q=&j;

    int *&rp=p;
    int *&rq=q;

    cout<<p<<" "<<rp<<" "<<i<<endl;

    rp=rq;

    cout<<p<<" "<<*rp<<" "<<&i<<endl;

return 0;
}
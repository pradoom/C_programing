#include<iostream>
using namespace std;
int main()
{  
    int k=2;
    l2:
    int i=1;
    l1:
    cout<<i*k<<endl;
    i++;
    if(i<11)
    goto l1;
    k++;
    if(k<=9)
    goto l2;
}
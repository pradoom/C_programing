#include<iostream>
#include <string.h>
using namespace std;
void fun(string s,int size);
int main()
{
    string s="hello pradoom rao";
    int size = s.size();
    fun(s,size);
    
   
return 0;
}

void fun(string s,int size)
{
    static int i=0,j=size-1;
    static char t;
    if(i>j)
    {
    cout<<s<<endl;
    return;
    }

    t=s[i];
    s[i]=s[j];
    s[j]=t;
    i++;
    j--;
    fun(s,size);
 
}
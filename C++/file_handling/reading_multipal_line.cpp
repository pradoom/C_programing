#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin("data");

    string s;

    while(getline(fin,s))
    {
        cout<<s<<endl;
    }
return 0;
}
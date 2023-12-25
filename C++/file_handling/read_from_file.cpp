#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin("data");

    string s;

    //fin>>s;//read only one word

    getline(fin,s);//read one line

    cout<<s<<endl;
return 0;
}
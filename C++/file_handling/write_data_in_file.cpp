#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout("data");

    fout<<"Hello rao"<<endl;
    fout<<"This is send line"<<endl;

    fout.close();
return 0;
}
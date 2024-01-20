#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
//lower to uppercase
int main()
{
	fstream fin("data",ios::in|ios::out);
	char ch;

	while(fin.get(ch))
	{
		if(ch==' ')
		{
			fin.seekp(-1,ios::cur);
			fin<<' ';
		}
		else
		{
			ch=ch-32;
			fin.seekp(-1,ios::cur);
			fin<<ch;
		}
	}
	fin.close();
}

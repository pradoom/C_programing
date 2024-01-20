#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
//copy word by word in other file
int main()
{
	fstream fin1("data",ios::in);
	fstream fin2("data1",ios::in);
	fstream fout("result",ios::out);
	string s1,s2;
	int c1=0;
	int c2=0,i;
	while(fin1>>s1)
	{
		c1++;
	}
	while(fin2>>s2)
	{
		c2++;
	}
	fin1.clear();
	fin2.clear();
	fin1.seekp(0,ios::beg);
	fin2.seekp(0,ios::beg);

	for(c1,c2;c1&&c2;c1--,c2--)
	{
		fin1>>s1;
		fout<<s1<<" ";
	
		fin2>>s2;
		fout<<s2<<" ";
	}
	
	if(c1>c2)
	{
		for(c1;c1;c1--)
		{
			fin1>>s1;
			fout<<s1<<" ";
		}
	}

	if(c2>c1)
	{
		for(c2;c2;c2--)
		{
			fin2>>s2;
			fout<<s2<<" ";
		}
	}

	fin1.close();
	fin2.close();
	fout.close();

}

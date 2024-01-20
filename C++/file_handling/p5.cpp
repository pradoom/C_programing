#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
	fstream fin("data",ios::in|ios::out);
	string s;
	int line_c=0;
	while(getline(fin,s))
	{
		line_c++;
	}
	fin.clear();
	fin.seekp(0,ios::beg);
	char **p=new char*[line_c];
	
	int i;

	for(i=0;i<line_c;i++)
	{
		p[i]=new char[50];
	}
	string s1;
	for(i=0;i<line_c;i++)
	{
		getline(fin,s1);
		strncpy(p[i],s1.c_str(),49);
		p[i][49]='\0';
	}
	
	fin.close();
	remove("data");

	fstream fin1("data",ios::out);

	for(i=0;i<line_c;i++)
	{
		if(i==1)
		{
			continue;
		}
		fin1<<p[i];
		fin1<<'\n';
	}
}

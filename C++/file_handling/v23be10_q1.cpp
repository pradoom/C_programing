#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char**argv)
{
	fstream sfin(argv[1],ios::in);

	try
	{
		if(sfin.fail())
		{
			throw "File not preasent!";
		}
	}
	catch(const char*s)
	{
		cout<<"Exception:"<<s<<endl;
	}
	
	int i,f;
	char op;
	for(i=2;i<argc;i++)
	{	
		f=0;
		fstream dfin;
		dfin.open(argv[i]);
		if(dfin.is_open())
		{
			cout<<"File already present Do you want to overwrite it?(Y/N)"<<endl;
			cin>>op;
			if(op=='Y')
			f=1;
		}
		char ch;
		if(f==1)
		{	
			fstream dfin(argv[i],ios::out);
			while(sfin.get(ch))
			{
				dfin<<ch;	
			}
		}
		else
		{	fstream dfin(argv[i],ios::out);
			while(sfin.get(ch))
			{
				dfin<<ch;
			}
		}
		dfin.clear();
		sfin.clear();
		dfin.close();
		sfin.seekp(0,ios::beg);
	}

}

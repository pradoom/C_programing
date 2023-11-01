#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//To count number of lines in file
struct st
{
	char s[50];
	int size;

};
void main(int argc,char**argv)
{
	if(argc!=2)
	{
		printf("Usage:./a.out string file_name\n");
		return;
	}

	FILE *f;
	f=fopen(argv[1],"r");

	if(f==0)
	{
		printf("File not found..\n");
		return;
	}


	int c=0,c1=0;

	char ch;

	while((ch=fgetc(f))!=-1)
	{
		
		if(ch=='\n')
		{
			c++;		
		}

		
	}	

		printf("Number of line : %d\n",c);
	
}








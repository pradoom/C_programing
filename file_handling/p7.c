#include<stdio.h>
#include<stdlib.h>
//remove perticular  lines in file

/*

fgets is a function in the C programming language that reads 
a limited number of characters from a given file stream source
into an array of characters. 
its detect '/n'
*/
void main(int argc,char**argv)
{
	if(argc!=3)
	{
		printf("Usage message..\n");
		return;
	}

	FILE *f=fopen(argv[1],"r+");
	FILE *tmpfile=fopen("t1_new","w");
	int line=atoi(argv[2]);

	char sh[100];
	int c=1;
	while(fgets(sh,100,f))
	{
		if(c!=line)
		{
			fputs(sh,tmpfile);
		}
		c++;
	}

remove("t1");


}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//user define grep function
void main(int argc,char**argv)
{
	if(argc!=3)
	{
		printf("Usage:./a.out string file_name\n");
		return;
	}

	FILE *f;
	f=fopen(argv[2],"r");

	if(f==0)
	{
		printf("File not found..\n");
		return;
	}


	int c=0,c1=0;

	char ch;

	while((ch=fgetc(f))!=-1)
	{
		c++;
		if(ch=='\n')
		{
			if(c>c1)
			{
				c1=c;
				printf("%d\n",c1);
			}
			c=0;
		}

		
	}	


	rewind(f);

	
	char *s=malloc(c1+1);


	while(fgets(s,c1+1,f))
	{

		if(strstr(s,argv[1]))
		{
			printf("%s\n",s);
		}

	}
	
}








#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct st
{
	char ch[50];
	int size;

};
void main(int argc,char**argv)
{

	struct st v[10];
//	if(argc!=2)
//	{
	//	printf("Usage:./a.out string file_name\n");
	//	return;
	//}

	FILE *f;
	f=fopen(argv[1],"r");

	if(f==0)
	{
		printf("File not found..\n");
		return;
	}


	int c=0,c1=0;

	char ch;
	int p=0;

	while((ch=fgetc(f))!=-1)
	{
		c++;
		if(ch=='\n')
		{
			if(c>c1)
			{
				c1=c;
				v[p].size=c1;
				p++;
				//printf("%d\n",c1);
			}
			c=0;
		}

		
	}	


	rewind(f);

	
	char *s=malloc(c1+1);

	int k=0;
	while(fgets(s,c1+1,f))
	{

			strcpy(v[k].ch,s);
			k++;

	}


	for(int r=0;r<10;r++)
	{
		printf(" String = %s Size =%d",v[r].ch,v[r].size);

	}


	
}








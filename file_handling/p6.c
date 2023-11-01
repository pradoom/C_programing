#include<stdio.h>
void main(int argc,char**argv)
{
	if(argc!=4)
	{
		printf("Usage message..\n");
		return;
	}

	FILE *f=fopen(argv[1],"r");
	FILE *s=fopen(argv[2],"r");
	FILE *t=fopen(argv[3],"r+");

	char sh[100];

	while(fgets(sh,100,f))
	{
		fputs(sh,t);
	}

	while(fgets(sh,100,s))
	{
		fputs(sh,t);
	}


}

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
	FILE *t=fopen(argv[3],"w");

	char ch[100];
	char c1,c2;
	char ch1[100];
	while(((fscanf(f,"%s",ch))!=-1)&&(c1=fgetc(f))!=-1)
	{	
		fputs(ch,t);
		fputc(' ',t);
		if(c1=='\n')	
			fputc('\n',t);	
		while(((fscanf(s,"%s",ch1))!=-1)&&(c2=fgetc(s))!=-1)
		{
			fputs(ch1,t);
			fputc(' ',t);
			if(c2=='\n')
				fputc('\n',t);
			break;
		}
		
	}



}

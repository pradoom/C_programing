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

	char ch;


		while((ch=fgetc(f))!=-1)
		{
			fputc(ch,t);
	
		while((ch=fgetc(s)))
		{
			fputc(ch,t);
			break;
		}
		
        }
	


}

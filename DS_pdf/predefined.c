#include<stdio.h>
#include<string.h>
void main()
/*{
	char s[]="embedded";
	unsigned long int l;
	l=strlen(s);
	printf("l=%lu\n",l);
	printf("%ld\n",strlen("embedded"));
}*/
/*{
	char s[10]="abcd",d[10],d1[10];
	printf("%s\n",strcpy(d,s));
	printf("%s\n",strncpy(d1,s,3));//first 3 bytes are copied from src to dest
}*/
/*{
	char s[10]="abcd",d[10]="1234",d1[10]="1234";
	printf("%s\n",strcat(d,s));
	printf("%s\n",strncat(d1,s,2));
}*/
/*{
	char s1[]="a1c",s2[]="abc";
	printf("%d\n",strcmp(s1,s2));  // -49  s1<s2
	printf("%d\n",strncmp(s1,s2,1)); //  0  s1==s2
}*/
/*{
	char s[]="embedded",ch='e';
	printf("%p\n",strchr(s,ch));
	printf("%s\n",strchr(s,ch));
	printf("%p\n",strrchr(s,ch));
	printf("%s\n",strrchr(s,ch));
}*/
{
	char main[]="embedded",sub[]="be";
	printf("%p\n",strstr(main,sub));
	printf("%s\n",strstr(main,sub));
}
















































































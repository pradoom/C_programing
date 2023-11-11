#include<stdio.h>
void print(const char *);
int my_strlen(const char *);
const char *my_strchr(const char *,char);
void my_strrev(char *);
void my_strrev1(char *,char*);
void my_strcpy(const char *,char *);
void my_strupr(char *);
int my_strcmp(const char*,const char *);
void   my_strcat(const  char *,char *);
void main()
{
char s[50],*p,*q;
printf("Enter the string\n");
scanf("%[^\n]",s);
printf("Before s=%s\n",s);
my_strrev(s);
p=s;
while(q=my_strchr(p,' '))
{
	my_strrev1(p,q-1);
	p=q+1;
}
my_strrev(p);

printf("After s=%s\n",s);
}




void my_strcpy(const char *s,char *d)
{
	int i;
        while(*s)
	{
		*d=*s;
		d++;
		s++;
	}
	*d=*s;
}
void my_strcat(const char *s,char *d)
{
	int i,j;
	for(i=0;d[i];i++);
	for(j=0;s[j];i++,j++)
		d[i]=s[j];
		d[i]=s[i];        //d[i]='\0';
}
int my_strcmp(const char *s1,const char *s2)
{
	int i;
	for(i=0;s1[i];i++)
	{
		if(s1[i]!=s2[i])
			break;
	}
		return s1[i]-s2[i];
}
void my_strupr(char *p)
{
	int i;
	for(i=0;p[i];i++)
	{
		if(p[i]>='a' && p[i]<='z')
			p[i]=p[i]-32;
	}
}
void my_strrev1(char *p,char *q)
{
	char t;
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}

}
void my_strrev(char *p)
{
	int i,j;
	char t;
/*	for(i=0;p[i];i++);
	for(j=0,i=i-1;j<i  ;i--,j++)
	{
		t=p[i];
		p[i]=p[j];
		p[j]=t;
	}*/
        char *q=p;
	while(*q)
	q++;
	q--;
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}
}
int my_strlen(const char *p)
{
	int i;
	for(i=0;p[i];i++);
return i;
}

void print(const char *p)
{
	int i;
	for(i=0;p[i];i++)
		printf("%c ",p[i]);
/*	while(*p)
	printf("%c ",*p++);
*/
printf("\n");
}
const char * my_strchr(const char *p,char ch)
{
/*	int i;
	for(i=0;p[i];i++)
	{
		if(p[i]==ch)
			return p+i;
	}
	return 0;*/
         while(*p)
	 {
		 if(*p==ch)
			 return p;
			 p++;
	 }
	 return 0;

}

















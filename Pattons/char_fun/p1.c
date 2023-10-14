#include<stdio.h>
void my_strcat(const char *,char*);
void main()
{
char s[20]="Hello world";
char d[30]="pradoom";
my_strcat(s,d);

printf("%s",d);
}
void my_strcat(const char *s,char*d)
{
    //char *q=d;
    while(*d)
    {
        d++;
    }

    while(*s)
    {
        *d=*s;
        d++;
        s++;
    }
    *d='\0';


}
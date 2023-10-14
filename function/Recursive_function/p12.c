#include<stdio.h>
#define pf printf
#define sf scanf
void rec_fun_rev_string(char*,char*);
void main()
{
    char s[30];
    int i;
    pf("Enter string..\n");
    sf("%[^\n]",s);

    for(i=0;s[i];i++);

    rec_fun_rev_string(s,&s[i-1]);


//pf("%s",s);
}

void rec_fun_rev_string(char *p,char* n)
{
    if(p<n)
    {
    char temp=*p;
    *p=*n;
    *n=temp;
    p=p+1;
    n=n-1;
    rec_fun_rev_string(p,n);
    //printf("%c",p[0]);

    }
   
}
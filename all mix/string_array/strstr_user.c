#include<stdio.h>
#include<string.h>
//user define strstr function
int strncmp1(char*d,char*s,int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        if(s[i]!=d[i])
        {
            return ((s+i)-(d+i));
        }
    }
    return 0;
}



char *strstr1(char*s,char*sub)
{
    char *ptr=s;
    while(*ptr)
    {
        if(strncmp1(ptr,sub,3)==0)
        {
            return ptr;
        }
        ptr++;
    }
    return 0;
}
int main()
{
    char s[]="hello rao what is rao mening rao";
    char d[]="rao";

    int a=strncmp1(s,d,3);
    int b=strncmp(s,d,3);

    printf("a= %d   b= %d\n",a,b);
}
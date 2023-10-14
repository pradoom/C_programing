#include<stdio.h>
void fun(char*);
void main()
{
char s[40]="Hello laptop guru sir";
fun(s);
printf("%s",s);
}
void fun(char*s)
{
    int i,j,d,p,f=0;


    for(i=0,d=0;s[i];i++)
    {
        if(s[i]==' ')
        {
            for(j=d,p=i-1;j<p;j++,p--)
            {
                f=1;
                char temp=s[p];
                s[p]=s[j];
                s[j]=temp;
            }
        }
        if(f)
        break;
    }
}
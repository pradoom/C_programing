#include<stdio.h>
#include<string.h>
void main()
{
    char name[100]="hello this is rao";
    int i,j;
    int l=strlen(name);
    name[0]=name[0]-32;
    name[l-1]=name[l-1]-32;
    for(i=0;name[i];i++)
    {
        if(name[i]==' ')
        {
            name[i+1]=name[i+1]-32;

        }
    }

    for(i=0;name[i];i++)
    {
        if((name[i]==' '))
        {
            name[i-1]=name[i-1]-32;
            
        }
    }

    printf("%s",name);
}
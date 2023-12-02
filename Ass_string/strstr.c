#include<stdio.h>
#include<string.h>
char* strstr1(char*st,char*sub)
{
    int l1=strlen(st);
    int l2=strlen(sub);

    int i,j=0,count=0;
    int sub_count=0;
    for(i=0;i<l1;)
    {
        j=0;
        count=0;
        while(st[i]==sub[j])
        {
            count++;
            i++;
            j++;
        }

        if(count==l2)
        {
            int a=i-l2;
            return st+a;
        }
        else
        {
            i++;
        }

    }
       
}

int main()
{
    char s[]="helrao rao whrat is rao mening rao hello";
    char d[]="rao";

    char *a=strstr1(s,d);

    printf("Substring count: %s\n",a);

    char *a1=strstr(s,d);

    printf("Substring count: %s\n",a1);
}
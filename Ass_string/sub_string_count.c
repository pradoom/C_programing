#include<stdio.h>
#include<string.h>
int sub_string_con(char*st,char*sub)
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
            sub_count++;
            count=0;
        }
        else
        {
            i++;
        }

    }
        return sub_count;
}

int main()
{
    char s[]="helralo rao whrat is rao mening rao hello";
    char d[]="rao";

    int a=sub_string_con(s,d);

    printf("Substring count: %d\n",a);
}
#include<stdio.h>
#include<string.h>
void main()
{
    char s[100]="aaaaaaakkkrp";
    int i,j,l,f,m;
    //char f[10];
int ele=strlen(s);

        for(j=0;s[j];j++)
        {
            if(s[j]==s[j+1])
            {
                s[j]=s[j+1];
                //a=*(char*)s[i];
                for(l=j;s[l];l++)
                {
                    s[l]=s[l+1];
                }
                j--;
                
            }
        }

    printf("%s\n",s);
}
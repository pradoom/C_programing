#include<stdio.h>
#include<string.h>
void main()
{
    char s[100]="aaaaaaakkkrrrp";
    int i,j,l,f,m;
    char ch;
int ele=strlen(s);
for(i=0;i<ele;i++)
{
        for(j=i+1;j<ele;j++)
        {
            if(s[i]==s[j])
            {
                ch=s[i];
                break;
            }
        }

        if(ch==s[i])
        {
            for(l=i;l<ele;l++)
            {
                s[l]=s[l+1];
            }
            i--;
        }
        ele--;
}
    printf("%s\n",s);
}
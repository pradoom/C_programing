#include<stdio.h>
#include<string.h>
void main()
{
    char s[20]="coding sirji vector";

    int i,j,k,p;
    for(j=0;s[j];j++);

    for(i=0,k=0;i<=j+1;i++)
    {
        if((s[i]==' ')||(s[i]=='\0'))
        {
            for(k,p=i-1;k<p;k++,p--)
            {
                char temp=s[k];
                s[k]=s[p];
                s[p]=temp;
            }
           k=i+1;
        }
    }

    printf("%s\n",s);
}
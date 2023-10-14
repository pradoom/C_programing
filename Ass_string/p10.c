#include<stdio.h>
#include<string.h>
void laternate(char *,char *,char*);
void main()
{
    char s1[10];
    char s2[10];
    
    int str1=strlen(s1);
    int str2=strlen(s2);
    char d[str1+str2];
    printf("Enter string 1..\n");
    scanf(" %s",s1);
    printf("Enter string 2..\n");
    scanf(" %s",s2);
    //1A2B3C4D


     laternate(s1,s2,d);



    printf("%s\n",d);
}
void laternate(char *s1,char *s2,char*d)
{

    int i,j,k,q;
    int str1=strlen(s1);
    int str2=strlen(s2);
    d[str1+str2];

    for(i=0,j=1,k=0;s1[k]&&s2[k];i=i+2,j=j+2,k++)
    {
        d[i]=s1[k];
        d[j]=s2[k];
    }

    if(str1>str2)
    {
        int r=strlen(d);
        for(q=r-1;q<r;q++)
        {
            d[q]=s1[++k];
            
        }
    }
    else
    {
        int p=strlen(d);
        
        for(q=p-1;q<p;q++)
        {
            d[q]=s2[k];
            k++;
        }
    }



}
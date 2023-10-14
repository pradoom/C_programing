#include<stdio.h>
void rev_word_fun(char *);
int count_word_fun(char *);
void main()
{
    char s[20]=" r1t r6o how4r y9u";
    rev_word_fun(s);
    int count=count_word_fun(s);

    printf("String is : %s\n",s);
    printf("number count is: %d\n",count);
}

void rev_word_fun(char*s)
{
    int i,j,k,p,g;
    for(g=0;s[g];g++);
    for(i=0,k=0;i<=g;i++)
    {
        if((s[i]==' ')||!(s[i]))
        {
            for(j=k,p=i-1;j<p;j++,p--)
            {
                char temp=s[j];
                s[j]=s[p];
                s[p]=temp;
            }
            k=i+1;
        }
    }
}


int count_word_fun(char *s)
{
    int i,j,k,p,g,c;
    for(g=0;s[g];g++);
    for(i=0,k=0,c=0;i<=g;i++)
    {
        if((s[i]==' ')||!(s[i]))
        {
            for(j=k,p=i-1;j<=p;j++)
            {
                if(s[j]>='0'&&s[j]<='9')
                {
                c++;
                break;
                }
            }
            k=i+1;
        }
    }
    return c;
}

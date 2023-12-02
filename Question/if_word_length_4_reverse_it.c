#include<stdio.h>
#include<string.h>
void main()
{
    char s[]="Hell heru rao 1234 h55o oneh";
    int size=strlen(s);
    int i,c=0,f,l;
    int j;
    for(i=0,f=0;i<size-1;i++)
    {
        c++;
        if(s[i]==' ')
        {
            if((c-1)==4)
            {
                for(j=f,l=i-1;j<l;j++,l--)
                {
                    char t=s[j];
                    s[j]=s[l];
                    s[l]=t;
                }
                
            }
            f=i+1;
            c=0;
        }
        
    }

    printf("%s\n",s);
}
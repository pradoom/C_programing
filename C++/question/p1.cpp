#include<iostream>
#include<string.h>
using namespace std;
//revers the word if word having number
int main()
{
    char s[50]="hel5lo ra9 tri54 hyr4ft";

    int i,j,c=0,d,p;
    char t;
    int z=strlen(s);
    for(i=0,d=0;i<=z;i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        c++;
        if(s[i]==' '||!s[i])
        {
            if(c)
            {
                for(j=d,p=i-1;j<p;j++,p--)
                {
                    t=s[j];
                    s[j]=s[p];
                    s[p]=t;
                   
                }
            }
            d=i+1;
            c=0;
        }

    }

    cout<<s<<endl;
}
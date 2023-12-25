#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s="Hello 234 gold slive12 345 ra89op";
    //cout<<sizeof(s)<<endl;
    int size=s.length();
    int i,j,p,c,c1,d;
    int k,q;
    for(i=0,d=0;i<size;i++)
    {   
        
        c=0;
        c1=0;
        if(s[i]==' '||s[i]=='\0')
        {
            for(j=d,p=i-1;j<=p;j++)
            {
                if(s[j]>='0'&&s[j]<='9')
                {
                    c++;
                }
                c1++;
            }

            if(c1==c)
            {
                for(k=d,q=i-1;k<q;k++,q--)
                {
                    char ch=s[k];
                    s[k]=s[q];
                    s[q]=ch;
                }
            }
            d=i+1;
        }
    }
    cout<<s<<endl;
return 0;
}
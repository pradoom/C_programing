#include<iostream>
using namespace std;
int main()
{
    string s="hello rao for this new rocket";
    string r="this";
    int i=0,j=0,c=0;

    int l=s.length();
    int l1=r.length();

    while(i<l)
    {
        c=0;
        j=0;
        while(s[i]==r[j])
        {
            i++;
            j++;
            c++;
        }
         if(c==l1)
        {
            int x=i-l1;
            for(int k=i-1;k>=x;k--)
            {
                s[k]=s[k+1];
            }
        }
    
         i++;

    }
    
    cout<<s<<endl;
return 0;
}
#include<iostream>
using namespace std;

int main()
{
    FILE *f=fopen("rao.txt","r+");
    

    char s[100];
    int line=2;
    int c=0,i;
    while(fgets(s,100,f)!=0)
    {
        //if(fgets(s,50,f)==0)
        //break;
        c++;

        if(line==c)
        {
            for(i=0;s[i];i++);
            printf("%s",s);
            fseek(f,-(i+1),SEEK_CUR);
            for(i=i-2;i>=0;i--)
            {
                fputc(s[i],f);
            }
            break;
        }
    }
    //cout<<c<<endl;

}
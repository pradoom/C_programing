#include<stdio.h>
void main()
{
    int i,j,c,p;
    char s[20]="abd fgh";
    for(i=0;s[i];i++)
    {
        char ch=s[i];
         c=0;
        if(ch!=' ')
        {
                for(j=7;j>=0;j--)
                 {
                        if(ch>>j&1)
                        {
                          c++;
                        }

                }
        }

        if(c==3)
        {
            for(p=i;s[p];p++)
            {
                s[p]=s[p+1];
            }
            i--;
        }
        
        
    }
    
    printf("%s",s);


}
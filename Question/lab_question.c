#include<stdio.h>
//string having bineary 3 times 1 ,,,delete that letter
//a have 3 ones b have 3 ones 
void main()
{
    int i,j,c,p;
    char s[20]="abd fgh";
    for(i=0;s[i];i++)
    {
        char ch=s[i];
         c=0;

                 for(j=7;j>=0;j--)
                 {
                        if(ch>>j&1)
                        {
                          c++;
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
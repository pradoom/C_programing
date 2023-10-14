#include<stdio.h>
//delete desire element from string
void main()
{
    char s[20]="abcccab";

    int size;
    for(size=0;s[size];size++);
    int i,j;
   for(i=0;i<size;i++)
   {
        if(s[i]=='c')
        {
            for(j=i;j<size;j++)
            {
                s[j]=s[j+1];
            }
            i--;
        }
   }

   printf("%s\n",s);
}
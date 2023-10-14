
/*

   A
  123
 ABCDE
1234567


*/
#include<stdio.h>
void main()
{
int i,space,j,r;
char ch;

for(i=0;i<5;i++)
{
    for(space=0;space<5-i;space++)
    printf(" ");

    for(j=0,ch='A',r=1;j<2*i-1;j++,r++)
    {
        if(i%2==0)
        {
            printf("%d",r);
        }
        else
        {
            printf("%c",ch);
            ch=ch+1;
        }
        
    }
    printf("\n");
}
}
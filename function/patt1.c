#include<stdio.h>
void main()
{
    int i,j,space;
    char ch='A';
    for(i=0;i<5;i++)
    {
        for(space=0;space<5-i;space++)
        {
            printf(" ");
        }

        for(j=0;j<2*i-1;j++)
        {
            if(i==4)
            printf("%c",ch);
            else
            printf("*");
        }
        printf("\n");
    }
}

/*

    *
   ***
  *****
 AAAAAAA

*/
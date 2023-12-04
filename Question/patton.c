#include<stdio.h>
void main()
{
    int i,j,s,r=0;

    for(i=0;i<6;i++)
    {
        for(s=0;s<5-i;s++)
        {printf(" ");}

        for(j=0;j<=i;j++)
        {
            if(j==i-1)
            {
                printf("A");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }


}

/*

     0
    01
   012
  0123
 01234
012345

op:
     *
    A*
   *A*
  **A*
 ***A*
****A*

*/
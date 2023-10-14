#include<stdio.h>
void patton1();
void patton2();
void patton3();
void patton4();
int main()
{
//patton1();
//patton2();
//patton3();
patton4();
}


void patton1()
{
/*
2 
2 4
2 4 6
2 4 6 8
2 4 6 8 10
*/

        int i,j,r;
    for(i=0;i<5;i++)
    {
        for(j=0,r=2;j<=i;j++,r++)
        {
            printf("%d ",r+j);
        }
        printf("\n");
    }
}

void patton2()
{
/*
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/

        int i,j,r,s;
    for(i=0;i<6;i++)
    {
        for(s=0;s<2*i;s++)
        printf(" ");

        for(j=5;j>=i;j--)
            printf("%d ",j);

        printf("\n");
    }
}

void patton3()
{
/*

5
* *
5 4 3
* * * *
5 4 3 2 1

*/

        int i,j,r,s;
    for(i=0;i<5;i++)
    {
        // for(s=0;s<=i;s++)
        // printf(" ");

        for(j=0,r=5;j<=i;j++)
            if(i%2==0)
            {
            printf("%d ",r);
            r=r-1;
            }
            else
            {
                printf("* ");
            }

        printf("\n");
    }
}

void patton4()
{
/*

        E
      1 2
    C D E
  1 2 3 4
A B C D E

*/

        int i,j,r,s;
        int ch;
    for(i=0;i<5;i++)
    {
        for(s=0;s<=4-i;s++)
        printf(" ");

        for(j=0,ch='A',r=1;j<=i;j++)
            if(i%2==0)
            {
               
            printf("#");
            
            }
            else
            {  
                printf("%c",ch);
                ch=ch+1;
            }

        printf("\n");
    }
}
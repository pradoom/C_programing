#include<stdio.h>
#include<stdlib.h>
void fun1(int,int,int**);//sorting  2d array
void fun2(int,int,int**);//
void fun3(int,int,int**);
void main()
{
    int r,c,i,j;
    printf("Enter rows and collom..\n");
    scanf("%d %d",&r,&c);
    int **p;
    p=malloc(sizeof(int*)*r);//32
    for(i=0;i<r;i++)
    {
        p[i]=malloc(sizeof(int)*c);//4x3=12
    }

    printf("Enter elements..\n");
        for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d ",&p[i][j]);
        }
    }

    printf("Before..\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",p[i][j]);
        }
         printf("\n");
    }

    printf("\n");

    //fun1(r,c,p);
    //fun2(r,c,p);
    fun3(r,c,p);

    printf("After..\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }




}

                        /*

                        Before..
                        1 2 3   
                        4 5 6   
                        7 8 9   

                        After.. 
                        9 8 7   
                        4 5 6   
                        3 2 1 

                        */
void fun1(int r,int c,int **p)
{
    int i,j;

    for(i=0;i<r/2;i++)
    {
        for(j=0;j<c;j++)
        {
            int temp=p[i][j];
            p[i][j]=p[r-i-1][c-j-1];
            p[r-i-1][c-j-1]=temp;
        }
    }
}

/*

Before..
1 2 3   
4 5 6   
7 8 9   
        
After.. 
7 8 9   
4 5 6   
1 2 3 

*/
void fun2(int r,int c,int **p)
{
        int i,j;

    for(i=0;i<r/2;i++)
    {
        for(j=0;j<c;j++)
        {
            int temp=p[i][j];
            p[i][j]=p[r-i-1][j];
            p[r-i-1][j]=temp;
        }
    }
}

/*

Before..
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1

After..
0 1 1 1 0
1 0 1 0 1
1 1 0 1 1
1 0 1 0 1
0 1 1 1 0


*/

void fun3(int r,int c,int **p)
{
    
    int i;
    for(i=0;i<r;i++)
    {
        p[i][--c]=0;
        p[i][i]=0;
    }
}
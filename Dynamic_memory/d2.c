#include<stdio.h>
#include<stdlib.h>
void fun1(int,int,int**);//sorting  2d array
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

    fun1(r,c,p);

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
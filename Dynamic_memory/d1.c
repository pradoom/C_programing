#include<stdio.h>
#include<stdlib.h>
#define op 2
#if(op==1)
//2d string in dynamic memory
void fun(char**,int);
void main()
{
    char **p;
    int r,c;
    printf("Enter roll and collom..\n");
    scanf("%d %d",&r,&c);
    p=malloc(sizeof(char*)*r);//number of rows=pointers
    int i;
    for(i=0;i<r;i++)
    {
        p[i]=malloc(sizeof(char)*c);//each pointer having 1xc bytes size
    }

    printf("Enter elements..\n");
    for(i=0;i<r;i++)
    {
        scanf("%s",p[i]);
    }

    fun(p,r);


}
void fun(char**p,int r)
{
int i;
    for(i=0;i<r;i++)
    {
        printf("%s ",p[i]);
    }
}
#elif(op==2)

//2d intiger array in dynamic memeoy
void fun(int**,int,int);
void main()
{
    int r,c;
    int **p;

    printf("Enter roll and collom..\n");
    scanf("%d %d",&r,&c);

    p=malloc(sizeof(int*)*r);

    int i;
    for(i=0;i<r;i++)
    {
        p[i]=malloc(sizeof(int)*c);
    }

    int j;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&p[i][j]);
        }
    }

    fun(p,r,c);


}
void fun(int**p,int r,int c)
{
    int i,j;
        for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",p[i][j]);
        }
    }
}

#endif
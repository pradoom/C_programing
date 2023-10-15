#include<stdio.h>
void fun(int,int,int (*p)[]);
int main()
{
    int r,c;
    printf("Enter row and colloms..\n");
    scanf("%d %d",&r,&c);
    int a[r][c];
    int i,j;
    printf("Enter elements..\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }


    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
   
}

void fun(int r,int c,int (*a)[c])
{
    int i,j;
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            for(int k=0;k<c-j;k++)
            {
            if(a[i][k]>a[i][k+1])
            {
                int temp=a[i][k];
                a[i][k]=a[i][k+1];
                a[i][k+1]=temp;
            }
            }
        }
    }

}
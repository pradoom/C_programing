#include<stdio.h>
struct box
{
    int l;
    int w;
    int h;
};

/*

if number of box are there if box hight is less then 41 it will pass through tunnel
if not ...no multiplication


*/
void box_fun(struct box*,int);
void main()
{
    
    int n,i;
    printf("Enter number of box..\n");
    scanf("%d",&n);
    struct box bx[n];
    printf("Enter Length width and hight..\n");
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&bx[i].l,&bx[i].w,&bx[i].h);
    }


    box_fun(bx,n);



}
void box_fun(struct box *bx,int n)
{
    int i,result;
    for(i=0;i<n;i++)
    {
        if(bx[i].h<41)
        {
            result=(bx[i].h*bx[i].l*bx[i].w);
            printf("MULTIPLICATION IS :%d\n",result);
        }
    }
}
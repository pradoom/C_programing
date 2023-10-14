#include<stdio.h>
void main()
{
    int num,x;
    printf("Enter Number..\n");
    scanf("%d",&num);
    printf("Enter the delete number..\n");
    scanf("%d",&x);
    int i,pos=1,sum=0;
    for(i=num; i ; i=i/100)
    {
        int r=i%100;
        if(r==x)
        {

        }
        else
        {
            sum=sum+r*pos;
            pos=pos*10;
        }
    }
    printf("%d",sum);
}
#include<stdio.h>
void main()
{
    int a,c=0;
    scanf("%d",&a);
    for(int i=31;i>=0;i--)
    {      
    if(a>>i&1)
    {
        c++;
    }

    }
    printf("\n");
    printf("%d\n",c);

    int s1=a&0x00000F00;
    int s2=a&0x0F000000;
    int k=a&0x000000ff;
    int s3=s1<<12;
    int s4=s2>>12;

    int m=s3|s4|k;

    for(int i=31;i>=0;i--)
    {
        printf("%d",a>>i&1);
   
    }
    


}
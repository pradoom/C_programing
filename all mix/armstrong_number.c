#include<stdio.h>
int main()
//write a program to print armstrong number between 1 to 501
{
    int i,j;
 for(i=1;i<=501;i++)
 {
    int num1,sum=0,r=1,c=0;
    

    for(j=i;j;j=j/10)
    c++;

    
    for(num1=i;num1;num1=num1/10)
    {
        int p=1;
        r=num1%10;
        for(j=0;j<c;j++)
        {
            p=p*r;
        }
        sum=sum+p;
        
    }
    
    if (sum==i)
    {
           printf("%d\n",i);
    }
    
 }
}
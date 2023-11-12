// #include<stdio.h>
//  void main()
// {
// int a=(1,2,3,4,5,6);
// prinf("%d\n",a);
// }
int perfect_number(int num);
#include<stdio.h>
void main()
{
    printf("%d\n",perfect_number(4));
}


int perfect_number(int num)
{
    int i,sum=0,flag=0;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
        flag=1;
    }

    return flag;
}
// #include<stdio.h>
//  void main()
// {
// int a=(1,2,3,4,5,6);
// prinf("%d\n",a);
// }

#include<stdio.h>
void main()
{
int i=4,j=8;
i=i|j&j|i;
j=~i;
printf("i= %d j= %d", i ,j);
}
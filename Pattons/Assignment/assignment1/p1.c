#include<stdio.h>
/*
input =0000 0000 0011 1111=63
output=1111 0000 0011 0000

*/
void main()
{
int num,s1,s2,s3,s4,s5,v;
printf("Enter the number..\n");
scanf("%d",&num);

for(int i=31;i>=0;i--)
{
    printf("%d",num>>i&1);
}
printf("\n");

s1=num&0x000F;
s2=s1<<12;
v=num&0x0FF0;
s3=num&0xF000;
s5=num>>12;
s4=s2|v|s5;


for(int i=31;i>=0;i--)
{
    printf("%d",s4>>i&1);
}
printf("\n");



}

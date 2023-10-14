#include<stdio.h>
void main()
{
    unsigned num,s1,s2,s3,s4,s5,s6;
    int i,bit,pos;

    printf("Enter the num bit and pos..\n");
    scanf("%d %d %d",&num,&bit,&pos);
    for (i = 31; i >= 0; i--)
    printf ("%d", num>>i&1);
  printf ("\n");
//num=511 bit=4 pos=2
//00000000 00000000 00000001 11111111
s1=num<<32-pos;
//11000000 00000000 00000000 00000000
s2=num>>bit+pos;
//00000000 00000000 00000000 00000111
s3=s1>>32-pos;
//00000000 00000000 00000000 00000011
s4=s2<<bit+pos;
//00000000 00000000 00000001 11000000

s5=s4|s3;

   for (i = 31; i >= 0; i--)
    printf ("%d", s5>>i&1);
  printf ("\n");















}
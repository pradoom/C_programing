#include<stdio.h>
void main()
{
    unsigned char ch=39,s1,s2,s3,s4,s5,s6;

    int i;

printf("before\n");
    for(i=7;i>=0;i--)
    {
        printf("%d",ch>>i&1);
    }
    printf("\n");

/////////////////////////////////////////////////////////////////

s1=ch<<6;

s2=ch>>3;


s3=s2<<2;


s4=s1>>6;

s5=s3|s4;

    printf("After\n");
    for(i=7;i>=0;i--)
    {
        printf("%d",s5>>i&1);
    }
    printf("\n");



////////////////////////////////////////////////////////////////


}
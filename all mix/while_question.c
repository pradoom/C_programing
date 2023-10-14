// #include<stdio.h>
// void main()
// {
//  char ch='A';
//  switch(ch)
//  {
//  case 8*8+1: printf("if\n");
//  case 'A': printf("else\n");break;
//  default: printf("for\n");
//  }
//  printf("while\n");
// }
#include<stdio.h>
void main()
{
 char i=2;
 int j='0';
 switch(i)
 {
 case 1:printf(" c1 %d",i);
 if(j)
 switch(j)
 {
 case '0':printf(" r0 %c ",i+j);
 case '1':printf(" r1 %c ",i+j);
 }
 case 2:printf("c2 %d",i);
 if(-5)
 switch(j)
 {
 case '0':printf("b0 %c ",i+j);
 case '1':printf("b0 %c ",i+j);
 }
 }
}
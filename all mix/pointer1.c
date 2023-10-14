// 
// #include<stdio.h>
// void main()
// {
//     int i=12,j=17;
//     int *p;
//     p=&i;
//     i=23;
//     p=&i;
//     i=15;
//     printf("%d %d %d",*p,i,j);
// }
#include<stdio.h>
void main()
{
// int *i;
// char *c=2;
// double *d=3;

//     printf("%d %d %d",sizeof(*i),sizeof('3'),sizeof(*d));

int i=5,j;
int *p=&i;//i-->*p
j=++*p;//j=6 i=6;
printf("%d %d %d\n",*p,i,j);
p=&j;
printf("%d %d %d\n",*p,i,j);
j++;

printf("%d %d %d",*p,i,j);

}
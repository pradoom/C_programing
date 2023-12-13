#include<stdio.h>
struct student
{
int roll;
int cgpa;
int sgpa[8];
};
void main()
{
struct student s={12,8,7,2,5,9};
char *ptr;
ptr=(char *)&s;

printf("%d",*(ptr+5));

}
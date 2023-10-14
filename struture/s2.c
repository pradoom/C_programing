#include<stdio.h>
#include<stdlib.h>
struct st
{
    int a;
    float b;
};
void fun(struct st **);
void main()
{
    struct st *p;
    fun(&p);
    p->a=10;
    printf("number : %d\n",p->a);
}
void fun(struct st **p)
{
    *p=malloc(sizeof(struct st));
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct st
{
    int roll;
    char name[10];
    float marks;
    struct sr *next;
};

struct st *head=0;

void add_begin(void);
void print_node(void);
void main()
{
    char op;


while(1)
{
    switch(op)
    {
        case 'a':add_begin();break;
        case 'p':print_node();break;

        case 'x':exit(0);break;
    }
}
}

void add_begin(void)
{
    struct st *new=malloc(sizeof(struct st));

    printf("Enter Name and Marks..\n");
    scanf("%s%f",new->name,&new->marks);

    new->next=head;
    head=new;
}

void print_node(void)
{
    struct st*p=head;

    while(p)
    {
        printf("%s%f",p->name,&p->marks);
        p=p->next;
    }
}
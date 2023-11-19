#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct st
{
    int roll;
    struct st *next;
};
struct st *head;
void add_begin(void);
void print_node(void);
void delete_dup(void);
void main()
{
    int op;
    while(1)
    {
        printf("Enter option 1)add_begin 2)print 3)delete_dup..\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:add_begin();break;
            case 2:print_node();break;
            case 3:delete_dup();break;
            default:exit(0);
        }
    }
}

void add_begin(void)
{
    struct st *new;
    new=malloc(sizeof(struct st));
    printf("Enter rollno...\n");
    scanf("%d",&new->roll);
    new->next=0;
    struct st *last;
    //new->next=head;
    //head=new;
    if(head==0)
    {
        head=new;
    }
    else
    {
        last=head;
        while(last->next)
        {
            last=last->next;
        }
        last->next=new;
    }
}

void print_node()
{
    struct st *ptr=head;
    while(ptr)
    {
        printf("Rollno :%d\n",ptr->roll);
        ptr=ptr->next;
    }
}

void delete_dup(void)
{
    struct st *p1=head,*p2;
    p2=p1->next;
    while(p2->next)
    {
        if(p1->roll==p2->roll)
        {
            p1->next=p2->next;
            free(p2);
            p2=p1->next;
        }
        p2=p2->next;
    }
}
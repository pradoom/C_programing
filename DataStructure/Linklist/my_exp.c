#include<stdio.h>
#include<stdlib.h>

struct st
{
    int roll;
    char name[10];
    float marks;
    struct st *next;
    
};
struct st *head;//global 
void add_begin(void);
void print_node(void);
void save_file(void);
int count_node(void);
void add_end(void);
void add_middel(void);
void main()
{
    int op,c;
    while(1)
    {
        printf("\033[32m Enter choice 1)add_begin 2)print_node 3)save_file 4)save_file 5)add_end 6)add_middel \033[0m\n");
        scanf("%d",&op);
        switch(op)
        {
        case 1:add_begin();break;
        case 2:print_node();break;
        case 3:save_file();break;
        case 4:c=count_node();printf("Count :%d",c);break;
        case 5:add_end();break;
        case 6:add_middel();break;
        default:exit(0);
        }
    }
}

void add_begin(void)
{
    struct st *new;
    new=malloc(sizeof(struct st));
    printf("\033[31m Enter rollno  Name and marks..\033[0m\n");
    scanf("%d%s%f",&new->roll,new->name,&new->marks);
    new->next=head;
    head=new;
    
}

void add_end(void)
{
    struct st *new=head;
    struct st *last;
    new=malloc(sizeof(struct st));
    printf("\033[31m Enter rollno  Name and marks..\033[0m\n");
    scanf("%d%s%f",&new->roll,new->name,&new->marks);
    new->next=0;
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

void print_node(void)
{
    struct st *ptr=head;
    while(ptr)
    {
        printf("\033[33m Roll :%d Name :%s marks:%0.2f \033[0m\n",ptr->roll,ptr->name,ptr->marks);
        ptr=ptr->next;
    }
}

int count_node(void)
{
    struct st *ptr=head;
    int c=0;
    while(ptr)
    {
        c++;
        ptr=ptr->next;
    }
    return c;
}


void save_file(void)
{
    FILE *f=fopen("my_new.txt","w");

    struct st *ptr=head;

    while(ptr)
    {
        fprintf(f,"%d %s %0.2f ",ptr->roll,ptr->name,ptr->marks);
        ptr=ptr->next;
    }
}

void add_middel(void)
{
    //roll no less then put that node in left side if greator then put write hand side
    struct st *new=head;
    struct st *last;
    new=malloc(sizeof(struct st));
    printf("\033[31m Enter rollno  Name and marks..\033[0m\n");
    scanf("%d%s%f",&new->roll,new->name,&new->marks);

   // new->next=0;

    if((head==0)||(new->roll<head->roll))
    {
        new->next=head;
        head=new;
    }
    else
    {
        last=head;
        while((last->next!=0)&&((new->roll)>(last->next->roll)))
        {
            last=last->next;
        }
        new->next=last->next;
        last->next=new;
    }
}
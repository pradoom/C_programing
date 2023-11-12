#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
void task_1(void);
void task_2(void);
int perfect_number(int num);
void delete_any();
void sort_data_roll();
void sort_data_name();
void main()
{
    int op,c;
    while(1)
    {
        printf("\033[32m Enter choice 1)add_begin 2)print_node 3)save_file 4)save_file 5)add_end 6)add_middel 7)task_1 8)task_2 9)delete_any 10) sort_node\033[0m\n");
        scanf("%d",&op);
        switch(op)
        {
        case 1:add_begin();break;
        case 2:print_node();break;
        case 3:save_file();break;
        case 4:c=count_node();printf("Count :%d",c);break;
        case 5:add_end();break;
        case 6:add_middel();break;
        case 7:task_1();break;
        case 8:task_2();break;
        case 9:delete_any();break;
        case 10:sort_data_roll();break;
        case 11:sort_data_name();break;
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
    struct st *new;
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

void task_1(void)
{
    /*
    If my name is present then only creat link else ask user to enter another name 
    */

    struct st *new;
    new=malloc(sizeof(struct st));
    printf("\033[31m Enter rollno  Name and marks..\033[0m\n");
    scanf("%d%s%f",&new->roll,new->name,&new->marks);
    char my_name[10]="pradoom";
    if(strcmp(new->name,my_name)==0)
    {
    new->next=head;
    head=new;
    }
    else
    {
        printf("Enter another name...\n");
        
    }


}

void task_2(void)
{
    /*
        if the rollno is perfect then only store the number
    */
   int flag=0;
   struct st *new;
   new=malloc(sizeof(struct st));
   printf("Enter the rollno name and marks..\n");
   scanf("%d %s %f",&new->roll,new->name,&new->marks);
    
    if(perfect_number(new->roll))
    {
    new->next=head;
    head=new;
    }
    else
    {
        printf("Enter rollno is not a perfect number..\n ");
    }

}

int perfect_number(int num)
{
    int i,sum=0,flag=0;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
        flag=1;
    }

    return flag;
}

void delete_any(void)
{
    struct st *last=head;
    struct st *pre;
    int roll;
    char name[10];
    //printf("Enter rollno you want to delete..\n");
    //scanf("%d",&roll);


    printf("Enter name you want to delete..\n");
    scanf("%s",&name);
    while(last)//till reached last node
    {
        //if(last->roll==roll)//delete by rollno
        if(strcmp(last->name,name)==0)//delete by name
        {
            if(last==head)//if its first node
            {
              head=last->next;
            }
            else//if its middle
            {
                pre->next=last->next;
            }
        }
        pre=last;//always prevous will fallow last one step back
        last=last->next;//go froword
    }
}


void sort_data_roll()
{
    struct st *p1=head,*p2,temp;

    int i,j;
    int count=count_node();
    for(i=0;i<count-1;i++)
    {
        p2=p1->next;
        for(j=0;j<count-i-1;j++)
        {
            if(p1->roll>p2->roll)
            {
                temp.roll=p1->roll;
                strcpy(temp.name,p1->name);
                temp.marks=p1->marks;


                p1->roll=p2->roll;
                strcpy(p1->name,p2->name);
                p1->marks=p2->marks;


                p2->roll=temp.roll;
                strcmp(p2->name,temp.name);
                p2->marks=temp.marks;
            }
            p2=p2->next;
        }
        p1=p1->next;
    }
}

//sort by name
void sort_data_name()
{
    struct st *p1=head,*p2,temp;

    int i,j;
    int count=count_node();
    for(i=0;i<count-1;i++)
    {
        p2=p1->next;
        for(j=0;j<count-i-1;j++)
        {
            if(strcmp(p1->name,p2->name)>0)
            {
                temp.roll=p1->roll;
                strcpy(temp.name,p1->name);
                temp.marks=p1->marks;


                p1->roll=p2->roll;
                strcpy(p1->name,p2->name);
                p1->marks=p2->marks;


                p2->roll=temp.roll;
                strcpy(p2->name,temp.name);
                p2->marks=temp.marks;
            }
            p2=p2->next;
        }
        p1=p1->next;
    }
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
    int roll;
    char name[20];
    float marks;
    struct student *next;
}sll;

void add_begin(sll**);
void add_end(sll**);
void add_middle(sll**);
void print_node(sll*);
int count_node(sll*);
void read_file(sll**);
void file_save(sll*);
void delete_all(sll**);
void delete_anynode(sll**);
void sort_node(sll*);
int main()
{
    int op,a;
    sll *headptr=0;
    while(1)
{
    printf("Enter opteion 1)add_begin 2)add_end 3)add_middle 4)print 5)count_node 6)read_file 7)file_save 9)delete_all 10)delete_any\n");
    scanf("%d",&op);
    switch(op)
    {
        case 1:add_begin(&headptr);break;
        case 2:add_end(&headptr);break;
        case 3:add_middle(&headptr);break;
        case 4:print_node(headptr);break;
        case 5:a=count_node(headptr);printf("Count:%d\n",a);break;
        case 6:read_file(&headptr);break;
        case 7:file_save(headptr);break;
        case 9:delete_all(&headptr);break;
        case 10:delete_anynode(&headptr);break;
        case 11:sort_node(headptr);break;
        case 12:
        case 13:
        case 14:exit(0);
        
        default:printf("Wrong input\n");
        
        
    }
    
}
}

void add_begin(sll **ptr)
{
    sll *new;
    new=malloc(sizeof(sll));
    printf("Enter rolno name and marks..\n");
    scanf("%d%s%f",&new->roll,new->name,&new->marks);
    
    new->next=*ptr;
    *ptr=new;
}

void add_end(sll **ptr)
{
    sll *new,*last;
    new=malloc(sizeof(sll));
    printf("Enter rolno name and marks..\n");
    scanf("%d%s%f",&new->roll,new->name,&new->marks);
    new->next=0;//always
    if(*ptr==0)
    {
        *ptr=new;
    }
    else
    {
        last=*ptr;//always start from start
        while(last->next)
        {
            last=last->next;
        }
        last->next=new;
        
    }
}
    
void add_middle(sll**ptr)
{
    sll *new,*des;
    new=malloc(sizeof(sll));
    printf("Enter rolno name and marks..\n");
    scanf("%d%s%f",&new->roll,new->name,&new->marks);
    
    /*
    In first function call ptr is 0,so condation is true come inside and new->next=*ptr(new->next=0) and now 
    head pointing to new node by line *ptr=new
    
    In second function call if the roll number of new created node is less the old node the we have to put athet 
    node before old node.
    
    */
    
    if((*ptr==0)||(new->roll)<((*ptr)->roll))//take care of brackets
    {
        new->next=*ptr;
        *ptr=new;
    }
    else
    {
        
        /*
        After 1st function call now only one node is created and that node next is 0.now we created new node
        so (des->next!=0) condaction will fail because first node have next is 0.so we assign new->nxst to zero
        (new->next=des->next) and and connect new node with previous node(des=new;)
        
        if we call 3rd time function and now des pointing to 1st node and it is not zero(des->next) 
        && if roll number is grater then new node both condation is true then (des=des->next) go froword
        till not find des=0 if it filnd 0 
        
        
        
        
        */
        des=*ptr;
        if((des->next!=0)&&((new->roll)>(des->next->roll)))
        {
            des=des->next;
        }
        new->next=des->next;
        des=new;
    }
}

void print_node(sll*ptr)
{
    if(ptr==0)
    {
        printf("No records present..\n");
        return;
    }
    while(ptr)
    {
        printf(" Rollno:%d Name:%s marks:%0.2f\n",ptr->roll,ptr->name,ptr->marks);
        ptr=ptr->next;
    }
}

int count_node(sll*ptr)
{
    int count=0;
    if(ptr==0)
    {
        printf("No records present..\n");
        return 0;
    }
    while(ptr)
    {
        count++;
        ptr=ptr->next;
    }
    return count;
}

void read_file(sll **p)
{
    FILE *f=fopen("t1.txt","r+");
    if(f==0)
    {
        printf("No file found..\n");
        return;
    }

    sll *last,*new;
    while(1)
    {
        new=malloc(sizeof(sll));
        if(fscanf(f,"%d %s %0.2f",&new->roll,new->name,new->marks)==-1)
        {
            break;
        }

        new->next=0;
        if(*p==0)
        {
            *p=new;
        }
        else
        {
            last=*p;
            while(last->next)
            {
                last=last->next;
            }
            last->next=new;
        }
    }
}



void file_save(sll*p)
{
    if(p==0)
    {
        printf("No records");
    }

    FILE *f=fopen("t1.txt","w");

    while(p)                                //travel or read data from all nodes till end
    {                     //give space there
        fprintf(f,"%d %s %0.2f ",p->roll,p->name,p->marks);//put data in file after enternig data
        p=p->next;                         //every time move to next node
    }
     fclose(f);
}



void delete_all(sll**ptr)
{
    if(*ptr==0)
    {
        printf("No record found..\n");
        return;
    }

    sll *delete=*ptr;

    while(delete)
    {
        *ptr=delete->next;
        free(delete);
        delete=*ptr;
    }
    printf("All DATA DELETED...\n");
}


void delete_anynode(sll**ptr)
{
    if(*ptr==0)
    {
        printf("No records presents..\n");
        return;
    }
    char name[20];
    printf("Enter name you want to delete records..\n");
    scanf("%s",name);
    sll*delete=*ptr;
    sll *pre=0;




    while(delete)
    {
        if((strcmp(delete->name,name)==0))
        {
            if(delete==*ptr)//if its first node
            {
                *ptr=delete->next;
            }
            else//if middle of last node
            {
                pre->next=delete->next;
            }

            free(delete);
            //return;
        }

        pre=delete;// fallow delete one setp back
        delete=delete->next;//visite next node;
    }

}

void sort_node(sll*ptr)
{


    sll *p1=ptr,*p2,temp;


    int i,j;
    int c=count_node(ptr);
    printf("count :%d\n",c);
    for(i=0;i<c;i++)
    {
        p2=p1->next;
        for(j=0;j<c-i-1;j++)
        {
            if((p1->roll)>(p2->roll))
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























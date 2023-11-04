#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
    int roll;
    char name[10];
    struct student *next;
}sll;


void add_begin(sll**);
void printf_data(sll*);
int count_node(sll*);
void file_save(sll*);
void add_mid(sll**);
void read_file(sll**);


void main()
{
    sll *headptr=0;
    int op;

    int cou_node=0;
while(1)
{
    printf("Enter option new node\n");
    scanf("%d",&op);
    switch(op)
    {
        case 1 :add_begin(&headptr);break;
        case 2 :printf_data(headptr);break;
        case 3 : cou_node=count_node(headptr);printf(" Count = %d\n",cou_node);break;
        case 4 :file_save(headptr);break;
        case 5 :add_mid(&headptr);break;
        case 6 :read_file(&headptr);break;
        case 7 :delete_all(&headptr);break;
        case 8 :exit(0);
        default:printf("Wrong input..\n");
    }
}

}



void add_begin(sll **p)
{
    sll *new=malloc(sizeof(struct student));//point to new node
    printf("Enter rollno and name..\n");
    scanf("%d %s",&new->roll,new->name);
    
    new->next=*p;//update newely created node address

    *p=new;      //assign new address to ptr

}

void printf_data(sll *p)
{
    /*
    here we have taken new pointer for printing nods value.
    it will move next by next link address and printf the node data
    */
    if(p==0)
    {
        printf("No node present..\n");
    }

    while(p)
    {
        printf("rollno= %d name=%s\n",p->roll,p->name);
        p=p->next;//visite next node
    }
}

int count_node(sll *p)
{
    if(p==0)
    {
        printf("No node present..\n");
        return 0;
    }
    int c=0;
    while(p)
    {
        c++;
        p=p->next;//visite next node 
    }

    return c;
}



void file_save(sll*p)
{
    if(p==0)
    {
        printf("No records");
    }

    FILE *f=fopen("t1.txt","w");

    while(p)                                //travel or read data from all nodes till end
    {
        fprintf(f,"%d %s ",p->roll,p->name);//put data in file after enternig data
        p=p->next;                         //every time move to next node
    }
     fclose(f);
}


void add_mid(sll**p)
{
    sll *new,*des;
    new=malloc(sizeof(sll));
    printf("Enter rollno and name..\n");
    scanf("%d %s",&new->roll,new->name);

    if(*p==0   ||   (new->roll<(*p)->roll))
    {
         new->next=*p;
         *p=new;
    }
    else
    {
        des=*p;
        while((des->next!=0)&&(new->roll>des->next->roll))
        {
            des=des->next;
        }
        new->next=des->next;
        des->next=new;
    }

}

void read_file(sll **p)
{
    FILE *f=fopen("t1.txt","r");
    if(f==0)
    {
        printf("No file found..\n");
        return;
    }

    sll *last,*new;
    while(1)
    {
        new=malloc(sizeof(sll));
        if(fscanf(f,"%d %s",&new->roll,new->name)==-1)
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
#include<stdio.h>
typedef struct student
{
    int roll;
    char name[10];
    struct student *next;
}SLL;

void add_mid(SLL**);
void main()
{
    SLL *headptr=0;
    add_mid(&headptr);
}

void add_mid(SLL**p)
{
    SLL *new,*des;
    new=malloc(sizeof(SLL));
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
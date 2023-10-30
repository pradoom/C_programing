#include"add_begin.c"


void add_begin(sll **p)
{
    sll *new=malloc(sizeof(struct student));//point to new node
    printf("Enter rollno and name..\n");
    scanf("%d%s",&new->roll,new->name);
    
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
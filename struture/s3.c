#include<stdio.h>
#include<string.h>
struct st
{
    int roll;
    char name[10];
    float marks;
};
void sort_by_name(struct st v[],int n);
//sort structure my there name
void main()
{
    int n=5;
    struct st v[n],temp;

    int i,j;
    printf("Enter rollno name and marks..\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %s %f",&v[i].roll,v[i].name,&v[i].marks);
    }

    sort_by_name(v,n);

    for(i=0;i<n;i++)
    {
        printf(" Rollno :%d Name :%s Marks:%0.2f\n",v[i].roll,v[i].name,v[i].marks);
    }
}

void sort_by_name(struct st v[],int n)
{
    int i,j;
    struct st temp;
        for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strcmp(v[j].name,v[j+1].name)>0)
            {
                temp.roll=v[j].roll;
                strcpy(temp.name,v[j].name);
                temp.marks=v[j].marks;

                v[j].roll=v[j+1].roll;
                strcpy(v[j].name,v[j+1].name);
                v[j].marks=v[j+1].marks;

                v[j+1].roll=temp.roll;
                strcpy(v[j+1].name,temp.name);
                v[j+1].marks=temp.marks;
            }

        }
    }
}
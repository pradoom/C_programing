#include<stdio.h>
#include<stdlib.h>
struct st
{
    int rollno;
    char ch[10];
    float f;
};
void main()
{
    struct st v,**p;
    int n=3;

    p=malloc(sizeof(struct st*)*n);

    int i;
    for(i=0;i<n;i++)
    {
        p[i]=malloc(sizeof(struct st));
    }

    for(i=0;i<n;i++)
    {
        prinf("Enter rollno..\n");
        scanf("%d",&p[i]->rollno);
        prinf("Enter name..\n");
        scanf("%s",p[i]->ch);
        prinf("Enter marks..\n");
        scanf("%d",&p[i]->f);
    }

    int j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            
        }
    }

}
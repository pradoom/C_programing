#include<stdio.h>
#include<string.h>
#define op 11
#if(op==1)

void main()
{
struct result
{
int marks;
char grade;
};
struct result Al, Bl;
Al.marks=80; Al.grade='A';
Bl=Al;
printf("Marks=%d\t",Bl.marks);//80
printf("Grade=%c\n",Bl.grade);//A
}




#elif(op==2)


int main (void)
{
struct rec
{
char *name;
int age;
}*ptr;
char name[10]="Somalika";
ptr=(struct rec *)malloc(sizeof(struct rec));
ptr->name=name;
ptr->age=93;
printf ("%s\t" ,ptr->name);//"Somalika"
printf("%d\n",ptr->age);   //93
}



#elif(op==3)
struct student {char name[20];int age;};
void main()
{
    struct student stu1={"Anita",10},stu2={"Anita",12};
    if(stu1==stu2)//Error, since relational operators can't be used with structures. If we want to compare them then we'll have to compare all
//the members one by one.
    printf("Same\n");
    else
    printf("Not same\n");
    return 0;
}
#elif(op==4)

void func(struct tag v);

int main(void)
{
struct tag
{
int i;
char c;
};//error should be declare globler
struct tag var= {2,'s'};
func(var);
}
void func(struct tag v)
{
printf("%d %c\n",v.i,v.c);
}


#elif(op==5)
void func(struct tag v);
int main(void)
{
struct tag
{
int i;
char c;
};
struct tag var= {2,'s'};
func(var.i,var.c);
}
void func{struct {inti; char c;} v)
{
printf("%d %c\n",v.i,v.c);
}
#elif(op==6)
void main()
{
    struct emp
    {
        char name[25];
        char *s;
        int age;
        float bs;
    };
    struct emp e;
   // e.name="Rahul";//error
   e.s="rao";//valid
   strcpy(e.name,"rahul");
    e.age=25;
    printf("%s %d %s",e.name,e.age,e.s);

}
#elif(op==7)
struct course
{
    int courseno;
    char name[25];
};
void main()
{
    struct course c[]={

        {102,"hello"},
        {122,"rao"},
        {324,"uroe"}
    };

    printf("%d ",c[1].courseno);
    printf("%s ",(*(c+2)).name);
}
#elif(op==8)
void main()
{
    struct value
    {
            int bit1 :1;
            int bit3 :4;
            int bit4 :4;
    }bit ={1,2,2};
    printf("%d %d %d ",bit.bit1,bit.bit3,bit.bit4);//-1 2 2
}
#elif(op==9)
void main()
{
    //enum
    enum day{mon=-1,tue,wed=6,thu,fri,sat};
   // printf("%d %d %d %d %d",++mon,tue,wed,thu,fri,sat);//++mon error
    printf("%d %d %d %d %d",1+mon,tue,wed,thu,fri,sat);//no error 0 0 6 7 8 
}
#elif(op==10)
void main()
{
    enum status{pass,fail,atkt};
    enum status s1,s2,s3;
    s1=pass;
    s2=fail;
    s3=atkt;
    printf("%d %d %d",s1,s2,s3);

}
#elif(op==11)
void main()
{
    union
    {
        struct {
           char c[2];
            char ch[2];
        }s;
        struct{

            short int i;
            short int j;
        }st;
    }u={12,1,15,1};
    printf("%d %d ",u.st.i,u.st.j);//268 271 how?
}
#elif(op==12)
void main()
{

}
#elif(op==13)
void main()
{

}
#elif(op==14)
void main()
{

}
#elif(op==2)
void main()
{

}
#elif(op==2)
void main()
{

}
#elif(op==2)
void main()
{

}
#elif(op==2)
void main()
{

}
#elif(op==2)
void main()
{

}
#elif(op==2)
void main()
{

}

#endif
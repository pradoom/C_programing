#include<stdio.h>
#define op 5
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
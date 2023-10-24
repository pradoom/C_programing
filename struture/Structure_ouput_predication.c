#include <stdio.h>
#include <string.h>
#define op 20
#if (op == 1)

void main()
{
    struct result
    {
        int marks;
        char grade;
    };
    struct result Al, Bl;
    Al.marks = 80;
    Al.grade = 'A';
    Bl = Al;
    printf("Marks=%d\t", Bl.marks); // 80
    printf("Grade=%c\n", Bl.grade); // A
}

#elif (op == 2)

int main(void)
{
    struct rec
    {
        char *name;
        int age;
    } *ptr;
    char name[10] = "Somalika";
    ptr = (struct rec *)malloc(sizeof(struct rec));
    ptr->name = name;
    ptr->age = 93;
    printf("%s\t", ptr->name); //"Somalika"
    printf("%d\n", ptr->age);  // 93
}

#elif (op == 3)
struct student
{
    char name[20];
    int age;
};
void main()
{
    struct student stu1 = {"Anita", 10}, stu2 = {"Anita", 12};
    if (stu1 == stu2) // Error, since relational operators can't be used with structures. If we want to compare them then we'll have to compare all
        // the members one by one.
        printf("Same\n");
    else
        printf("Not same\n");
    return 0;
}
#elif (op == 4)

void func(struct tag v);

int main(void)
{
    struct tag
    {
        int i;
        char c;
    }; // error should be declare globler
    struct tag var = {2, 's'};
    func(var);
}
void func(struct tag v)
{
    printf("%d %c\n", v.i, v.c);
}

#elif (op == 5)
void func(struct tag v);
int main(void)
{
    struct tag
    {
        int i;
        char c;
    };
    struct tag var = {2, 's'};
    func(var.i, var.c);
}
void func(struct {inti; char c; } v)
{
    printf("%d %c\n", v.i, v.c);
}
#elif (op == 6)
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
    e.s = "rao"; // valid
    strcpy(e.name, "rahul");
    e.age = 25;
    printf("%s %d %s", e.name, e.age, e.s);
}
#elif (op == 7)
struct course
{
    int courseno;
    char name[25];
};
void main()
{
    struct course c[] = {

        {102, "hello"},
        {122, "rao"},
        {324, "uroe"}};

    printf("%d ", c[1].courseno);
    printf("%s ", (*(c + 2)).name);
}
#elif (op == 8)
void main()
{
    struct value
    {
        int bit1 : 1;
        int bit3 : 4;
        int bit4 : 4;
    } bit = {1, 2, 2};
    printf("%d %d %d ", bit.bit1, bit.bit3, bit.bit4); //-1 2 2
}
#elif (op == 9)
void main()
{
    // enum
    enum day
    {
        mon = -1,
        tue,
        wed = 6,
        thu,
        fri,
        sat
    };
    // printf("%d %d %d %d %d",++mon,tue,wed,thu,fri,sat);//++mon error
    printf("%d %d %d %d %d", 1 + mon, tue, wed, thu, fri, sat); // no error 0 0 6 7 8
}
#elif (op == 10)
void main()
{
    enum status
    {
        pass,
        fail,
        atkt
    };
    enum status s1, s2, s3;
    s1 = pass;
    s2 = fail;
    s3 = atkt;
    printf("%d %d %d", s1, s2, s3);
}
#elif (op == 11)
void main()
{
    union
    {
        struct
        {
            char c[2];
            char ch[2];
        } s;
        struct
        {

            short int i;
            short int j;
        } st;
    } u = {12, 1, 15, 1};
    printf("%d %d ", u.st.i, u.st.j); // 268 271 how?
}
#elif (op == 12)

struct sample
{
    int a;
} sample;

int main()
{
    sample.a = 100;         // No error
    printf("%d", sample.a); // No error output is 100
    return 0;
}

#elif (op == 13)

struct sample
{
    int a;
};

int main()
{

    struct sample sample = {0, 9, 7}; // No error
    // sample.a = 100;//No error
    printf("%d", sample.a); // No error output is 100
    return 0;
}

#elif (op == 14)
void main()
{

    union test
    {
        int i;
        int j;
    };

    union test var = 10; // Error invalid initializer
    var.i = 10;          // No error
    printf("%d, %d\n", var.i, var.j);
}
#elif (op == 15)
/*
Assume that objects of the type short, float and long occupy 2 bytes, 4 bytes and 8 bytes,
 respectively. The memory requirement for variable t, ignoring alignment considerations,
 is (GATE CS 2000)
*/
// ans short s[5] will give 2x5=10  + long 8 bytes=18 bytes
struct
{
    short s[5];
    union
    {
        float y;
        long z;
    } u;
} t;
#elif (op == 16)

/*

Since x and arr[4] share the same memory, when we set x = 0, all characters of arr are set as 0.
O is ASCII value of '\0'. When we do "t.arr[1] = 'G'", arr[] becomes "\0G\0\0". When we print a string using "%s",
the printf function starts from the first character and keeps printing till it finds a \0. Since the first character
itself is \0, nothing is printed.

*/
union test
{
    int x;
    char arr[4];
    int y;
};

int main()
{
    union test t;
    t.x = 0;
    t.arr[1] = 'G';
    printf("%s", t.arr);
    return 0;
}

#elif (op == 17)











struct tag
{
    int i;
    char c;
};
void func(struct tag);
int main(void)
{
    struct tag var = {12, 'c'};
    func(var);
    printf("%d\n", var.i);
    return 0;

}
    void func(struct tag var)//function will not modify the structure value
    {
        var.i++;
    }














#elif (op == 18)












#include <stdio.h>

struct tag
{
    int i;
    char c;
};
void func(struct tag*);
int main(void)
{
    struct tag var = {12, 'c'};
    func(&var);//if we pass addres of structure it will modefy value in of structure memner
    printf("%d\n", var.i);
    return 0;

}
    void func(struct tag *var)
    {
        var->i++;
        var->i++;
    }



#elif (op == 19)
#include<string.h>
#include<stdlib.h>
typedef struct{char name[20]; int age;}stu;
typedef struct{int data; node *link;}node;//error
int main(void)
{
stu *p=malloc(sizeof(stu));
node *ptr= malloc(sizeof(node));
p->age=30;
ptr->data=3;
printf ("%d %d\n" ,p->age,ptr->data);
return 0;
}





#elif (op == 20)
#include<string.h>
#include<stdlib.h>
typedef struct{char name[20]; int age;}stu;
typedef struct{int data;}node;//no error
int main(void)
{
    
stu *p=malloc(sizeof(stu));
node *ptr= malloc(sizeof(node));
p->age=30;
ptr->data=3;
printf ("%d %d\n" ,p->age,ptr->data);
return 0;
}

#endif
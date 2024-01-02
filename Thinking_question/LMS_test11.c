#include <stdio.h>
#include <string.h>
#define OP 13
#if (OP == 1)
void main()
{
    const int a[5] = {10, 11, 12, 13, 14}, *p;
    p = &a[2];
    *p = 15; // error: assignment of read-only location '*p
    printf("%d", a[2]);
}

#elif (OP == 2)
void main()
{
    const int a[5] = {10, 11, 12, 13, 14}, *p;
    a[2] = 4; // assignment of read-only location 'a[2]'
    printf("%d", a[2]);
}

#elif (OP == 3)
void main()
{
    int i, arr[5] = {25, 30, 35, 40, 45}, *p;
    p = &arr[4];
    for (i = 0; i < 5; i = i + 3)
    {
        printf("%d ", *(p - i)); // 45 30
    }
}

#elif (OP == 4)
void main()
{
    int p[5] = {1, 3, 5, 7, 9}, *a;
    a = &p[2];
    printf("%d ", *(a + 2) - 3);
}

#elif (OP == 5)
void main()
{
    int *p[5] = {1, 3, 5, 7, 9};
    p = 13;  // wrong
    p[0] = 3 // right
        printf("%d", *p);
}

#elif (OP == 6)
void main()
{
    int s[4] = {1, 2, 3, 4};
    int *p = s;
    printf("%d ", s[*p]); // 2 how?
}

#elif (OP == 7)
void main()
{
    int a[4] = {11, 22, 33, 44};
    int p[4];
    p = a; // error: assignment to expression with array type
    printf("%d ", p[1]);
}

#elif (OP == 8)
void main()
{
    int a[4] = {11, 22, 33, 44};
    int p[4];
    p[0] = a;            // a address is assigned to p of 0 location
    printf("%d ", p[0]); // 6422288
    printf("%d ", a);    // 6422288
}

#elif (OP == 9)
void main()
{
    int a[5] = {1, 2, 3, 4};
    char *p;
    p = &a+1;
    // if(p-4==a+4)
    // printf("%d",p[-20]+1);
    printf("%d", *p);
}

// LMS test 12

#elif (OP == 10)
void main()
{
    char *s = "hello";
    char *n = "india";
    char *p = n - s; // expression must have integral type
    printf("%c",*p);
}

#elif (OP == 11)
void main()
{
    char s[] = "cricket";
    int x = 1, y;
    y = x++;
    printf("%c", s[++y + x]);
}

#elif (OP == 12)
void main()
{
    int i;
    char f[10] = "india";
    for (i = 0; i < 3; i++)
    {
        f[i] += i;
        printf("%c", f[i]);
    }
}

#elif (OP == 13)
void main()
{
    int i;
    char f[] = "india flag";
    printf("%400.4s", f);
}

#elif (OP == 14)
void main()
{
    char *s = "hello";
    char *p = s + 1;
    printf("%c %c", p[0], s[1]);
}
// test12
#elif (OP == 15)
int output(int i, int j)
{
    return (j, i);
}
void main()
{
    int a, b;
    a = output(5, 10);
    b = output(10, 5);
    printf("%d %d\n", a, b);
}

#elif (OP == 16)
void m(int *p)
{
    int i;
    for (i = 0; i < 3; i++)
        printf("%d ", p[i]);
}
void main()
{
    int a[2] = {6};
    m(a);
}

#elif (OP == 17)
void main()
{
    char *s1 = "india";
    char *s2 = "bharat";
    strcpy(s2, s1);
    printf("%s", *s2);
}

#elif (OP == 18)
void fun(int *p)
{
    int i = 10;
    p = &i;
    printf("%d ", p[0]);
}
void main()
{
    int ary[4] = {8, 2, 3, 4};
    fun(ary);
    printf("%d ", ary[0]);
}

#elif (OP == 19)
void f()
{
    printf("hi");
}
void main()
{
    int a = 10;
    a = f(); // error
    printf("%d", a);
}

#elif (OP == 20)
int fun()
{
    printf("odd");
    return 10;
}
void main()
{
    int a;
    printf("even");
    a = fun();
}
// end test12
// pointer lms
#elif (OP == 21)
void foo(int *p)
{
    printf("%d\n", *p);
}
int main()
{
    int i = 10, j = 20, *p = &i;
    foo(p++);//10
    foo(p);//6422296
}

#elif (OP == 22)
void foo(int *p)
{
int j = 2;
p = &j;
printf("%d ", *p);
}

int main()
{
int i = 97, *p = &i;
foo(&i);
printf("%d ", *p);
}


#elif (OP == 23)
void main()
{
const int ary[4] = {1,2,3,4};
int *p = ary+3;
*p = 5;
ary[3] = 6;//expression must be a modifiable lvalue error
printf(“%d”,ary[3]);
}

#elif (OP == 24)
void main()
{
char *p = "Hai friends", *p1 = p;
while(*p!='\0');//infinite loop
++*p++;
printf("%s %s\n",p,p1);
}

#elif (OP == 25)
void main()
{
char *x = "VECTOR";
printf("%s\n",x+3);
printf("%d\n"+1);
}

#elif (OP == 26)
void main()
{
char a[ ] = "abcdefgh";
int *ptr =a;
//printf("%x %x\n",ptr[0],ptr[1]);//64636261 68676665
printf("%d\n",*ptr);//1684234849
}

#elif (OP == 27)
void main()
{
char *str= "hello, world";
char *strc= "good morning";
strcpy(strc, str);
printf("%s", strc);
}

#elif (OP == 28)
void main()
{
char *str = "hello, world\n";
str[5] = '.';
printf("%s\n", *str);
}
//string
#elif (OP == 29)
void main()
{
    char s[20]="hellorao";
    char d[30];
    strcpy(d,s);
    printf("%s ",d);
}

#elif (OP == 30)
void main()
{
    char s[20]="hellorao";
    char d[30]="pradoom ";
    //strcat(d,s);
    strncat(d,s,6);
    printf("%s ",d);
}

#elif (OP == 31)
void main()
{
    char s[20]="a";
    char d[30]="1";
   // int a=strcmp(s,d);
    int a=strncmp(s,d,2);
    printf("%d\n",a);
}

#elif (OP == 32)
void main()
{
    char s[]="hellorao";
    char d[]="rocket";
    strcpy(d,s);
    printf("%s ",d);
}

#elif (OP == 33)
void main()
{
    char s[]="hellorao";
    char d='a';
    int a=strchr(d,s);
    printf("%d ",a);
}

#elif (OP == 34)
void main()
{

}

#elif (OP == 35)
void main()
{

}

#elif (OP == 36)
void main()
{

}

#elif (OP == 37)
void main()
{

}

#elif (OP == 34)
void main()
{

}

#elif (OP == 35)
void main()
{

}

#elif (OP == 36)
void main()
{

}

#elif (OP == 37)
void main()
{
    
}
#endif
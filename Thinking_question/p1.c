#include <stdio.h>
#define OP 4
#if (OP==1)
int main()
{
    int a[10]={10,20,30,40,50};
    int *p=a;
    p++;
    ++*p;
    printf("%d\n",*(a+1));
}

#elif(OP==2)
int main()
{
    int a[10]={10,20,30,40,50};
    char *p=(char*)a;
        //[10 0 0 0,20 0 0 0,30 0 0 0,40 0 0 0]
    p++;//    |
    p++;//      |
    p++;//        |
    p++;//           |

    printf("%d\n",*p);
}
#elif(OP==3)
int main()
{
    //bineary printing of float
    float f=23.5;
    int *p,pos;
     p=(int*)&f;
    //p=&f;//warning: assignment from incompatible pointer type
    for(pos=31;pos>=0;pos--)
    {
        printf("%d",*p>>pos&1);
    }
    printf("\n");
}
#elif(OP==4)
int main()
{
    char ch='i';
    void *p;
    p=&ch;
   // printf("%c\n",*(char*)p);//a
   printf("%c\n",*(char)*p);//error: invalid use of void expression
    

}
#endif
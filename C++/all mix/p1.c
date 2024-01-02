#include<stdio.h>

union p1
{
    struct p2
    {
        char c1[2];
        char c2[2];
    }s1;
    struct p3
    {
        short int i1;//
        short int i2;//
    }s2;
}u={12,1,15,1};

int main()
{
    printf("%d %d\n",u.s2.i2,u.s2.i1);

}
#include<stdio.h>
void main()
{
    char **p[][10]={"hello","rao","pradoom"};

    printf("%s\n",**p);
}
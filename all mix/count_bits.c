#include<stdio.h>
void main()
{
    int num=123,pos=31,c=0;
    L1:
    if(num>>pos&1)
    c++;
    pos--;

    if(pos>=0)
    goto L1;
    
    printf("%d",c);

}
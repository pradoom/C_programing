#include<stdio.h>
void main()
{
    char s[20]="radar";
    int i,j,size;
    for(i=0;s[i];i++);
    size=i;
    int flag=0;
printf("%d\n",size);
    for(i=0,j=size-1;i<j;i++,j--)
    {
        if(s[i]!=s[j])
        {
            flag=1;
            break;
        }
    }

if(flag)
{
    printf("Not Same\n");
}
else
{
    printf("Same\n");
}

}
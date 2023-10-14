#include<stdio.h>
//input a[10]={11,-22,-3,44,-2}
//output a[10]={-22,-3,-2,11,44}
void main()
{
 int a[6]={11,-22,-3,44,-2,-66};
//int a[6]={-11,22,-33,44,55,-66};

int s=0,e=5;

while(s<e)
{
    if(a[s]<0)
    {
        s++;
    }
    else if(a[e]>0)
    {
        e--;
    }
    else if(a[s]>0&&a[e]<0)
    {
        int temp=a[s];
        a[s]=a[e];
        a[e]=temp;
        s++;
        e--;
    }
}

for(int i=0;i<5;i++)
{
    printf("%d ",a[i]);
}


}
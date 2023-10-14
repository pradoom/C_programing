#include<stdio.h>
#define pf printf
#define sf scanf
int rec_fun_count(int *,int);
void main()
{
    int n,i;
    pf("Enter array size..\n");
    sf("%d",&n);
    int a[n];
    pf("Enter elements..\n");
    for(i=0;i<n;i++)
    {
        sf("%d",&a[i]);
    }

    int count=rec_fun_count(a,n);

    printf("Count: %d",count);

}

int rec_fun_count(int *p,int n)
{
    static int i=0,c=0;
    if(p[i]<=99 && p[i]>=39)
    {
        c=c+1;
    }
    i=i+1;

    if(i<n)
    rec_fun_count(p,n);

    return c;
}
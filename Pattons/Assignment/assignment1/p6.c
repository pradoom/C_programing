#include <stdio.h>

int
main ()
{

  int num,p;
  scanf ("%d %d", &num,&p);

  int i, j;
  printf ("Before reverse \n");

  for (i = 31; i >= 0; i--)
    printf ("%d", num >> i & 1);

  printf ("\n");
////////////////////////////////////////////////////////////////////////
for(i=0,j=31;i<j;i++,j--)
{
    int m,n;
    m=num>>i&1;
    n=num>>j&1;

    if(m!=n)
    {
        num=num^1<<j;
        num=num^1<<i;
    }
}
///////////////////////////////////////////////////////////////////////
  printf ("After reverse \n");

  for (i = 31; i >= 0; i--)
    printf ("%d", num>> i & 1);

  printf ("\n");
}


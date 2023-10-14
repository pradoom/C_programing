#include <stdio.h>

int
main ()
{
  unsigned char a;
  int p;
  scanf ("%c %d", &a,&p);

  int i, j;
  printf ("Before reverse \n");

  for (i = 7; i >= 0; i--)
    printf ("%d", a >> i & 1);

  printf ("\n");
////////////////////////////////////////////////////////////////////////
  for (i = 0, j = 7; i < p; i++, j--)
    {
      int m, n;
      m = a >> i & 1;//bit set or not
      n = a >> j & 1;//bit set or not

      if (m != n)
	{
	  a = a ^ 1 << j;
	  a = a ^ 1 << i;
	}
    }
///////////////////////////////////////////////////////////////////////
  printf ("After reverse \n");

  for (i = 7; i >= 0; i--)
    printf ("%d", a >> i & 1);

  printf ("\n");
}


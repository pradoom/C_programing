#include<stdio.h>
void main()
{
    // unsigned short int num,n,r;
    unsigned char num,n,r;
    printf("Enter the number..\n");
    scanf("%d",&num);
        int i;
    
    for (i = 7; i >= 0; i--)
    printf ("%d", num>>i&1);

    printf ("\n");

    n=num;
    for(i=4;i>=1;i--)//5 times rotate45
    {
        r=n&1;
        n=n>>1;

        if(r)
        {
            n=n|1<<7;
        }
        
    }

    for (i = 7; i >= 0; i--)
    printf ("%d", n>>i&1);

  printf ("\n");
}

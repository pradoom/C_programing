#include<stdio.h>
void main()
{
//     /*

// 1234567
// abcde
// 123
// a
//    */
   int i,j,space;
     char ch;
//     for(i=0;i<4;i++)
//     {
//         for(j=1,ch='a';j<=7-i*2;j++,ch=ch+1)
//         {
//             if(i%2==0)
//             {
//                 printf("%d ",j);
//             }
//             else
//             {
//                 printf("%c ",ch);
//             }
//         }
//         printf("\n");
//     }

/*

     Z
    ZY
   ZYX
  ZYXW
 ZYXWV

*/

// for(i=0;i<5;i++)
// {
//     for(space=0;space<=4-i;space++)
//     {
//             printf(" ");
//     }


//     for(j=0,ch='Z';j<=i;j++,ch--)
//     {
//         printf("%c",ch);
//     }
//     printf("\n");
// }


/*

      Z
    Z Y X
  Z Y X W V
Z Y X W V U T

*/

// for(i=1;i<8;i++)
// {
//     if(i%2==0)
//     {
//         continue;
//     }
//     else 
//     {
//     for(space=0;space<7-i;space++)
//     {
//         printf(" ");
//     }

//     for(j=1,ch='Z';j<=i;j++,ch--)
//     {
//         printf("%c ",ch);
//     }

//     printf("\n");
//     }

// }
int k;
for(i=0;i<5;i++)
{
k=i;
    for(j=1;j<=9;j++)
    {
        if(j>=6-i&&j<=4+i)
        {
            printf("%d",k);
                if(j>=5)
                 k--;
                 else
                k++;
        }
        else
        {
            printf(" ");
        }
    }
    printf("\n");
}
}


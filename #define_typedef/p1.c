#include<stdio.h>
//typedef int a[2];
// void main()
// {
//     a p;

//     printf("Sizeof %d\n",sizeof(p));
// }


//-----------------------------------------------------------------//
// #define int char
// #define char float
// #define float int
// void main()
// {
    
//     printf("Sizeof %d\n",sizeof(int));
//     printf("Sizeof %d\n",sizeof(char));
//     printf("Sizeof %d\n",sizeof(float));
// }

//-----------------------------------------------------------------//

// #define PROD(x,y) ((x)*(y))
// int main(void)
// {
// int a=3,b=4;
// printf("Product of a and b=%d",PROD(a,b));
// return 0;
// }


// #define A 50
// #define B A+100
// int main(void)
// {
// int i,j;
// i=B/20;//   A+100/20=55
// j=500-B;//  500-B = 500-A+100 = 600-50=550
// printf("i=%d,j=%d\n",i,j);
// return 0;
// }




// #define ABS(x) ((x)<0?-(x):(x))
// int main(void)
// {
// int array[4]={1,-2,3,-4};
// int *p=array+3;
// while(p>=array)//no error
// {
// printf("%d",ABS(*p));
// p--;
// return 0;
// }
// }




// #define . ;//error: macro names must be identifiers
// int main(void)
// {
// printf("If the lift to success is broken,").
// printf("Try the stairs.").
// }




// #define CUBE(x) ((x)*(x)*(x)) //((i++)*(i++)*(i++))  1*2*3  = 6
// int main(void)
// {
// int i=1;
// while (i<=8)
// printf ("%d\n", CUBE(i++)) ;// i=1
// return 0;
// }



// #define SWAP(dtype,x,y) { dtype t; t=x+y, x=t-x, y=t-y; }
// int main(void)
// {
// int a=1, b=2, x=3, y=4, s=25, t=26;
// SWAP (int, a, b)
// SWAP(int,x,y)
// SWAP (int, s, t)
// printf("a=%d, b=%d, x=%d, y=%d, s=%d, t=%d\n",a,b,x,y,s,t);
// }



// #define y 10
// int main(void)
// {
// #if (x||y && z)
// printf("Sea in Depth\n");
// #else
// printf("See in depth %d\n",x);
// #endif
// return 0;
// }



// #define PRINT1(message) printf(message)
// #define PRINT2(message) printf("message")
// #define PRINT3(message) printf(#message)
// int main(void)
// {
// PRINT1("If we rest, we rust.\n");
// PRINT2("Attack life, its going to kill you anyways.\n");
// PRINT3("Well done is better than well said.\n");
// return 0;
// }




// #define show(value) printf (#value"=%d\n" ,value);
// int main(void)
// {
// int a=10,b=5,c=4;
// show(a/b*c);
// return 0;
// }






#define MACRO(a) if(a<=5) printf(#a"=%d\n",a);
int main(void)
{
int x=6, y=15;
if (x<=y)
MACRO(x)
//if(x<=5) printf("=%d\n",x);
else
MACRO(y)
return 0;
}




// Write a recursive function to print the 'n' fibonacci series numbers.
#include <stdio.h>
int fibonacci_ser(int);
void main()
{
    int num = 7;
    printf("0\n");
    fibonacci_ser(num);
}
int fibonacci_ser(int num)
{
    static int a = 0, b = 1, sum = 0;
    sum = a + b;
    b = a;
    a = sum;
    printf("%d\n", sum);
    if (sum < num)
    fibonacci_ser(num);
}
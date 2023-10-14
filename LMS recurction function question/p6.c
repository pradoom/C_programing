//Write recursive function that displays a positive integer in words. For ex: if the
//integer is 3412 then it is displayed as three four one two.

#include<stdio.h>
void digite_words(int);
void rec_num_digite(int);
int reverse_digit(int);
#define pf printf
void main()
{
    int num=1238754;
    int sum=reverse_digit(num);
    rec_num_digite(sum);
}

void digite_words(int num)
{
    switch(num)
    {
        case 0:pf("zero ");break;
        case 1:pf("one ");break;
        case 2:pf("two ");break;
        case 3:pf("three ");break;
        case 4:pf("four ");break;
        case 5:pf("five ");break;
        case 6:pf("six ");break;
        case 7:pf("seven ");break;
        case 8:pf("eight ");break;
        case 9:pf("nine ");break;
    }
}


void rec_num_digite(int num)
{
    

    int r=num%10;
    digite_words(r);
    num=num/10;

    if(num)
    rec_num_digite(num);
    

}
int reverse_digit(int num)//reversing digite 54321
{
    static int sum=0;
    int r=num%10;
    sum=sum*10+r;
    num=num/10;

    if(num)
    reverse_digit(num);
    return sum;
}
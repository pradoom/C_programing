#include <stdio.h>
#define pf printf
#define sf scanf
//copy string
void my_str_cpy(char *p, char *d, int n)
{
    static int i = 0;
    d[i] = p[i];
    i++;

    if (i < n)
        my_str_cpy(p, d, n);
}

int my_str_cop(char *, char *, int);

// Locate string
char *my_str_chr(char *p, char ch)//returning address there for *my_str_chr
{
    if (*p == ch)
    {
        return p;
    }

    if (*p != '\0')
        my_str_chr(p + 1, ch);
    else
        return 0;
}

void main()
{
    char s[30], d[30];
    int i;
    pf("Enter string to copy..\n");
    sf("%[^\n]", s);
    pf("Enter string to copy..\n");
    sf(" %[^\n]", d);
    char ch = 'a';
    for (i = 0; s[i]; i++)
        ;

    my_str_cpy(s,d,i);
    int a = my_str_cop(s, d, i);
        if (a == 0)
        pf("equal\n");
    else
        pf("not equal\n");

    // int a = my_str_chr(s, ch);
    // if (a == 0)
    //     pf("not fount \n");
    // else
    //     pf("found \n");
}
//copy string
int my_str_cop(char *s1, char *s2, int n)
{

    if (*s1 != *s2)
    {
        return *s1 - *s2;
    }

    if (*s1 != '\0' && *s2 != '\0')
        return my_str_cop(s1 + 1, s2 + 1, n);
}

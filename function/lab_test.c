// WAP to reverse the wordes which having digits
#include <stdio.h>
void dig_word_rev(char*);
void main()
{
    //char s[20] = "e3n #4f lake o1";
    char s[20];
    printf("Enter string..\n");
    scanf("%[^\n]",s);
    dig_word_rev(s);

    printf("%s\n", s);
}


void dig_word_rev(char*s)
{
    int size;
    for (size = 0; s[size]; size++);

    int i, j, k, c, p;

    for (i = 0, k = 0, c = 0; i <= size; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            c++;
        }

        if (s[i] == ' ' || !s[i])
        {
            if (c > 0)
            {
                for (j = k, p = i - 1; j < p; j++, p--)
                {
                    char temp = s[j];
                    s[j] = s[p];
                    s[p] = temp;
                }
            }
            k = i + 1;
            c = 0;
        }
    }
}
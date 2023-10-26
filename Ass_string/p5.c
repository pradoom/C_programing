#include <stdio.h>

int main() {
    char s[20] = "abc   pqr   lts";
        int i,j;
    for (i = 0; s[i]; i++);
    int value = i;

    for (i = 0; i < value; i++)
     {
        printf("%c", s[i]);
    }
    printf("\n");




    for (i = 0; s[i]; i++) {
        if (s[i] == ' ') 
        {
            for(j=i;s[j];j++)
            {
                s[j] = s[j + 1];
            }
        }
    }

    for (i = 0; i < value; i++) {
        printf("%c", s[i]);
    }

    return 0;
}

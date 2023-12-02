#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pattern

    // Loop through each row
    for (int i = 1; i <= rows; i++) 
    {
        int value = i;//1/2

        // Loop through each column in the current row
        for (int j = 1; j <= i; j++) {
            printf("%d ", value);//1 
            value = value + rows - j;//1+5-0=6 /2+5-
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

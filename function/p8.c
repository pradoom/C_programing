#include <stdio.h>
void main()
{
    int size1, size2, i, j, k;
    printf("Enter 1st array size and 2nd array size..\n");
    scanf("%d %d", &size1, &size2);
    int a[size1], b[size2], d[size1 + size2];

    printf("Enter array 1 elements..\n");
    for (i = 0; i < size1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter array 2 elements..\n");
    for (i = 0; i < size2; i++)
    {
        scanf("%d", &b[i]);
    }

    int a1, a2, a3;
    a1 = sizeof(a) / sizeof(a[0]);
    a2 = sizeof(b) / sizeof(b[0]);
    a3 = sizeof(d) / sizeof(d[0]);
    int m = 0, n = 0;
    i = 0;
    for (i = 0; i < a3;)
    {
        if (m < a1 && a2 > n)
        {
            d[i] = a[m];
            d[i + 1] = b[n];
            i = i + 2;
            m++;
            n++;
        }
        else if (a1>a2)
        {
            d[i] = a[m];
            m++;
            i++;
        }
        else
        {
            d[i] = b[n];
            n++;
            i++;
        }
    }

    for (i = 0; i < a3; i++)
    {
        printf("%d ", d[i]);
    }
}
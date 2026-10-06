#include <stdio.h>

int main(void)
{
    int a[5];

    a[0] = 10;
    a[1] = 20;
    a[4] = 30;

    for (int i = 0; i < 5; i++)
    {
        printf("a[%d]: %d\n", i, a[i]);
    }
} 
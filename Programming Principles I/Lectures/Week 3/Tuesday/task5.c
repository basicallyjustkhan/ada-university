#include <stdio.h>

int main(void)
{
    int a[5] = {0};

    for (int i = 0; i < 5; i++)
    {
        a[i] = i * i;
        printf("a[%d]: %d\n", i, a[i]);
    }
} 
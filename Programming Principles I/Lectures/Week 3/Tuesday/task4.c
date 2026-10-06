#include <stdio.h>

int main(void)
{
    int a[5] = {0};

    for (int i = 0; i < 5; i++)
    {
        printf("a[%d]: %d\n", i, i*i);
    }
} 
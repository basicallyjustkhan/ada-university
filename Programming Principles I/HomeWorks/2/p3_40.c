#include <stdio.h>

int main(void)
{
    int value = 3;

    while (1)
    {
        printf("%d\n", value);
        value *= 3;
    }

    return 0;
}
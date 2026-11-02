#include <stdio.h>

int main(void)
{
    for (int row = 1; row <= 8; row++)
    {
        if (row % 2 == 0)
        {
            printf("%s", " ");
        }

        for (int column = 1; column <= 8; column++)
        {
            printf("%s", "* ");
        }

        puts("");
    }

    return 0;
}
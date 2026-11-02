#include <stdio.h>

int main(void)
{
    int side = 0;

    printf("Square Side: ");
    scanf("%d", &side);

    for (int row = 0; row < side; row++)
    {
        for (int column = 0; column < side; column++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main(void)
{
    int side;

    printf("Square Side: ");
    scanf("%d", &side);

    for (int row = 0; row < side; row++)
    {
        for (int column = 0; column < side; column++)
        {
            if (row == 0 || row == side - 1 || column == 0 || column == side - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
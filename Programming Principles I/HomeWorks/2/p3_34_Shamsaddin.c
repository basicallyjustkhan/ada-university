#include <stdio.h>

int main(void)
{
    int row = 1;
    int number = 1;

    while (row <= 10)
    {
        int column = 1;

        while (column <= row)
        {
            printf("%d ", number);
            number++;
            column++;
        }

        printf("\n");
        row++;
    }

    return 0;
}
#include <stdio.h>

int main(void)
{
    int number = 0;
    int count = 0;

    printf("Enter Value: ");
    scanf("%d", &number);

    while (number > 0)
    {
        if (number % 10 == 9)
        {
            count++;
        }
        number /= 10;
    }

    printf("Amount: %d\n", count);

    return 0;
}
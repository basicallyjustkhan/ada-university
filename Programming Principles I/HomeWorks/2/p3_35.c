#include <stdio.h>

int main(void)
{
    int binary = 0;
    int decimal = 0;
    int value = 1;

    printf("Binary Number: ");
    scanf("%d", &binary);

    while (binary > 0)
    {
        decimal = decimal + (binary % 10) * value;
        value = value * 2;
        binary = binary / 10;
    }

    printf("Decimal Value: %d\n", decimal);

    return 0;
}
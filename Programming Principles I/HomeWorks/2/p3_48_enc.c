#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter Value: ");
    scanf("%d", &number);

    int a = number / 1000;
    int b = number / 100 % 10;
    int c = number / 10 % 10;
    int d = number % 10;

    printf("Encrypted: %d%d%d%d\n", (c + 7) % 10, (d + 7) % 10, (a + 7) % 10, (b + 7) % 10);

    return 0;
}
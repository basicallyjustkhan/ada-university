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

    printf("Decrypted: %d%d%d%d\n", (c + 3) % 10, (d + 3) % 10, (a + 3) % 10, (b + 3) % 10);

    return 0;
}
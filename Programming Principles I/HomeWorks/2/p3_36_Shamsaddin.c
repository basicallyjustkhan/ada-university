#include <stdio.h>

int main(void)
{
    int number = 0;

    printf("Enter Value: ");
    scanf("%d", &number);

    int a = number / 100;
    int b = number / 10 % 10;
    int c = number % 10;

    if (a * a * a + b * b * b + c * c * c == number)
    {
        printf("%d Armstrong.\n", number);
    }
    else
    {
        printf("%d Not Armstrong.\n", number);
    }

    return 0;
}
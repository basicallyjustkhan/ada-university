#include <stdio.h>
#include <math.h>

int main(void)
{
    int x, y;

    printf("Enter the first number: ");
    scanf("%d", &x);

    printf("Enter the second number: ");
    scanf("%d", &y);


    printf("Difference: %d\n", x - y);
    printf("Remainder: %d\n", x % y);
    printf("Quotient: %d\n", x / y);
    printf("Product: %d\n", x * y);
    printf("Sum: %d\n", x + y);

    return 0;
}

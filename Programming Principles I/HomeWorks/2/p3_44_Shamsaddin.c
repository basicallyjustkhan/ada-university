#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Enter Values: ");
    scanf("%d%d%d", &a, &b, &c);

    int x = a * a;
    int y = b * b;
    int z = c * c;

    if (a > 0 && b > 0 && c > 0 && (x + y == z  || x + z == y || y + z == x))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}
#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Enter Values: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)
    {
        printf("These values can be sides of a triangle. \n");
    }
    else
    {
        printf("These values cannot be sides of a triangle. \n");
    }

    return 0;
}
#include <stdio.h>

int main(void)
{
    int n = 0;
    double e = 1;
    double factorial = 1;

    printf("Enter Value: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        factorial *= i;
        e += 1 / factorial;
    }

    printf("Value = %.2f\n", e);

    return 0;
}
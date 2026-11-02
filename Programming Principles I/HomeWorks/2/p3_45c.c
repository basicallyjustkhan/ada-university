#include <stdio.h>

int main(void)
{
    double x = 0;
    double result = 1;
    double term = 1;
    int n = 0;

    printf("X: ");
    scanf("%lf", &x);

    printf("Terms: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        term = term * x / i;
        result += term;
    }

    printf("Calculation = %.2f\n", result);

    return 0;
}
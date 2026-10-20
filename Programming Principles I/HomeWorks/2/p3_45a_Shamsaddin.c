#include <stdio.h>

int main(void)
{
    int n;
    long long factorial = 1;

    printf("Enter Value: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    printf("Factorial: %lld\n", factorial);

    return 0;
}
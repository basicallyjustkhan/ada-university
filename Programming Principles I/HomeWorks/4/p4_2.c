#include <stdio.h>

int main(void) {
    int n;
    int i = 0;
    long long a = 0;
    long long b = 1;

    printf("Enter N: ");
    scanf("%d", &n);

    while (i < n)
    {
        printf("%lld ", a);
        b = b + a;
        a = b - a;
        i++;
    }
    printf("\n");

    return 0;
}
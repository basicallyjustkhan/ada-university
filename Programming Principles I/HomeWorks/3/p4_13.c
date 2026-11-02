#include <stdio.h>

int main() {
    int n;
    long long sum = 0, squares = 0, cubes = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
        squares += (long long)i * i;
        cubes += (long long)i * i * i;
    }

    printf("Sum = %lld\n", sum);
    printf("Sum of squares = %lld\n", squares);
    printf("Sum of cubes = %lld\n", cubes);

    return 0;
}
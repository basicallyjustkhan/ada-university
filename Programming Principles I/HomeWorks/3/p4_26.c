#include <stdio.h>

int main() {
    int n;
    double pi = 0;
    int first2 = 0, first3 = 0;
    int first4 = 0, first5 = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Terms\tPi\n");

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            pi += 4.0 / (2 * i - 1);
        } else {
            pi -= 4.0 / (2 * i - 1);
        }

        printf("%d\t%.10f\n", i, pi);

        if (first2 == 0 && (int)(pi * 100 + 0.5) == 314) {
            first2 = i;
        }

        if (first3 == 0 && (int)(pi * 1000 + 0.5) == 3141) {
            first3 = i;
        }

        if (first4 == 0 && (int)(pi * 10000 + 0.5) == 31415) {
            first4 = i;
        }

        if (first5 == 0 && (int)(pi * 100000 + 0.5) == 314159) {
            first5 = i;
        }
    }

    printf("\nFirst 3.14: %d terms\n", first2);
    printf("First 3.141: %d terms\n", first3);
    printf("First 3.1415: %d terms\n", first4);
    printf("First 3.14159: %d terms\n", first5);

    return 0;
}
#include <stdio.h>

int main() {
    int n, stars, spaces;

    printf("Enter odd number from 1 to 19: ");
    scanf("%d", &n);

    if (n < 1 || n > 19 || n % 2 == 0) {
        printf("Invalid number\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        if (i <= n / 2 + 1) {
            stars = 2 * i - 1;
        } else {
            stars = 2 * (n - i) + 1;
        }

        spaces = (n - stars) / 2;

        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }

        for (int j = 1; j <= stars; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
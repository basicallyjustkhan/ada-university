#include <stdio.h>

int main() {
    int n;

    for (int i = 1; i <= 5; i++) {
        printf("Enter number from 1 to 30: ");
        scanf("%d", &n);

        if (n < 1 || n > 30) {
            printf("Invalid number\n");
            return 0;
        }

        for (int j = 1; j <= n; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
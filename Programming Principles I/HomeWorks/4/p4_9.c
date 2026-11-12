#include <stdio.h>

int main(void) {
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j < 2 * n; j++) {
            int v = j;
            if (j > n) {
                v = 2 * n - j;
            }

            if (v <= i) {
                printf("%-4d", v);
            } else {
                printf("    ");
            }
        }
        printf("\n");
    }

    return 0;
}
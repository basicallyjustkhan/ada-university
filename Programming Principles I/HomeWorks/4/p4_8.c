#include <stdio.h>

int main(void) {
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    int mid = n / 2;

    for (int i = -mid; i <= mid; i++) {
        int d = i;
        if (d < 0) {
            d = -d;
        }

        for (int j = 0; j < d; j++)
            printf("  ");

        for (int j = 0; j < mid - d; j++) {
            if (i == 0) {
                printf("* ");
            } else {
                printf("# ");
            }
        }

        printf("*");

        for (int j = 0; j < mid - d; j++) {
            if (i == 0) {
                printf(" *");
            } else {
                printf(" #");
            }
        }

        printf("\n");
    }

    return 0;
}
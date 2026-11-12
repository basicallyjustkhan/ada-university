#include <stdio.h>

int main(void) {
    int n, i, j;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("  * |");
    for (j = 1; j <= n; j++){
        printf("%4d", j);
    }
    printf("\n");

    for (i = 1; i <= n; i++) {
        printf("%3d |", i);
        for (j = 1; j <= n; j++)
            printf("%4d", i * j);
        printf("\n");
    }

    return 0;
}
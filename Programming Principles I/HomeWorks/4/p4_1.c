#include <stdio.h>

int main(void) {
    int N;
    double D;

    printf("Enter N: ");
    scanf("%d", &N);

    printf("Enter D: ");
    scanf("%lf", &D);

    int times = 2 * N + 1;
    while (times > 0) {
        printf("%g\n", D);
        times--;
    }

    return 0;
}

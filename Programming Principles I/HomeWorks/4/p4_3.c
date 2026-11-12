#include <stdio.h>

int main(void) {
    int m, n, i;

    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);

    while (m > n) {
        printf("Wrong input! Please re-enter m and n (m<=n): ");
        scanf("%d %d", &m, &n);
    }

    for (i = m; i <= n; i++) {
        if (i % 21 == 0) {
            printf("LoveJava\n");
        } else if (i % 3 == 0) {
            printf("Love\n");
        } else if (i % 7 == 0) {
            printf("Java\n");
        } else {
            printf("%d\n", i);
        }
    }

    return 0;
}
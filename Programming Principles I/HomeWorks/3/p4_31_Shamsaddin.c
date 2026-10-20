#include <stdio.h>

int main() {
    int stars, spaces;

    for (int i = 1; i <= 9; i++) {
        if (i <= 5) {
            stars = 2 * i - 1;
        } else {
            stars = 2 * (10 - i) - 1;
        }

        spaces = (9 - stars) / 2;

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
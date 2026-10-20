#include <stdio.h>

int main() {
    int stars, spaces;

    for (int pattern = 1; pattern <= 4; pattern++) {
        printf("Pattern %d\n", pattern);

        for (int i = 1; i <= 10; i++) {
            if (pattern == 1 || pattern == 4) {
                stars = i;
            } else {
                stars = 11 - i;
            }

            if (pattern == 3 || pattern == 4) {
                spaces = 10 - stars;
            } else {
                spaces = 0;
            }

            for (int j = 1; j <= spaces; j++) {
                printf(" ");
            }

            for (int j = 1; j <= stars; j++) {
                printf("%s", "*");
            }

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}
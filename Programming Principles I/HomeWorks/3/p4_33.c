#include <stdio.h>

int main() {
    int values[] = {100, 90, 50, 40, 10, 9, 5, 4, 1};
    char romans[] = {"C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 1; i <= 100; i++) {
        int n = i;

        printf("%d = ", i);

        for (int j = 0; j < 9; j++) {
            while (n >= values[j]) {
                printf("%s", romans[j]);
                n -= values[j];
            }
        }

        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    printf("Decimal\tBinary\t\tOctal\tHex\n");

    for (int i = 1; i <= 256; i++) {
        printf("%d\t", i);

        for (int j = 256; j >= 1; j /= 2) {
            printf("%d", (i / j) % 2);
        }

        printf("\t%o\t%X\n", i, i);
    }

    return 0;
}
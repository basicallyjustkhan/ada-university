#include <stdio.h>

int main() {
    for (int i = 0; i <= 127; i++) {
        if (i >= 32 && i <= 126) {
            printf("%3d: %c  ", i, i);
        } else {
            printf("%3d: .  ", i);
        }

        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    printf("\n");

    return 0;
}
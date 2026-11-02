#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 7; i <= 100; i += 7) {
        sum += i;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
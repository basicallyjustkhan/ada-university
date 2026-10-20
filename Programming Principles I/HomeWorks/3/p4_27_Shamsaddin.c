#include <stdio.h>

int main() {
    int count = 0;

    for (int a = 1; a <= 500; a++) {
        for (int b = a; b <= 500; b++) {
            for (int c = b + 1; c <= 500; c++) {
                if (a * a + b * b == c * c) {
                    printf("%d %d %d\n", a, b, c);
                    count++;
                }
            }
        }
    }

    printf("Total triples: %d\n", count);

    return 0;
}
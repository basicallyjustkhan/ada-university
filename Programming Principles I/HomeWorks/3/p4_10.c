#include <stdio.h>

int main() {
    double fahrenheit;

    printf("Celsius\tFahrenheit\n");

    for (int c = 30; c <= 50; c++) {
        fahrenheit = c * 9.0 / 5 + 32;
        printf("%d\t%.2f\n", c, fahrenheit);
    }

    return 0;
}
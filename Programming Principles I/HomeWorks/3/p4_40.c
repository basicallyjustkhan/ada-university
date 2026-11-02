#include <stdio.h>

int main() {
    double population, initial, rate, increase;
    int doubleYear = 0;

    printf("Enter current world population: ");
    scanf("%lf", &population);

    printf("Enter annual growth rate in percent: ");
    scanf("%lf", &rate);

    if (population <= 0) {
        return 0;
    }

    initial = population;

    printf("Year\tPopulation\tIncrease\n");

    for (int year = 1; year <= 75; year++) {
        increase = population * rate / 100;
        population += increase;

        printf("%d\t%.0f\t%.0f\n",
               year, population, increase);

        if (doubleYear == 0 && population >= initial * 2) {
            doubleYear = year;
        }
    }

    if (doubleYear > 0) {
        printf("Population doubles in year %d\n", doubleYear);
    } else {
        printf("Population does not double within 75 years\n");
    }

    return 0;
}
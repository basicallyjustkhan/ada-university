#include <stdio.h>

int main(void)
{
    double population = 0;
    double rate = 0;

    printf("Population: ");
    scanf("%lf", &population);

    printf("Growth: ");
    scanf("%lf", &rate);

    for (int year = 1; year <= 5; year++)
    {
        population += population * rate / 100;

        printf("Year %d: %.0f\n", year, population);
    }

    return 0;
}
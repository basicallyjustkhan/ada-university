#include <stdio.h>

int main(void)
{
    int highestRainfall, currentRainfall;

    printf("%s", "Enter the highest rainfall ever: ");
    scanf("%d", &highestRainfall);

    printf("%s", "Enter the current year's rainfall: ");
    scanf("%d", &currentRainfall);

    if (currentRainfall < highestRainfall)
    {
        puts("The current rainfall did not exceed the record.");
    }

    if (currentRainfall == highestRainfall)
    {
        puts("The current rainfall equals the record.");
    }

    if (currentRainfall > highestRainfall)
    {
        highestRainfall = currentRainfall;

        puts("The current rainfall is a new record.");
        printf("New highest rainfall: %d\n", highestRainfall);
    }

    return 0;
}
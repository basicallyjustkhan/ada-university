#include <stdio.h>

int main(void)
{
    int milesPerDay;
    int costPerGallon;
    int milesPerGallon;
    int parkingFees;
    int tolls;

    int gasolineCost;
    int totalCost;

    printf("%s", "Enter total miles driven per day: ");
    scanf("%d", &milesPerDay);

    printf("%s", "Enter cost per gallon of gasoline: ");
    scanf("%d", &costPerGallon);

    printf("%s", "Enter average miles per gallon: ");
    scanf("%d", &milesPerGallon);

    printf("%s", "Enter parking fees per day: ");
    scanf("%d", &parkingFees);

    printf("%s", "Enter tolls per day: ");
    scanf("%d", &tolls);

    gasolineCost = milesPerDay * costPerGallon / milesPerGallon;

    totalCost = gasolineCost + parkingFees + tolls;

    printf("Daily driving cost: %d\n", totalCost);

    return 0;
}
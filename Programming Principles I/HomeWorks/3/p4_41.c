#include <stdio.h>

int main() {
    double housing, food, clothing, transport;
    double education, health, vacation;
    double total, tax;

    printf("Enter housing expenses: ");
    scanf("%lf", &housing);

    printf("Enter food expenses: ");
    scanf("%lf", &food);

    printf("Enter clothing expenses: ");
    scanf("%lf", &clothing);

    printf("Enter transportation expenses: ");
    scanf("%lf", &transport);

    printf("Enter education expenses: ");
    scanf("%lf", &education);

    printf("Enter health care expenses: ");
    scanf("%lf", &health);

    printf("Enter vacation expenses: ");
    scanf("%lf", &vacation);

    total = housing + food + clothing + transport + education + health + vacation;

    tax = total * 0.30;

    printf("\nTotal expenses = %.2f\n", total);
    printf("Estimated FairTax = %.2f\n", tax);
    printf("Total including tax = %.2f\n", total + tax);

    return 0;
}
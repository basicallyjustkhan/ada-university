#include <stdio.h>

int main(void)
{
    double sales = 0.0;

    printf("Enter sales in dollars (-1 to end): ");
    scanf("%lf", &sales);

    while (sales != -1) 
    {
        double salary = 200 + sales * 0.09;

        printf("Salary is: $%.2f\n", salary);

        printf("Enter sales in dollars (-1 to end): ");
        scanf("%lf", &sales);
    }

    return 0;
}
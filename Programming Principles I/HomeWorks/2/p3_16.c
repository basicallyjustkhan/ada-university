#include <stdio.h>

int main(void)
{
    double total = 0.0;

    printf("Enter total amount collected (-1 to quit): ");
    scanf("%lf", &total);

    while (total != -1)
    {    
        char month[10] = {0};
        
        printf("Enter name of month: ");
        scanf("%9s", month);

        double sales = total / 1.09;
        double countyTax = sales * 0.05;
        double stateTax = sales * 0.04;
        double totalTax = countyTax + stateTax;

        printf("Month: ");
        puts(month);
        printf("Total Collections: $ %.2f\n", total);
        printf("Sales: $ %.2f\n", sales);
        printf("County Sales Tax: $ %.2f\n", countyTax);
        printf("State Sales Tax: $ %.2f\n", stateTax);
        printf("Total Sales Tax Collected: $ %.2f\n", totalTax);

        printf("\nEnter total amount collected (-1 to quit): ");
        scanf("%lf", &total);
    }

    return 0;
}
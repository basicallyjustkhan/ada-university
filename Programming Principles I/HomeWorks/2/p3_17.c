#include <stdio.h>

int main(void)
{
    int account = 0;

    printf("Enter account number (-1 to end): ");
    scanf("%d", &account);

    while (account != -1) {
        double mortgage = 0.0;
        int years = 0;
        double rate = 0.0;

        printf("Enter mortgage amount (in dollars): ");
        scanf("%lf", &mortgage);

        printf("Enter mortgage term (in years): ");
        scanf("%d", &years);

        printf("Enter interest rate (as a decimal): ");
        scanf("%lf", &rate);

        double interest = mortgage * rate * years;
        double total = mortgage + interest;
        double monthly = total / (years * 12);

        printf("The monthly payable interest is: $ %.0f\n", monthly);

        printf("\nEnter account number (-1 to end): ");
        scanf("%d", &account);
    }

    return 0;
}
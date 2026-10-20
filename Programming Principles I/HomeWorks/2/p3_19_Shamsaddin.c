#include <stdio.h>

int main(void)
{
    double principal = 0.0;

    printf("Enter loan principal (-1 to end): ");
    scanf("%lf", &principal);

    while (principal != -1)
    {
        double rate = 0.0;
        int days = 0;

        printf("Enter interest rate: ");
        scanf("%lf", &rate);

        printf("Enter term of the loan in days: ");
        scanf("%d", &days);

        double interest = principal * rate * days / 365;

        printf("The interest charge is $%.2f\n", interest);

        printf("Enter loan principal (-1 to end): ");
        scanf("%lf", &principal);
    }

    return 0;
}
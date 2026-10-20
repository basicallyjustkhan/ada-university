#include <stdio.h>

int main(void)
{
    double hours = 0.0;

    printf("Enter # of hours worked (-1 to end): ");
    scanf("%lf", &hours);

    while (hours != -1) {
        double rate = 0.0;
        double salary = 0.0;

        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%lf", &rate);

        if (hours <= 40)
        {
            salary = hours * rate;
        }
        else
        {
            salary = 40 * rate + (hours - 40) * rate * 1.5;
        }

        printf("Salary is $%.2f\n", salary);

        printf("Enter # of hours worked (-1 to end): ");
        scanf("%lf", &hours);
    }

    return 0;
}
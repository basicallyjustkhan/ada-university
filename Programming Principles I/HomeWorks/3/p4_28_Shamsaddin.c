#include <stdio.h>

int main() {
    int code, pieces;
    double salary, hours, rate, sales, pay;

    while (1) {
        printf("\nEnter pay code (1-4, 0 to stop): ");
        scanf("%d", &code);

        if (code == 0) {
            break;
        }

        switch (code) {
            case 1:
                printf("Enter weekly salary: ");
                scanf("%lf", &salary);
                pay = salary;
                break;

            case 2:
                printf("Enter hours worked: ");
                scanf("%lf", &hours);

                printf("Enter hourly rate: ");
                scanf("%lf", &rate);

                if (hours <= 40) {
                    pay = hours * rate;
                } else {
                    pay = 40 * rate + (hours - 40) * rate * 1.5;
                }
                break;

            case 3:
                printf("Enter weekly sales: ");
                scanf("%lf", &sales);

                pay = 250 + sales * 0.057;
                break;

            case 4:
                printf("Enter number of pieces: ");
                scanf("%d", &pieces);

                printf("Enter pay per piece: ");
                scanf("%lf", &rate);

                pay = pieces * rate;
                break;

            default:
                printf("Invalid code\n");
                continue;
        }

        printf("Weekly pay = %.2f\n", pay);
    }

    return 0;
}
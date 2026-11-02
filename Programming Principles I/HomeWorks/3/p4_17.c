#include <stdio.h>

int main() {
    int account;
    double limit, balance, newLimit;

    for (int i = 1; i <= 3; i++) {
        printf("Account number: ");
        scanf("%d", &account);

        printf("Credit limit: ");
        scanf("%lf", &limit);

        printf("Current balance: ");
        scanf("%lf", &balance);

        newLimit = limit / 2;

        printf("Account: %d\n", account);
        printf("New limit: %.2f\n", newLimit);

        if (balance > newLimit) {
            printf("Credit limit exceeded\n");
        } else {
            printf("Within credit limit\n");
        }

        printf("\n");
    }

    return 0;
}
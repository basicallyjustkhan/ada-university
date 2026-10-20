#include <stdio.h>

int main() {
    int n, product, quantity;
    double price, total = 0;

    printf("Enter number of sales: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter product number: ");
        scanf("%d", &product);

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        price = 0;

        switch (product) {
            case 1: price = 2.98; break;
            case 2: price = 4.50; break;
            case 3: price = 9.98; break;
            case 4: price = 4.49; break;
            case 5: price = 6.87; break;
            default: printf("Invalid product\n");
        }

        total += price * quantity;
    }

    printf("Total sales = %.2f\n", total);

    return 0;
}
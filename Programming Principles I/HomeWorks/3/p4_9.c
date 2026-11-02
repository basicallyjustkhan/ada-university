#include <stdio.h>

int main() {
    int n, num, sum = 0;

    printf("Number Amount: ");
    scanf("%d", &n);

    if (n <= 0) {
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        printf("Enter number: ");
        scanf("%d", &num);
        sum += num;
    }

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", (double)sum / n);

    return 0;
}
#include <stdio.h>

int main(void) {
    int n;
    int count = 1;

    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < count; j++){
            printf("#");
        }
        printf("\n");
        count += i + 1;
    }

    return 0;
}
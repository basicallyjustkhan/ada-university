#include <stdio.h>

int main(void)
{
    int counter = 1;
    int number;
    int largest = 0;

    while (counter <= 10) {
        printf("Enter number %d: ", counter);
        scanf("%d", &number);

        if (number > largest) {
            largest = number;
        }

        counter++;
    }

    printf("Largest number is %d\n", largest);

    return 0;
}
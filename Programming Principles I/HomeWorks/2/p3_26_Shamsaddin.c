#include <stdio.h>

int main(void)
{
    int counter = 1;
    int number = 0;
    int firstLargest = 0;
    int secondLargest = 0;

    while (counter <= 10)
    {
        printf("Enter number %d: ", counter);
        scanf("%d", &number);

        if (number > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = number;
        }
        else if (number > secondLargest) {
            secondLargest = number;
        }

        counter++;
    }

    printf("First largest number: %d\n", firstLargest);
    printf("Second largest number: %d\n", secondLargest);

    return 0;
}
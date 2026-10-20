#include <stdio.h>

int main(void)
{
    int a, b, c;
    int sum, average, product;
    int smallest, largest;

    printf("%s", "Enter three different integers: ");
    scanf("%d%d%d", &a, &b, &c);

    sum = a + b + c;
    average = sum / 3;
    product = a * b * c;

    smallest = a;

    if (b < smallest)
    {
        smallest = b;
    }

    if (c < smallest)
    {
        smallest = c;
    }

    largest = a;

    if (b > largest)
    {
        largest = b;
    }

    if (c > largest)
    {
        largest = c;
    }

    printf("Sum is %d\n", sum);
    printf("Average is %d\n", average);
    printf("Product is %d\n", product);
    printf("Smallest is %d\n", smallest);
    printf("Largest is %d\n", largest);

    return 0;
}
#include <stdio.h>

int main(void)
{
    int a, b, c;
    int smallest, largest;

    printf("%s", "Enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);

    smallest = a;
    largest = a;

    if (b < smallest)
    {
        smallest = b;
    }

    if (c < smallest)
    {
        smallest = c;
    }

    if (b > largest)
    {
        largest = b;
    }

    if (c > largest)
    {
        largest = c;
    }

    printf("Smallest: %d\n", smallest);
    printf("Largest: %d\n", largest);

    return 0;
}
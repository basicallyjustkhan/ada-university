#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;

    printf("Enter a value for demonstration: ");
    scanf("%d", &a);

    a = b;

    printf("Entered Value Postincrement: %d\n", a++);
    printf("Value After postincrement: %d\n", a);

    printf("Entered Value Preincrement: %d\n", ++b);
    printf("Value After preincrement: %d\n", b);

    puts("Postincrement (a++) uses the current value first, then adds 1.");
    puts("Preincrement (++a) adds 1 first, then uses the new value.");

    return 0;
}
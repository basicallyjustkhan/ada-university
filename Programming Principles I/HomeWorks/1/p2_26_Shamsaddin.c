#include <stdio.h>

int main(void)
{
    int first, second;

    printf("%s", "Enter two integers: ");
    scanf("%d%d", &first, &second);

    if (second != 0)
    {

        if (first % second == 0)
        {
            printf("%d is a multiple of %d.\n", first, second);
        }

        if (first % second != 0) 
        {
            printf("%d is not a multiple of %d.\n", first, second);
        }
    }

    if (second == 0)
    {
        puts("The second integer cannot be zero.");
    }

    return 0;
}
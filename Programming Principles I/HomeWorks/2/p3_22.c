#include <stdio.h>

int main(void)
{
    int number = 0;
    int divisor = 2;
    int prime = 1;

    printf("Enter a value: ");
    scanf("%d", &number);

    if (number <= 1)
    {
        prime = 0;
    }
    else
    {
        while (divisor < number && prime == 1)
        {
          if (number % divisor == 0)
          {
                prime = 0;
            }

            divisor++;
        }
    }

    if (prime == 1)
    {
        printf("%d is a prime number.\n", number);
    }
    else
    {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
#include <stdio.h>

#define N 5

int main(void)
{
    double a[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%lf", &a[i]);
        printf("a[%d]: %lf\n", i, a[i]);
    }
} 
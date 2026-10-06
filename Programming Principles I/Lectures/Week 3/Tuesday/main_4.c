#include <stdio.h>

#define N 5

int main(void)
{
    double a[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%lf", &a[i]);
        printf("a[%d]: %lf\n", i, a[i]);
    }
} 
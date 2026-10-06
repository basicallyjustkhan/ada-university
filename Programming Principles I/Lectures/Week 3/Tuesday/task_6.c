#include <stdio.h>

#define N 5

int main(void)
{
    int a[N];
    int sum = 0;
    double average = 0.0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    average = (double)sum / N;
    printf("Average: %lf\n", average);

    return 0;
} 
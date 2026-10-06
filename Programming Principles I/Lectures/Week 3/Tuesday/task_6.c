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
    printf("Average: %.2f\n", average);

    printf("Numbers greater than average: ");
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (a[i] > average)
        {
            printf("%d ", a[i]);
            count++;
        }
    }
    printf("\nCount: %d\n", count);

    return 0;
} 
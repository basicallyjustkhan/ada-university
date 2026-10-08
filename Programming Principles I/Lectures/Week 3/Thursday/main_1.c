#include <stdio.h>

#define N 5

int sum_array(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main(void)
{
    int marks[N] = {0};

    for (int i = 0; i < N; i++)
    {
        printf("Enter Values %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    int total = sum_array(marks, N);

    printf("Total: %d\n", total);

    return 0;
}
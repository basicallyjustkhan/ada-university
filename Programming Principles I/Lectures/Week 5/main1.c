#include <stdio.h>

int main(void)
{
    int scores[5] = {4, 7, 2, 8, 9};

    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("score[%d]: %d\n", i, scores[i]);
        sum += scores[i];
    }

    printf("Sum: %d\n", sum);
} 
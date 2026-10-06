#include <stdio.h>

#pragma warning(disable: 4996)

int main(void)
{
    int a = 7;
    int b = 2;

    double result1, result2;

    result1 = a / b;
    result2 = (double) a / b;

    printf("result1 = %lf\nresult2 = %lf", result1, result2);

    return 0;
} 
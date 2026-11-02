#include <stdio.h>

int main(void)
{
    float radius;
    float pi = 3.14159f;

    printf("Radius: ");
    scanf("%f", &radius);

    float diameter = radius * 2;
    float circumference = 2 * pi * radius;
    float area = pi * radius * radius;

    printf("Diameter: %.2f\n", diameter);
    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    return 0;
}
#include <stdio.h>

int main(void)
{
    int bm, bd, by;
    int cm, cd, cy;

    printf("Birth month day year: ");
    scanf("%d%d%d", &bm, &bd, &by);

    printf("Current month day year: ");
    scanf("%d%d%d", &cm, &cd, &cy);

    int age = cy - by;

    if (cm < bm ||  cd < bd)
    {
        age--;
    }

    int max = 220 - age;

    printf("Age: %d\n", age);
    printf("Maximum heart rate: %d\n", max);
    printf("Target heart rate: %.0f - %.0f\n", max * 0.5, max * 0.85);

    return 0;
}
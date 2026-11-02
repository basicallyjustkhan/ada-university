#include <stdio.h>

int main(void)
{
    int u, a, t;
    int v, s;

    printf("%s", "Enter initial velocity, acceleration and time: ");
    scanf("%d%d%d", &u, &a, &t);

    v = u + a * t;
    s = u * t + (a * t * t) / 2;

    printf("Final velocity: %d\n", v);
    printf("Distance traversed: %d\n", s);

    return 0;
}
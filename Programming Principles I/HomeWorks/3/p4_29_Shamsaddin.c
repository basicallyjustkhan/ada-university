#include <stdio.h>

int main() {
    int x, y, a, b, g, i, j;

    printf("Enter x and y: ");
    scanf("%d%d", &x, &y);

    printf("Enter a, b and g: ");
    scanf("%d%d%d", &a, &b, &g);

    printf("Enter i and j: ");
    scanf("%d%d", &i, &j);

    printf("a) %d %d\n",
           !(x < 5) && !(y >= 7),
           x >= 5 && y < 7);

    printf("b) %d %d\n",
           !(a == b) || !(g != 5),
           a != b || g == 5);

    printf("c) %d %d\n",
           !((x <= 8) && (y > 4)),
           x > 8 || y <= 4);

    printf("d) %d %d\n",
           !((i > 4) || (j <= 6)),
           i <= 4 && j > 6);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int i = 1;
    int win = 0;
    int a, b;

    srand(time(NULL));

    printf("Let The Game Begin! (cc 'Saw')\n");

    while (i <= 3 && !win) {
        a = 1 + rand() % 6;
        b = 1 + rand() % 6;
        printf("Chance #%d: %d %d\n", i, a, b);
        win = (a + b == 12);
        i++;
    }

    if (win) {
        printf("Yeah, I rock at this!\n");
    } else {
        printf("Ahh, today is just not my day, I guess :(\n");
    }

    return 0;
}
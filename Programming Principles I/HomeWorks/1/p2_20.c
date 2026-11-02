#include <stdio.h>

int main(void)
{
    int totalSeconds;
    int hours, minutes, seconds;

    printf("%s", "Enter total elapsed time in seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
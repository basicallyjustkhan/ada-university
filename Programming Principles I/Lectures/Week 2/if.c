#include <stdio.h>

int main(void)
{
    int age = 18;
    int hasCard = 1;

    if(age > 18 && hasCard)
    {
        printf("Allowed\n");
    }
    else
    {
        printf("Not Allowed\n");
    }

    return 0;
} 
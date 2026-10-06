#include <stdio.h>

int main(void)
{
    int age;
    int hasCard;

    printf("Enter the age: ");
    scanf("%d", &age);

    printf("Does the person have a card (1 or 0): ");
    scanf("%d", &hasCard);

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
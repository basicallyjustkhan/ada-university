#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter your grade: ");
    scanf("%d", &grade);

    if(grade > 90)
    {
        printf("A\n");
    }
    else if(grade > 80)
    {
        printf("B\n");
    }
    else if(grade > 80)
    {
        printf("C\n");
    }
    else
    {
        printf("F\n");
    }
    
    return 0;
} 
#include <stdio.h>

int main()
{
    int num;

start:
    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Negative number not allowed!\n");
        goto start;
    }

    printf("You entered: %d", num);

    return 0;
}
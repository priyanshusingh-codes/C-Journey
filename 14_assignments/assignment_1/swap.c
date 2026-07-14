//Swap Two Numbers Without Using a Third Variable
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Before Swapping:\n");
    printf("a = %d\nb = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter Swapping:\n");
    printf("a = %d\nb = %d\n", a, b);

    return 0;
}
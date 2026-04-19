#include <stdio.h>

int main() {
    // Declare variables
    int a, b, temp;

    // Input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swap logic
    temp = a;
    a = b;
    b = temp;

    // Output
    printf("After swapping: a = %d, b = %d", a, b);

    return 0;
}
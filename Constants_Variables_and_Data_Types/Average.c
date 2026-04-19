#include <stdio.h>

int main() {
    // Declare variables to store numbers
    int a, b, c;

    // Variable to store average (float for decimal result)
    float average;

    // Ask user to enter three numbers
    printf("Enter three numbers: ");

    // Take input from user
    scanf("%d %d %d", &a, &b, &c);

    // Calculate average
    // Using 3.0 to avoid integer division
    average = (a + b + c) / 3.0;

    // Display the result
    printf("Average = %.2f", average);

    return 0; // End of program
}
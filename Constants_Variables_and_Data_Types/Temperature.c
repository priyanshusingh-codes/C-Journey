#include <stdio.h>

int main() {
    // Declare variables
    float fahrenheit, celsius;

    // Take input from user
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    // Formula: C = (F - 32) * 5/9
    celsius = (fahrenheit - 32) * 5 / 9;

    // Display result
    printf("Temperature in Celsius = %.2f", celsius);

    return 0; // End of program
}
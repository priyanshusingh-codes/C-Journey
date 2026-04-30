#include <stdio.h>

int main() {
    // Declare variables
    float principal, rate, time, simple_interest;

    // Take input from user
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    // Formula: SI = (P * R * T) / 100
    simple_interest = (principal * rate * time) / 100;

    // Display result
    printf("Simple Interest = %.2f", simple_interest);

    return 0; // End of program
}
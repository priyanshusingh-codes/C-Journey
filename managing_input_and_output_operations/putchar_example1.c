#include <stdio.h>   // For getchar(), putchar(), printf()
#include <ctype.h>   // For isalpha(), isdigit()

int main() {
    char ch;                // Variable to store each character
    int alphabets = 0;      // Counter for alphabets
    int digits = 0;         // Counter for digits
    int special = 0;        // Counter for special characters

    printf("Enter text (press Enter to stop):\n");

    // Read characters one by one until Enter is pressed
    while ((ch = getchar()) != '\n') {

        // Check if character is alphabet
        if (isalpha(ch)) {
            alphabets++;
        }
        // Check if character is digit
        else if (isdigit(ch)) {
            digits++;
        }
        // Otherwise, it's a special character
        else {
            special++;
        }
    }

    // Display results
    printf("\nAlphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d\n", special);

    return 0;
}
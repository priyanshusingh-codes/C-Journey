#include <stdio.h>   // For getchar() and putchar()
#include <ctype.h>   // For islower(), isupper(), toupper(), tolower()

int main() {
    char ch;   // Declare a variable to store a single character

    // Ask user to enter a character
    printf("Enter a character: ");

    // Read one character from keyboard
    ch = getchar();

    // Check if the character is a lowercase alphabet
    if (islower(ch)) {
        // Convert lowercase to uppercase
        ch = toupper(ch);

        // Display message
        printf("Converted to uppercase: ");

        // Print the converted character
        putchar(ch);
    }
    // Check if the character is an uppercase alphabet
    else if (isupper(ch)) {
        // Convert uppercase to lowercase
        ch = tolower(ch);

        // Display message
        printf("Converted to lowercase: ");

        // Print the converted character
        putchar(ch);
    }
    else {
        // If character is not an alphabet
        printf("Not an alphabet.");
    }

    // Move cursor to next line
    putchar('\n');

    // End of program
    return 0;
}
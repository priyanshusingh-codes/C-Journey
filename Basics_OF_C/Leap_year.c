#include <stdio.h>

int main() {
    int year;

    // Input
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year logic
    if (year % 4 != 0) {
        printf("%d is Not a Leap Year", year);
    }
    else if (year % 100 != 0) {
        printf("%d is a Leap Year", year);
    }
    else if (year % 400 == 0) {
        printf("%d is a Leap Year", year);
    }
    else {
        printf("%d is Not a Leap Year", year);
    }

    return 0;
}
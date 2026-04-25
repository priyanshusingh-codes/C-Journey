#include <stdio.h>

int main() 
{
    float marks;

    printf("Enter marks (0-100): ");
    scanf("%f", &marks);

    if (marks >= 90 && marks <= 100) {
        printf("Grade: O");
    }
    else if (marks >= 80) {
        printf("Grade: E");
    }
    else if (marks >= 70) {
        printf("Grade: A");
    }
    else if (marks >= 60) {
        printf("Grade: B");
    }
    else if (marks >= 50) {
        printf("Grade: C");
    }
    else if (marks >= 40) {
        printf("Grade: D");
    }
    else if (marks >= 0) {
        printf("Grade: F");
    }
    else {
        printf("Invalid marks");
    }

    return 0;
}

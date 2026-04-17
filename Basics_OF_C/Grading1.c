#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks");
    }
    else {
        switch (marks / 10) {
            case 10:  // for 100
            case 9:
                printf("Grade: O");
                break;

            case 8:
                printf("Grade: E");
                break;

            case 7:
                printf("Grade: A");
                break;

            case 6:
                printf("Grade: B");
                break;

            case 5:
                printf("Grade: C");
                break;

            case 4:
                printf("Grade: D");
                break;

            default:
                printf("Grade: F");
        }
    }

    return 0;
}
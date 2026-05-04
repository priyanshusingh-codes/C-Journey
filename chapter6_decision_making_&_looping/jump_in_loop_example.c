#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;

    printf("Enter numbers (0 to stop, negative to exit program):\n");

start:   // label for goto

    for (int i = 1; i <= 10; i++) {

        printf("Enter number %d: ", i);
        scanf("%d", &num);

        //exit() => terminate whole program
        if (num < 0) {
            printf("Negative number entered. Program exiting...\n");
            exit(0);
        }

        //break => exit loop early
        if (num == 0) {
            printf("Zero entered. Stopping input loop.\n");
            break;
        }

        //continue => skip even numbers
        if (num % 2 == 0) {
            printf("Even number skipped.\n");
            continue;
        }

        printf("Processed number: %d\n", num);
    }

    char choice;
    printf("\nDo you want to run again? (y/n): ");
    scanf(" %c", &choice);

    //goto => jump back to start
    if (choice == 'y' || choice == 'Y') {
        goto start;
    }

    printf("Program ended.\n");
    return 0;
}
#include <stdio.h>

void readCharacters() {
    char ch;
    int count = 0;

    printf("Enter text (press Enter to finish):\n");

    while ((ch = getchar()) != '\n') {
        count++;
    }

    printf("Total characters entered: %d\n", count);
}

int main() {
    readCharacters();
    return 0;
}
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    ch = getchar();   // read character

    if (isalpha(ch)) {
        printf("It is an alphabet.\n");
    }
    else if (isdigit(ch)) {
        printf("It is a digit.\n");
    }
    else {
        printf("It is a special character.\n");
    }

    return 0;
}
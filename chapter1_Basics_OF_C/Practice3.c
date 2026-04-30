/*
Write a C program that uses an in-built function to draw a 3D bar
*/
#include <stdio.h>

int main() {
    int i, j;

    // Top slanted part
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3 - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 6; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Front face
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 6; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
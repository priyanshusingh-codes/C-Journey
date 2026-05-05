//Input and Print a 2D Array

#include <stdio.h>

int main() {
    int arr[2][3];  // 2 rows, 3 columns

    // Input
    printf("Enter 6 elements:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Output
    printf("Matrix is:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");  // new line after each row
    }

    return 0;
}
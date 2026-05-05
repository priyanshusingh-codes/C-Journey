//Input and Print Elements of 1D Array
#include <stdio.h>

int main() {
    int arr[5];   // declare array of size 5

    // Input elements
    printf("Enter 5 numbers:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Output elements
    printf("Array elements are:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
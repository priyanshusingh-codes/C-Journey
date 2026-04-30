#include <stdio.h>

#define MAX 100   // symbolic constant for maximum limit

int main() {
    int num = 150;

    if(num > MAX) {
        printf("Number is greater than MAX (%d)\n", MAX);
    } else {
        printf("Number is within limit\n");
    }

    return 0;
}
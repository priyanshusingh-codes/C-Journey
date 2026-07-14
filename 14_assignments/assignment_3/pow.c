//Calculate X Y without using pow() function.
#include <stdio.h>

int main() {
    int x, y, i;
    long long result = 1;

    printf("Enter the value of X: ");
    scanf("%d", &x);

    printf("Enter the value of Y: ");
    scanf("%d", &y);

    for (i = 1; i <= y; i++) {
        result = result * x;
    }

    printf("%d ^ %d = %lld\n", x, y, result);

    return 0;
}
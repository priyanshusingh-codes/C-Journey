//ind the sum the following series: 1 + ½ + 1/3 + ¼ + ....... upto n terms
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + 1.0 / i;
    }

    printf("Sum of the series = %.4f\n", sum);

    return 0;
}
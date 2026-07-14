//Find the sum of the following series: -1 + 1/3! - 1/5! + 1/7! ...... upto n terms
#include <stdio.h>

int main() {
    int n, i, j;
    long long fact;
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact = 1;

        // Find factorial of (2*i - 1)
        for (j = 1; j <= (2 * i - 1); j++) {
            fact = fact * j;
        }

        // Add or subtract the term
        if (i % 2 != 0)
            sum = sum - (1.0 / fact);
        else
            sum = sum + (1.0 / fact);
    }

    printf("Sum of the series = %.6f\n", sum);

    return 0;
}

#include <stdio.h>

int main() {
    // Declare variables
    float radius, area;

    // Take input
    printf("Enter radius: ");
    scanf("%f", &radius);

    // Calculate area
    // Formula: Area = πr² (π ≈ 3.14)
    area = 3.14 * radius * radius;

    // Display result
    printf("Area of Circle = %.2f", area);

    return 0;
}
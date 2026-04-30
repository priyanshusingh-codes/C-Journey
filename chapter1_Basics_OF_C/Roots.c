#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float D, root1, root2;

    printf("Enter values of a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Case 1: a = 0 and b = 0
    if (a == 0 && b == 0) {
        printf("No solution");
    }

    // Case 2: a = 0 (Linear equation)
    else if (a == 0) {
        float x = -c / b;
        printf("Only one root: x = %.2f", x);
    }

    // Case 3: Quadratic equation
    else {
        D = b*b - 4*a*c;

        if (D < 0) {
            printf("No real roots");
        }
        else if (D == 0) {
            root1 = -b / (2*a);
            printf("One real root: %.2f", root1);
        }
        else {
            root1 = (-b + sqrt(D)) / (2*a);
            root2 = (-b - sqrt(D)) / (2*a);
            printf("Two real roots: %.2f and %.2f", root1, root2);
        }
    }

    return 0;
}
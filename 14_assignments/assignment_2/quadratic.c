//Compute the Roots of a Quadratic Equation
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, root1, root2, root;

    printf("Enter the values of a, b and c: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a == 0 && b == 0)
    {
        printf("No solution.\n");
    }
    else if (a == 0)
    {
        root = -c / b;
        printf("Only one root = %.2f\n", root);
    }
    else
    {
        d = b * b - 4 * a * c;

        if (d < 0)
        {
            printf("No real roots.\n");
        }
        else if (d == 0)
        {
            root = -b / (2 * a);
            printf("Both roots are equal.\n");
            printf("Root = %.2f\n", root);
        }
        else
        {
            root1 = (-b + sqrt(d)) / (2 * a);
            root2 = (-b - sqrt(d)) / (2 * a);

            printf("Root 1 = %.2f\n", root1);
            printf("Root 2 = %.2f\n", root2);
        }
    }

    return 0;
}
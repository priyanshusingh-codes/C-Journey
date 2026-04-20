#include <stdio.h>

#define PI 3.1416   // symbolic constant for value of pi

int main() {
    float radius = 5;
    float area;

    area = PI * radius * radius;   // using symbolic constant

    printf("Area of circle = %f\n", area);
    return 0;
}
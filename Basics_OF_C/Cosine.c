//Cosine Function
#include <stdio.h>
#include <math.h>

#define PI 3.1416// define the value of PI as a constant
#define MAX 180 // define the maximum angle in degrees for which cosine will be calculated

int main ()
{
    int angle; // variable to store the angle in degrees
    float X, Y; // variables to store the cosine and sine values
    printf("Enter the angle in degrees: "); // prompt user to enter the angle
    scanf("%d", &angle); // read the angle from user input
    while (angle <= MAX) // loop to calculate cosine and sine values until the angle exceeds the maximum value
    {
        X = (PI/MAX)*angle;
        Y = cos(X);
        printf("%15d %13.4f\n", angle, Y);
        angle = angle + 10;
    }
    return 0; // return 0 to indicate successful program termination    
}   
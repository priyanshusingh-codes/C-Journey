// To change farenheit scale to celcius scale
#include <stdio.h>

int main() 
{
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (5.0 / 9.0) * (fahrenheit - 32);//Formula to convert farenheit scale to celsius scale

    printf("Temperature in Celsius = %.2f\n", celsius);

    return 0;
}
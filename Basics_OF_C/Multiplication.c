//Program using function to multiply two numbers
#include <stdio.h>

int mul (int a, int b) // function definition for multiplication, takes two integers as parameters and returns their product
{
    return a * b; // return the product of a and b
}  
int main () // main function where the program execution starts
{
    int num1, num2, result; // variables to store the two numbers and the result of multiplication

    printf("Enter first number: "); // prompt user to enter the first number
    scanf("%d", &num1); // read the first number from user input

    printf("Enter second number: "); // prompt user to enter the second number
    scanf("%d", &num2); // read the second number from user input

    result = mul(num1, num2); // call the multiplication function with the two numbers and store the result

    printf("The product of %d and %d is: %d\n", num1, num2, result); // print the result of multiplication

    return 0; // return 0 to indicate successful program termination
}
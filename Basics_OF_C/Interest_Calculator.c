//Code for Interest Calculator
#include <stdio.h> // for input/output functions
#include <math.h>// for math functions

#define PERIOD 10 // number of years for which interest is calculated
#define PRINCIPAL  5000.00 // initial amount of money on which interest is calculated

int main () // main function where the program execution starts
{
    int year; // variable to keep track of the current year in the loop
    float amount, value, inrate; // variables to store the current amount, calculated value after interest, and interest rate

    amount = PRINCIPAL; // initialize amount with the principal value
    inrate = 0.11; // set the interest rate to 11%
    year = 0; // initialize year to 0 to start the loop from the first year






    

    while  (year < PERIOD) // loop to calculate interest for each year until the specified period
    {
        printf("%2d %8.2f\n", year, amount); // print the current year and the amount with 2 decimal places
        value = amount + (amount * inrate); // calculate the new amount by adding the interest to the current amount
        amount = value; // update the amount for the next iteration
        year = year + 1; // increment the year to move to the next year in the loop
    }
// The loop will run until the year exceeds the specified period, calculating and printing the amount for each year based on the interest rate.
return 0;
}
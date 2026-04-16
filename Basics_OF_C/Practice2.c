/*
Write a program using one print statement to print the patter of asterisks as below :
*
**
***
****
*/
#include <stdio.h>
int main ()
{
    int n =4;
    for (int i = 1; i <= n; i++) //Outer loop for lines
    {
    for (int j = 1; j <= i; j++) //inner loop for stars
    {
        printf("*");
    }
    printf("\n");
}
    return 0;
}
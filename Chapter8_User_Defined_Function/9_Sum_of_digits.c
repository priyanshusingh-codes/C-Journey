//Sum of digits of a number
#include<stdio.h>
// Function to calculate the sum of digits
int sumofdigits(int num){
    int digsum = 0; // Variable to store the sum of digits
    while(num>0){ // Repeat until the number becomes 0
        int lastdig = num%10;// Extract the last digit
        num/=10;// Remove the last digit
        digsum += lastdig; // Add the last digit to the sum
    }
    return digsum;
}
int main (){
    int num;
    printf("Enter the number =");
    scanf("%d", &num);
    printf("Sum of digits of %d is %d", num, sumofdigits(num));
    return 0;
}
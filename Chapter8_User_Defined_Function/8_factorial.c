//Factorial of N using function
#include<stdio.h> //include the standard input/output C library
//factorial of a nmber by user defined function
int factorialN(int n){ 
    int fact = 1; // Initialize factorial to 1
    for(int i=1; i<=n; i++){  //Loop from 1 to n
        fact = fact * i; //multiply fact the current value of i
    }
    return fact; //return the calculated factorial to the calling function
}
int main(){
    int n;
printf("Enter the number \n");
scanf("%d", &n);
printf("The factorial of %d is %d", n, factorialN(n));
return 0;
}
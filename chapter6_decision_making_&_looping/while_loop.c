/*

What is while Statement?
The while loop is the simplest loop in C.

Basic Syntax:
while (condition) {
    // body of loop
}




#) How it Works (Step-by-step)
    Condition is checked
    If true → loop body runs
    After execution → condition checked again
    This repeats until condition becomes false
    Then control goes outside the loop

*/


//example : 

int n = 1, sum = 0;

while (n <= 10) {
    sum = sum + n*n;
    n++;
}

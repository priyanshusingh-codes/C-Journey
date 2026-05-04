/*

What is for Loop?
A for loop is an entry-controlled loop
It combines everything in one line

*/

//Syntax
for (initialization; condition; update) {
    // body
}





/*

How it Works
#Initialization → runs once
#Condition check
#true → run loop
#false → exit
#Execute body
#Update (increment/decrement)
#Repeat from step 2



Why for is Powerful => All 3 things in one place:

Initialization
Condition
Update

#Makes code clean & readable





*/


//Advanced Features


//#Multiple Initialization
for (int i = 0, j = 10; i < j; i++, j--) {
    printf("%d %d\n", i, j);
}


//#Multiple Updates
for (int i = 0; i < 5; i++, printf("Hi\n")) {
}


//#Compound Condition
for (int i = 0, sum = 0; i < 20 && sum < 100; i++) {
    sum += i;
}



//#Missing Parts => No initialization:
int i = 0;
for (; i < 5; i++) {
    printf("%d ", i);
}





//Nested for Loops
//Example: Multiplication Table
#include <stdio.h>

int main() {
    for (int row = 1; row <= 5; row++) {
        for (int col = 1; col <= 5; col++) {
            printf("%4d", row * col);
        }
        printf("\n");
    }
    return 0;
}

//Outer loop → rows
//Inner loop → columns





//No Semicolon after for
for(int i=0; i<5; i++);  // WRONG
{
   printf("Hello");
}
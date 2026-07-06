/*

1. What is a Function?
A function is a self-contained block of code that performs a specific task. It helps divide a large program into smaller, manageable parts.

Every C program must have a main() function.
Execution of the program always starts from main().





2. Types of Functions in C
There are two types of functions in C.

A. Library Functions
These are predefined functions provided by the C Standard Library.

Examples:
printf() → Displays output.
scanf() → Takes input.
sqrt() → Calculates square root.
cos() → Calculates cosine.
strcat() → Concatenates strings.

Features

Already written by the C library.
No need to define them yourself.
Simply include the required header file.

Example:

#include <stdio.h>
printf("Hello");


B. User-Defined Functions
These are functions created by the programmer to perform a particular task.

Example:
int add(int a, int b)
{
    return a + b;
}

Features
Written by the programmer.
Can be reused multiple times.
Can later become part of a personal library.




3. Why Do We Need User-Defined Functions?

Although a complete program can be written using only main(), it is not recommended because:

Program becomes very long.
Difficult to understand.
Difficult to debug.
Difficult to test.
Difficult to maintain.

Instead, we divide the program into smaller functions.



4. Advantages of User-Defined Functions


1. Modular Programming
Large programs are divided into smaller modules (functions).

Example:
main()
│
├── Input()
├── Process()
├── Calculate()
└── Display()
Each function performs only one task.

2. Code Reusability
A function can be called many times without rewriting the same code.
Example:
Instead of writing factorial logic everywhere,
factorial(5);
factorial(7);
factorial(10);


3. Reduces Program Length
Repeated code is avoided.

Without functions:
100 lines
+
100 lines
+
100 lines

With functions:
Function = 100 lines
Call = 1 line
Thus memory and coding effort are reduced.

4. Easy Debugging
If there is an error in calculation,
Only that function needs to be checked.

Example:
calculateInterest()
instead of checking the entire program.

5. Easy Testing
Each function can be tested independently before combining with the main program.

6. Easy Maintenance
If changes are required,
Only one function needs modification.

Example:
If tax calculation changes,
Only
calculateTax()
needs editing.

7. Saves Time
A function written once can be used multiple times in the same program or even in different programs.

8. Improves Readability
Functions make programs easier to understand.
Instead of
500 lines inside main()
we get
main()
{
    input();
    process();
    display();
}

which is much easier to read.



5. Top-Down Modular Programming
Top-down programming means solving a problem from higher level to lower level.

Steps :

Problem
      ↓
Main Function
      ↓
Input Function
      ↓
Processing Function
      ↓
Calculation Function
      ↓
Display Function

Each level is broken into smaller tasks until every task is simple.

Advantages
Easier planning
Easier coding
Easier debugging
Better organization
Reusable modules


6. Communication Between Functions
Functions communicate by:
Passing arguments (parameters)
Returning values

Example:
sum = add(5, 6);
5 and 6 are arguments.
add() returns the result.
*/
/*
The comma Operator r lets you execute multiple expressions in a single statement, from left to right.
//lets you execute multiple expressions in a single statement, from left to right.

Basic Syntax
expression1, expression2, expression3;

//All expressions are executed
//Final result = value of last expression

Comma is used to:
initialize multiple variables
update multiple variables

Important Notes:
Evaluates expressions left → right
Returns last value
Often used in:
for loops
compact expressions

Common Confusion:
❌ This is NOT comma operator:
int a = 1, b = 2;
👉 This is variable declaration, not comma operator

✅ This IS comma operator:
x = (a = 1, b = 2);
*/



/*
The size type is an unsigned integer type that is used to represent the size of objects in bytes. It is defined in the <stddef.h> header file and is commonly used for array indexing and loop counting.

example:
#include <stdio.h>
#include <stddef.h>
int main() {
    size_t size = sizeof(int);
    printf("Size of int: %zu bytes\n", size);
    return 0;
}

//Used to determine the size of arrays and other data structures, ensuring safe memory access and preventing buffer overflows.
*/
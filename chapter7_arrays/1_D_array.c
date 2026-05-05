/*

ONE-DIMENSIONAL ARRAYS
----------------------


1. Definition

A one-dimensional array is a list of elements stored under one variable name, accessed using a single index (subscript)
Elements are accessed by their position relative to the start


2. Index / Subscript
The position of an element in an array is called:
Index or Subscript
Index always starts from 0

Example:
x[0] → 1st element  
x[1] → 2nd element  
x[i] → ith element



3. Mathematical Representation

In maths:
x₁, x₂, x₃, ... xₙ

In C:
x[0], x[1], x[2], ... x[n-1]


4. Declaration
int number[5];
number → array name
5 → total elements
Creates space for 5 integers


5. Memory Representation
number[0]  number[1]  number[2]  number[3]  number[4]
Stored in continuous memory locations


6. Initialization / Assignment

Example values:
(35, 40, 20, 57, 19)
                                 
number[0] = 35;
number[1] = 40;
number[2] = 20;
number[3] = 57;
number[4] = 19;



7. Usage in Programs
Array elements behave like normal variables
int sum = number[0] + number[1];


8. Valid Subscripts

Subscripts can be:
Integer constants → number[2]
Variables → number[i]
Expressions → number[i + 1]



9. Important Warning 
C does NOT check array bounds

Meaning:
number[10] = 5;   //Dangerous (out of bounds)
This can cause:
Garbage values
Program crash
Undefined behavior



10. Key Points for Exams
One-dimensional array = single subscript
Index starts from 0
Stores same type data
Stored in contiguous memory
No automatic bounds checking



*/







/*


Character Arrays (Strings)
==========================

In C:
Strings are just arrays of characters

Example
char name[10];
Can store 10 characters
Used to store words like "HELLO"



6. How Strings Are Stored

Example:
"WELL DONE"
Stored as:
W  E  L  L     D  O  N  E  \0
Each character = one element
\0 = null character (end marker)


7. Important Concept 
Null Character (\0)
Automatically added by compiler
Marks end of string
*/
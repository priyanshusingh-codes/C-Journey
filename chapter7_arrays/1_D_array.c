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

















/*

INITIALIZATION OF ONE-DIMENSIONAL ARRAYS
========================================

1. What is Initialization?
After declaring an array, you must assign values
Otherwise → it contains garbage values




2. Types of Initialization

There are 2 ways:

Compile Time Initialization
Run Time Initialization


3. Compile Time Initialization : Values are assigned during declaration

Syntax:
type array_name[size] = {values};


4. Examples
Full Initialization
int number[3] = {0, 0, 0};

Partial Initialization
float total[5] = {0.0, 15.75, -10};

Result:
total[0] = 0.0
total[1] = 15.75
total[2] = -10
total[3] = 0
total[4] = 0

Remaining elements automatically become 0



5. Size Can Be Omitted
int counter[] = {1, 1, 1, 1};
Compiler decides size = 4



6. Important Rules 
Rule 1: Less Values → Auto Fill
int number[5] = {10, 20};

Becomes:
10, 20, 0, 0, 0



Rule 2: More Values → ERROR 
int number[3] = {10, 20, 30, 40}; //illegal


Rule 3: Good Practice
Always specify size (better error checking)




7. Character Array Initialization (Strings)
Method 1
char name[] = {'J','o','h','n','\0'};
Method 2 (Shortcut)
char name[] = "John";

Compiler automatically adds \0

8. Special Case (VERY IMPORTANT)
char city[5] = {'B'};

Becomes:
'B', '\0', '\0', '\0', '\0'



9. Run Time Initialization
Values assigned during program execution



Example 1 (Using Loop)
for(int i = 0; i < 50; i++)
    sum[i] = 0;

for(int i = 50; i < 100; i++)
    sum[i] = 1.0;


    Example 2 (Using scanf)
int x[3];
scanf("%d %d %d", &x[0], &x[1], &x[2]);

User inputs values at runtime

10. Real Application (Frequency Counting)

Idea:

Store counts in array
Use formula:
index = value / 10
Example:
value = 59
index = 59 / 10 = 5

So count stored in:
group[5]



11. Smart Initialization Trick 
int group[COUNTER] = {0};
This sets ALL elements to 0




12. Key Takeaways
Arrays must be initialized before use
Compile time → faster, fixed
Run time → flexible (user input)
Partial init → rest become 0
Extra values → ERROR
Strings need \0




*/
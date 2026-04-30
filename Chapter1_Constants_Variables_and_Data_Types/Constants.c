/*
Constants : Real values that do not change during bthe execution of a progeram

Types :
i)  Integer Constants
ii) Real Constants
iii)Single Character Constants
iv) String COnstants
v)  Backlash Character Constants



/*
An integer constant is a whole number (no decimal point) used directly in a program.

Types of Integer Constants
1. Decimal (Base 10)

Digits: 0–9
Most commonly used
25, -100, 456

2. Octal (Base 8)
Starts with 0
Digits: 0–7
012, 077

3. Hexadecimal (Base 16)
Starts with 0x or 0X
Digits: 0–9 and A–F
0x1A, 0XFF

4. Signed Integer

//Can store both positive and negative values

int a = -10;
int b = 20;
Default for int is signed
Range (typical 32-bit)

5. Unsigned Integer

//Can store only non-negative values (0 and positive)

unsigned int a = 10;
No negative numbers 

Range (32-bit):

0 to 4,294,967,295
Since no space is used for negative numbers, it can store larger positive values

6. Long Integer

Used to store larger integers than normal int

long int a = 1000000;
Size is at least as large as int
Often 4 or 8 bytes depending on system

7. Combinations //Important

C allows combining these:

Example :

Signed Long
long int a = -50000;

Unsigned Long
unsigned long int a = 50000;
*/



/*
A real constant (also called a floating-point constant) is a number that has a decimal point or exponent.

Types of Real Constants
1. Fractional Form

Numbers with decimal point
3.14, -0.25, 100.0


2. Exponential Form (Scientific Notation)

Written using e or E
1.2e3    // 1.2 × 10^3 = 1200
3.5E-2   // 3.5 × 10^-2 = 0.035
*/

/*
Single character constant : A single character constant is a single character enclosed in single quotes ' '.
It represents one character only

Examples :
'A', 'b', '5', '#

*/

/*
String Constants : A string constant is a sequence of characters enclosed in double quotes " ".
It can contain one or more characters

Examples :
"Hello"
"Priyanshu"
"12345"
"Welcome to C"

*/

/*
These are special character constants written using a backslash \ to represent characters that are hard to type directly.
They are also called escape sequences

Common Backslash Character Constants :
'\n'  // New line
'\t'  // Tab (space)
'\b'  // Backspace
'\r'  // Carriage return
'\0'  // Null character
'\\'  // Backslash
'\''  // Single quote
'\"'  // Double quote
*/
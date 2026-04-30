/*
Formatted input means reading data that comes in a specific structure/order.
Formatted input means reading data according to a predefined format using functions like scanf().

Example : 15.75 123 John

This contains 3 values:
15.75 → decimal number
123 → integer
John → text/string
These values are arranged in order.
So the program must read them in the same forma

Using:

scanf()

scanf means  => scan formatted input
It reads keyboard input according to a format string.
*/

//General Form of scanf
scanf("control string", argument1, argument2, ...);


/*
Control string called format string.
It tells C:
what type of data to expect
in what order
how to interpret input
example : "%f %d %s"


| Specifier | Meaning      |
| --------- | ------------ |
| `%d`      | int          |
| `%f`      | float        |
| `%lf`     | double       |
| `%c`      | char         |
| `%s`      | string       |
| `%u`      | unsigned int |


example : scanf("%3d", &x); => Only first 3 digits read:
x = 123
*/

/*

1. Inputting Integers
Format => %d =>Means read integer.

Example:
int x;
scanf("%d", &x);


//Field Width
%2d => Means read max 2 digits.

Example:
Input: 31426

Code : scanf("%2d", &x);
Output : x = 31

Remaining:
426 still stays in input buffer.

*/

/*

Long / Short Integers
%hd  => short int
%ld  => long int
%d   => int

*/


/*

2. Inputting Real Numbers
Float : %f

Example:
float x;
scanf("%f", &x);
Input : 12.75


Double : %lf

Example:
double d;
scanf("%lf", &d);

Scientific Notation Works Too
Input:
43.21E-1
Means:
4.321

*/


/*

Inputting Characters / Strings

Single Character
%c
Example:
char ch;
scanf("%c", &ch);

String
%s
Example:
char name[20];
scanf("%s", name);

Input:
John
//%s Stops at Space


4. Reading String With Spaces
Use scanset: %[^\n]

Example:
char city[50];
scanf("%[^\n]", city);

Input : New York City
Reads full line.


Important Rules
Always use address (&) except arrays
Order must match
Whitespace ignored
Unread data remains for next scanf
*/

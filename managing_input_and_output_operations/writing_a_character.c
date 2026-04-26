/*

Writing a Character (putchar)
1. putchar() Function

Definition : Used to output (write) a single character to the screen


Syntax
putchar(variable);
variable must be of type char


Example
char ch = 'Y';
putchar(ch);

Output:
Y


Special Case (New Line)
putchar('\n');

Moves cursor to next line


2. Related Character Functions (ctype.h)
 
Header Required
#include <ctype.h>


Important Functions

Function	Purpose
islower(ch)	Checks if character is lowercase
toupper(ch)	Converts lowercase → uppercase
tolower(ch)	Converts uppercase → lowercase


Behavior
islower(ch) → TRUE (non-zero) if a–z
toupper(ch) → returns uppercase version
tolower(ch) → returns lowercase version

Program: Reverse Case of Input Character
If user enters:

lowercase → convert to uppercase
uppercase → convert to lowercase

*/
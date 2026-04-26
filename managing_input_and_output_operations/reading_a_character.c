//C Notes: Reading a Character

/*
1. Basic Idea
The simplest I/O operation in C:
Read one character
Display it or process it

Input → Keyboard (standard input)
Output → Screen (standard output)

2. getchar() Function
Definition : Used to read a single character from the keyboard
Syntax
char_variable = getchar();

3. Important Concept
getchar():
i)  waits for user input
ii) reads only one character
iii)returns that character
iv) It is used on the right-hand side of assignment:
ch = getchar();
*/




/*
4. Reading Multiple Characters
You can call getchar() repeatedly:

char ch;
while ((ch = getchar()) != '\n') {
    printf("%c", ch);
}
    

// Stops when user presses Enter (\n)
*/



/*
5. YES/NO Type Program Logic
Program reads a single character (Y or N)
Then checks:

if (ch == 'Y' || ch == 'y')
    printf("My name is BUSY BEE");
else
    printf("You are good for nothing");


6. Character Testing Functions
These help check what type of character was entered.

Header file required:
#include <ctype.h>
*/


/*
Common Functions


1. isalpha(ch)
Checks if character is an alphabet
Returns:
non-zero → TRUE
0 → FALSE


2. isdigit(ch)
Checks if character is a digit (0–9)



7. Important Points (Exam Focus)
getchar() reads only one character
It waits for user input
Use char type variable to store result
'\n' represents Enter key
Character test functions need:
#include <ctype.h>
*/





/*

| Function       | Meaning             | Returns TRUE if…                |
| -------------- | ------------------- | ------------------------------- |
| `isalpha(ch)`  | Alphabet check      | `ch` is A–Z or a–z              |
| `isdigit(ch)`  | Digit check         | `ch` is 0–9                     |
| `isalnum(ch)`  | Alphanumeric        | Alphabet OR digit               |
| `islower(ch)`  | Lowercase check     | `ch` is a–z                     |
| `isupper(ch)`  | Uppercase check     | `ch` is A–Z                     |
| `isspace(ch)`  | Whitespace check    | space, tab, newline             |
| `isblank(ch)`  | Blank space         | space or tab                    |
| `ispunct(ch)`  | Punctuation         | special symbols like `! , . ?`  |
| `iscntrl(ch)`  | Control character   | non-printable (like `\n`, `\t`) |
| `isprint(ch)`  | Printable character | visible + space                 |
| `isgraph(ch)`  | Visible character   | visible (excluding space)       |
| `isxdigit(ch)` | Hexadecimal digit   | 0–9, A–F, a–f                   |


*/
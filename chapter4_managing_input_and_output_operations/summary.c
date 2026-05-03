/*

Chapter Summary: Standard Input & Output



1. getchar()
Definition : Reads one character from standard input (keyboard).

Syntax:
char ch;
ch = getchar();

Example:
char ch;
ch = getchar();

printf("%c", ch);

Input : A
Output : A


2. putchar()
Definition : Prints one character to the screen.

Syntax:
putchar(character);


Example:
putchar('B');
Output : B


3. scanf() — Formatted Input
Definition : Used to read input values in specified format.

Syntax:
scanf("format_string", &variables);


Example:
int age;
scanf("%d", &age);


4. printf() — Formatted Output
Definition : Used to print output in formatted style.

Syntax:
printf("format_string", variables);


Example:
printf("Age = %d", age);


5. Control String
Definition : String inside printf() or scanf() containing:
text
format specifiers
escape sequences


Example:
"%d %f \n"




6. Common Format Specifiers

%d	Integer
%f	Float
%c	Character
%s	String
%lf	Double



7. Escape Sequences

\n	New line
\t	Tab space
\b	Backspace


Example:
printf("Hello\nWorld");

Output:
Hello
World











Always Remember
Header Files
For Input/Output:
#include <stdio.h>


For Character Functions:
#include <ctype.h>
Use & with scanf()







Correct:

scanf("%d", &x);

Wrong:

scanf("%d", x);
Do NOT use & in printf()







Correct : printf("%d", x);
Wrong : printf("%d", &x);



Use Double Quotes for Strings
printf("Hello");


Use Single Quotes for Character
char ch = 'A';
No Precision in scanf()



Wrong:
scanf("%.2f", &x);
Correct:
scanf("%f", &x);


No Extra Space at End

Avoid:
scanf("%d ");

Use:
scanf("%d", &x);






8. Common Errors


Wrong format specifier	=> Garbage output
Missing & in scanf	=> Runtime error
Using & in printf	=> Wrong output
Missing quotes	=> Syntax error


9. One-Line Revision


getchar()  -> read one char
putchar()  -> print one char
scanf()    -> input
printf()   -> output

*/
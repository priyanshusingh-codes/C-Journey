/*

Formatted output means printing values in a controlled style:
aligned columns
fixed decimal places
spacing
neat tables
readable results


Done using:
printf("control string", arguments);

Structure of printf

printf("Age = %d", age);

Here:
"Age = %d" → control string
age → argument





Control String Contains 3 Things

1. Normal Characters
Printed as-is:
printf("Hello");

Output:
Hello



2. Format Specifiers
Used to print variable values:

%d   int
%f   float
%c   char
%s   string

Example:
printf("%d", 10);

Output:
10




3. Escape Sequences
\n	New line
\t	Tab
\b	Backspace

Example:
printf("Hi\nPriyanshu");

Output:
Hi
Priyanshu
*/






/*

Integer Formatting => %wd
Where:
w = width
d = integer

Example:
printf("%5d", 23);

Output: 23 (3 spaces + 23)



Left Justify
%-5d

Example:
printf("%-5d", 23);

Output: 23 (spaces after)




Zero Padding
%05d

Example:
printf("%05d", 23);

Output: 00023
*/



/*

Float Formatting
%w.pf

Where:
w = total width
p = digits after decimal

Example:

printf("%7.2f", 98.7654);

Output: 98.77 (rounded)



Default Float

printf("%f", 3.14);

Output: 3.140000 (default = 6 decimals)


*/



/*

Scientific Notation  =>   %e

Example:

printf("%e", 1234.5);
Output: 1.234500e+03


*/

/*

Character Formatting  =>  %wc

Example:

printf("%5c", 'A');// 5 adds 5 spaces before A
Output: |    A|
         12345


*/



/*

String Formatting => %w.ps

Where:
w = width
p = max characters printed

Example:

printf("%10.4s", "Priyanshu");
Output: _ _ _ _Priy

*/



/*

Mixed Data Types
int a = 5;
float b = 3.2;
char c = 'X';

printf("%d %.1f %c", a, b, c);

Output: 5 3.2 X


*/
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
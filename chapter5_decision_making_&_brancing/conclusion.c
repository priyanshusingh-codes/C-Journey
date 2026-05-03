/*

KEY CONCEPTS
1. Decision-Making Statements
Statements that control flow of execution based on conditions.

Examples:
if
if...else
else if ladder
switch
?: 
goto



2. switch Statement
Multi-way decision statement.
Matches one value with many case values.

switch(choice)
{
   case 1:
   case 2:
}



3. Conditional Operator ?:
Two-way decision operator.
Returns one of two values.

(condition) ? true_value : false_value;

Example:

max = (a>b) ? a : b;



4. goto Statement
Unconditional jump statement.
Transfers control to matching label.

goto start;
start:


5. Infinite Loop
When statements run repeatedly forever.

Example:
while(1)
{
}

or

start:
goto start;















REMEMBER
IF Statement Mistakes

1. Beware of Side Effects
if(x++)
Uses value and changes x.

2. = vs ==
Wrong:
if(x = 5)
Correct:
if(x == 5)


3. No Spaces Inside Operators

Correct:
==
!=
>=
<=

Wrong:
= =
! =
> =
< =


4. Wrong Symbol Order = Error

Wrong:
=!
=>
=<

Correct:
!=
>=
<=


5. Use Double Logical Symbols

Correct:
&&
||

Wrong:
&
|
(single used differently)



6. Parentheses Required in if
Correct:
if(x > 0)

Wrong:
if x > 0


7. No Semicolon After if

Wrong:
if(x>0);
{
   printf("Hi");
}


8. Float Equality Risky

Avoid:
if(a == b)
Use tolerance later.

9. Avoid Side Effects in Logical Expressions

Bad:
(x-- && ++y)

Second part may not run.
IF...ELSE Tips

10. Dangling Else
Always know which if gets else.

Use braces.
if(x)
{
   if(y)
   {
   }
   else
   {
   }
}


11. Use Braces
Safer and cleaner.
SWITCH Tips


12. Use break

If cases are exclusive.
case 1:
   ...
   break;


13. Use default
Good habit.
default:
   printf("Invalid");


14. Case Labels Must Be Constants
Wrong:

case x:

Correct:

case 5:


15. No Duplicate Cases
Wrong:

case 1:
case 1:
Conditional Operator Tip


16. Keep Expressions Simple

Good:
max = (a>b) ? a : b;
Bad: giant nested ternary chaos 😏
goto Tip


17. Label Placement Matters
Bad placement can create infinite loop.

start:
goto start;


*/
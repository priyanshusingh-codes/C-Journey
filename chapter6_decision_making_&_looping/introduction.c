/*

What is Looping
Looping is repeating a set of statements again and again until a condition becomes false.


Instead of writing:
sum = sum + 1*1;
sum = sum + 2*2;
...
sum = sum + 10*10;

We use a loop to do it automatically.





Structure of a Loop
Every loop has 2 main parts:

1. Body
The work you want to repeat
Example:
sum = sum + n*n;


2. Control Statement
Decides:
Continue loop OR
Stop loop



Two Types of Loop Control


1. Entry-Controlled Loop (Pre-test)
Condition checked before execution

If condition is false → loop never runs
Example : while(n <= 10)
Also called : Pre-test loop

2. Exit-Controlled Loop (Post-test)
Condition checked after execution

Loop runs at least once
Example:
do {
   ...
} while(n <= 10);

Also called:
Post-test loop




Infinite Loop (Important)
If condition never becomes false:
Loop runs forever 

Example:
while(1)   // always true




Steps of Any Loop
Every loop follows this cycle:

1.Initialization
int n = 1;

2.Execution
sum = sum + n*n;

3.Condition check
n <= 10

4.Update
n++;

*/
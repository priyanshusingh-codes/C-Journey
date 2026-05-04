/*

KEY CONCEPTS (Loops in C)


Control Statement
Checks condition and decides loop flow

Program Loop
Repeats statements until condition becomes false

Types of loops
1. while
while(condition) {
    // body
}
 Entry-controlled (checks first)

2. do...while
do {
    // body
} while(condition);
Exit-controlled (runs at least once)





Jump Statements


break : Exit loop immediately

continue : Skip current iteration






ALWAYS REMEMBER 
1. Wrong operator mistake
= vs == is a classic bug
if (x = 5)   //wrong (assignment)
if (x == 5)  //correct



2. Floating point comparison

Never do:
if (a == 0.1)
because floating values are imprecise



3. Initialization before loop
Always initialize variables before loop starts




4. Missing increment (BIG ERROR)
while(i < 10) {
   // no i++
}
Infinite loop 




5. Semicolon mistake in do...while
do {
   // body
} while(condition);   //must end with ;



6. Semicolon after for or while
for(i=0; i<5; i++);   //wrong logic
loop becomes empty



7. Multiple updates of control variable
Don’t change loop variable in:
for header
AND inside loop body



8. Comma mistake in for
for(i=0, i<5; i++)   //wrong

correct:
for(i=0; i<5; i++)



9. Unstructured programming warning
Avoid:
goto 
excessive break 
excessive continue 



*/
/*
++ and --

++ => adds 1 to the operand
-- => subtracts 1 from the operand

example :

++m = m+1 or m+=1
--m = m-1 0r m-=1

1. Post-increment → m++
First use the value, then increment

Example:
int m = 5;
int x = m++;
What happens:
x = 5 (old value of m is used)
then m becomes 6

2. Pre-increment → ++m
First increment, then use the value

Example:
int m = 5;
int x = ++m;
What happens:
m becomes 6 first
then x = 6

1. Post-decrement → m--
First use the value, then decrease

Example:
int m = 5;
int x = m--;
What happens:
x = 5 (old value used)
then m becomes 4

2. Pre-decrement → --m
First decrease, then use the value

Example:
int m = 5;
int x = --m;
What happens:
m becomes 4 first
then x = 4

Important Case (VERY COMMON IN EXAMS)
int m = 5;

printf("%d %d", m++, ++m);

This is confusing / undefined behavior in C !
Because m is modified twice in the same statement

=>Avoid writing such code

//Used for increment and decrement in 'for' and 'while' loops.

*/
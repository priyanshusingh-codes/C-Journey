/*
1. Basic Functions of a C Program
Every C program performs three main operations:
Input → Taking data from user or source
Processing → Performing operations on data
Output → Displaying results


2. Methods of Providing Input

(a) Using Assignment Statements
Values are directly assigned in the program
int x = 5;
float a = 0;
This method is fixed (static input)


(b) Using scanf() Function
Used to take input from the keyboard (user)
int x;
scanf("%d", &x);
This method is dynamic (runtime input)

3. Method of Producing Output

Using printf() Function
Used to display output on the screen (terminal)
printf("Hello World");


5. Standard I/O Library
A collection of functions used for input and output
Known as Standard Input/Output Library
Common functions:
printf()
scanf()


6. Header Files in C
What is a Header File?
A file that contains function declarations
Helps the compiler understand functions used in program

stdio.h (Standard Input Output Header File)
#include <stdio.h>
Required for using:
printf()
scanf()
Instructs compiler to include standard I/O function

7. Working of #include
#include <stdio.h>
Meaning:
Compiler searches for file stdio.h
Inserts its content into the program before compilation
*/
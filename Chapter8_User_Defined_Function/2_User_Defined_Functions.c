/*

1. Elements of User-Defined Functions
To use a user-defined function in C, three elements are required:

Function Definition
Function Call
Function Declaration (Prototype)

These three work together.
Function Declaration
        ↓
Function Call
        ↓
Function Definition



2. Similarities Between Variables and Functions
Functions behave similarly to variables in several ways.

Both are identifiers and must follow identifier naming rules.
Both have data types.
Both must be declared before use.
Both occupy memory during program execution.



3. Function Definition
A function definition is the actual implementation (body) of the function. It contains the code that performs a specific task.

General Syntax
return_type function_name(parameter_list)
{
    // Local variable declarations
    // Statements
    return value;
}

4. Parts of a Function Definition
A function definition has 6 elements.

Element	Purpose
Function Name	Name of the function
Function Type	Return type
Parameter List	Receives input values
Local Variables	Variables used inside the function
Function Statements	Performs the required task
Return Statement	Returns result to the caller

These six elements are divided into two parts.

A. Function Header
Contains:
Function type (Return type)
Function name
Parameter list

Example
int sum(int a, int b)

There is no semicolon after the header.

B. Function Body
Contains:
Local variable declarations
Executable statements
Return statement

Example

{
    int c;
    c = a + b;
    return c;
}



5. Function Type (Return Type)
The return type tells what kind of value the function sends back.

Examples

Return Type	Meaning
int	    Returns integer
float	Returns decimal number
double	Returns large decimal
char	Returns character
void	Returns nothing

Example

int square(int x)

returns an integer.

Example
void display()

returns nothing.

6. Function Name
Must be a valid C identifier.
Should describe the work performed.

Good Examples
calculateArea()
findMax()
displayResult()

Bad Examples
printf()      // Library function name
scanf()       // Already exists
Avoid using names of library functions.

7. Formal Parameters
Formal parameters are variables that receive values from the calling function.

Example
int sum(int a, int b)

Here
a
b
are formal parameters.

Rules
✔ Must specify datatype.
✔ Must be separated by commas.

Correct
int sum(int a, int b)

Incorrect
int sum(int a,b)
because datatype of b is missing.




8. Function Without Parameters
If a function takes no input, use void.
void printLine(void)
{
    printf("----------------");
}

Although
void printLine()
works in many compilers, using void is the recommended style.

9. Function Body
Contains three parts.
(i) Local Variable Declaration
int total;
(ii) Statements
total = a + b;
(iii) Return Statement
return total;


10. Return Statement
The return statement transfers control back to the calling function.
There are two forms.

A. Return Without Value
return;
Used mainly in void functions.

Example

void display()
{
    printf("Hello");
    return;
}



B. Return With Value
return expression;

Example
return x * y;

or

return (a+b);



11. Rules of Return Statement
A function can return only one value per call.
A function may contain multiple return statements, but only one executes.
When return executes, the function ends immediately.

Example
if(a>b)
    return a;
else
    return b;


12. Return Type Conversion
Returned value is automatically converted to the function's return type.

Example
int average()
{
    return 7.89;
}

Output returned
7
because integer removes the decimal part.

13. Function Call
A function call transfers control from the calling function to the called function.
Syntax
function_name(arguments);

Example
sum(10,20);
Function Call Process
main()
    |
    | sum(10,20)
    ↓
sum()
    |
 Performs calculation
    |
return result
    ↓
main()



14. Actual Parameters
Values supplied during the function call are called actual parameters.
Example

sum(10,20);

Here
10
20
are actual parameters.

15. Ways of Calling a Function
Suppose
int mul(int x,int y)
Possible calls are
mul(10,5);

mul(a,5);

mul(10,b);

mul(a,b);

mul(a+5,10);

mul(10,mul(a,b));
mul(expression1,expression2);


16. Using Function Calls in Expressions
Since functions return values, they can be used in expressions.

Examples
x = sum(a,b);
printf("%d",sum(5,6));
if(sum(a,b)>100)
y = sum(a,b)/(a+b);



Invalid Example
sum(a,b)=10;
A function call cannot appear on the left side of an assignment.

17. Void Function Call
Functions returning void cannot be used in expressions.

Correct
display();

Wrong
x = display();


18. Function Declaration (Function Prototype)
A function declaration tells the compiler:

Function name
Return type
Number of parameters


Types of parameters
It is written before the function is used.

Syntax
return_type function_name(parameter_list);

Example

int sum(int,int);
or
int sum(int a,int b);
Both are correct.

19. Parts of Function Prototype
Contains

Return type
Function name
Parameter list
Semicolon

Example
int add(int,int);



20. Rules for Function Declaration
End with a semicolon.
Parameter names are optional.
Datatypes must match the function definition.
Order and number of parameters must match.
If no parameters, use
void display(void);


21. Global Prototype
Declared before main().
Example
#include<stdio.h>
int sum(int,int);
int main()
{
}

Advantages:
Accessible by all functions.
Better documentation.
Recommended programming style.



22. Local Prototype
Declared inside another function.

Example
int main()
{
    int sum(int,int);
}

Accessible only inside that function.



23. Scope of Function Declaration
The place where a prototype is declared determines where it can be used.
Global prototype → Entire program.
Local prototype → Only inside that function.
24. Formal vs Actual Parameters
Formal Parameters	Actual Parameters
Written in function definition	Written in function call
Receive values	Supply values
Variables	Constants, variables or expressions

Example
int sum(int a,int b)
Formal parameters
a
b
Function call
sum(10,20);

Actual parameters
10
20


25. Prototype: Yes or No?
Technically, C may compile some programs without prototypes by assuming default return types and parameter types, but this is unsafe and can lead to errors.
Best practice: Always write function prototypes before main().




Categories of Functions in C (Exam Notes)

A function in C can be classified based on:

Whether it accepts arguments
Whether it returns a value

There are 5 categories of functions.

Category	Arguments	Return Value
    1	       No	        No
    2	       Yes	        No
    3	       Yes	        Yes
    4	       No	        Yes
    5	  Multiple values	Using pointers


Category 1: Functions with No Arguments and No Return Value
Definition
The function does not receive any data from the calling function.
The function does not return any value to the calling function.


There is only transfer of control, not data.
Communication
main()
   │
   │ Control
   ▼
display()
   │
   │ Control returns
   ▼
main()
No data is passed in either direction.

Syntax
void display(void)
{
    printf("Hello");
}

Calling
display();

*/

#include<stdio.h>

void message(void)
{
    printf("Welcome to C Programming");
}

int main()
{
    message();
    return 0;
}  

/*
Output
Welcome to C Programming
*/



/*

Characteristics
No input arguments.
No return value.
Used for displaying messages or performing simple tasks.
Cannot be used inside expressions.

Correct
display();

Wrong
x = display();
Advantages
Very simple.
Easy to understand.
Useful when no data exchange is needed.


Disadvantages
Function cannot receive data.
Function cannot send results back.
Less flexible.


Category 2: Functions with Arguments but No Return Value
Definition
Function receives data from the calling function.
Function performs the task.
Function does not return any value.


Communication
main()
      │
      │ Data + Control
      ▼
calculate()
      │
      │ Control only
      ▼
main()

This is one-way communication.



Syntax
void display(int n)
{
    printf("%d", n);
}

Calling
display(50);
Formal and Actual Arguments

Example
void sum(int a, int b)

Here
a
b
are Formal Arguments

Calling
sum(10,20);

Here
10
20
are Actual Arguments

Rules for Arguments
Actual and formal arguments must match in:
Number
Order
Data type

Example
sum(5,8);
matches
void sum(int a,int b)
Example
*/
#include<stdio.h>

void square(int x)
{
    printf("%d",x*x);
}
int main()
{
    square(6);
    return 0;
}
/*
Output
36
Important Points
Arguments may be constants, variables or expressions.

Example
square(5);
square(a);
square(a+5);

All are valid.
Actual vs Formal Arguments
Actual Arguments	Formal Arguments
Used in function call	Used in function definition
Supply values	Receive values
Can be constant, variable or expression	Must be variables


Copy Mechanism
Only copies of actual arguments are passed.

Example*/

void change(int x)
{
    x=100;
}

Calling

int a=20;

change(a);
/*
After function call
a = 20

Original value remains unchanged because only a copy was passed.
Advantages
Flexible.
Function can work with different values.
Main function controls input.
Disadvantages
Cannot return computed result.
Variable Number of Arguments

Some functions accept variable numbers of arguments.

Examples
printf()
scanf()
These use ellipsis (...)

Example
double area(int num,...);

Here
...
means any number of arguments.

Category 3: Functions with Arguments and Return Value
Definition
Function receives data.
Performs computation.
Returns result.

This is the most commonly used type of function.

Communication
main()
   │
Data + Control
   ▼
Function
   │
Result + Control
   ▼
main()

This is two-way communication.

Syntax*/
int add(int a,int b)
{
    return a+b;
}

//Calling

sum = add(5,7);
Example
#include<stdio.h>

int square(int x)
{
    return x*x;
}

int main()
{
    int s;

    s=square(5);

    printf("%d",s);

    return 0;
}
/*
Output
25


Working

Step 1
square(5);
passes value 5.
↓
Step 2
Function calculates
25
↓
Step 3
return 25;
↓
Step 4
Returned value assigned to
s


Advantages
Reusable.
No direct input/output.
Portable.
Suitable for mathematical functions.
Returning Float Values

Default return type is
int

If function should return decimal value, specify
float
or
double

Example
double average(int a,int b)
{
    return (a+b)/2.0;
}

Prototype
double average(int,int);
Why Return Type Matters

Wrong
int average()
{
    return 5.75;
}

Output
5

Correct
float average()
{
    return 5.75;
}

Output
5.75


Category 4: Functions with No Arguments but Return Value
Definition
Function receives no arguments.
Function returns a value.

Communication
main()
     │
 Control
     ▼
Function
     │
Return Value
     ▼
main()
Syntax
int getNumber(void)
{
    return 100;
}

Calling
x=getNumber();
Example
#include<stdio.h>

int number(void)
{
    return 50;
}

int main()
{
    int x;

    x=number();

    printf("%d",x);

    return 0;
}

Output
50
Library Example
getchar()
Takes no arguments.
Returns one character (as an integer value).
Advantages
Useful when function itself obtains data.
Returns useful information.
Category 5: Functions Returning Multiple Values

Normally,
One function call returns only one value.
To return multiple values,
C uses Pointers (covered later in pointer chapters).

Example
void calculate(int a,int b,int *sum,int *product)
Can return both
Sum
Product
through pointers.


*/




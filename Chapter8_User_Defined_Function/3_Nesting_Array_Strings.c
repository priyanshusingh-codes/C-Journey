/*


Nesting of Functions


Definition
Function nesting means one function calls another function.

Example:

main()
   │
   ▼
function1()
   │
   ▼
function2()
   │
   ▼
function3()
There is no limit to how deeply functions can be nested.

Example
main()
{
    ratio();
}

ratio()
{
    difference();
}

Here:
main() calls ratio()
ratio() calls difference()

Nested Function Calls
A function call can itself be used as an argument to another function.

Example
p = mul(mul(5,2),6);
Working
Inner call
mul(5,2)
↓
10
↓
Outer call
mul(10,6)
↓
60
Output
60

Important Note

=>Calling one function from another is allowed.(Correct)

=>Defining one function inside another is illegal in C.(Wrong)

Wrong
main()
{
    void display()      // Illegal
    {
    }
}




2. Recursion
Definition
Recursion is a process in which a function calls itself.

Example
factorial()
{
    factorial();
}
Syntax

*/
return_type function()
{
    if(base condition)
        return value;

    return function(smaller problem);
}

/*
Example 1 – Factorial Using Recursion
Factorial

5!
=5×4×3×2×1
=120

Recursive Formula
n!
=n × (n−1)!

Base Condition
1!
=1

Program
*/
int factorial(int n)
{
    if(n==1)
        return 1;

    return n*factorial(n-1);
}
/*
Working

Find
factorial(4)
4 × factorial(3)
↓
4 × (3 × factorial(2))
↓
4 × 3 × (2 × factorial(1))
↓
4 × 3 × 2 × 1
↓



24
Example 2 – Fibonacci Series
Formula
F1=1
F2=1
Fn=Fn−1+Fn−2

Series
1 1 2 3 5 8 13 21...

Program
*/
int fibonacci(int n)
{
    if(n==1 || n==2)
        return 1;

    return fibonacci(n-1)+fibonacci(n-2);
}

/*
Advantages of Recursion
Smaller programs.
Easy implementation of mathematical problems.
Suitable for tree and graph algorithms.
Useful for divide-and-conquer algorithms.


Disadvantages
More memory usage.
Slower than loops.
Risk of stack overflow.
Infinite recursion if no base condition exists.
Very Important Point

Every recursive function must have a base condition.

Wrong
factorial(n)
{
    return n*factorial(n-1);
}

This never stops.

Correct
if(n==1)
    return 1;


3. Passing One-Dimensional Arrays to Functions
Definition
Entire arrays can be passed to functions.

Example
largest(a,n);
Only the array name is passed.

Syntax

float largest(float array[],int size)


or

float largest(float array[10],int size)


Example */
#include<stdio.h>

int sum(int a[],int n)
{
    int i,s=0;

    for(i=0;i<n;i++)
        s=s+a[i];

    return s;
}

//Calling

sum(arr,5);


/*
Important Rules
Rule 1
Pass only the array name.

Correct
sum(arr,5);

Wrong
sum(arr[],5);


Rule 2
Formal parameter must be an array.
int sum(int a[],int n)


Rule 3
Prototype should also contain array.
int sum(int[],int);








Pass by Address
Unlike ordinary variables,
Arrays are passed using their address.

Meaning
Array Name
↓
Address of first element
Therefore,
Changes inside function
↓
Change original array also.

Example
void change(int a[])
{
    a[0]=100;
}

Original array also becomes
100 ...

Three Rules for Passing Arrays
1) Pass only array name.
2) Formal parameter must be array type.
3)Prototype must indicate array.









4. Searching
Searching means finding an element inside an array.

Example
10 20 30 40 50
Search
30
Position
2




Linear Search
Checks every element one by one.
Example
20 10 30 40
↓
20
↓
10
↓
30 Found

Time Complexity
O(n)


Linear Search Algorithm
Start
↓
Compare first element
↓
Found?
Yes → Return position
No
↓
Check next
↓
End
↓
REturn -1




5. Sorting
Sorting arranges data in order.

ExamplE
Before
5 2 8 1
After
1 2 5 8




Selection Sort
Idea
Find minimum element.
↓
Place it first.
↓
Repeat for remaining elements.
Example
5 7 3 2 1
↓
1 7 3 2 5
↓
1 2 3 7 5
↓
1 2 3 5 7

Passes required
n−1

Time Complexity
O(n²)





Bubble Sort
Repeatedly swaps adjacent elements.
Example
5 3 2
↓
3 5 2
↓
3 2 5
↓
2 3 5

Time Complexity
O(n²)





6. Passing Two-Dimensional Arrays
Example
int marks[3][4];
Syntax
void display(int a[][4],int rows)


Notice
Second dimension must be specified.

Rules
Pass only array name.
Mention two brackets.
Specify second dimension.
Prototype same as function header.
*/








/*
Passing Strings to Functions
Strings are character arrays.

Example
char name[20];

Function
void display(char str[])

Call
display(name);



Rules
Declare parameter as character array.
Prototype must contain character array.
Pass only string name.



8. Storage Classes in C
Storage class decides

Scope
Lifetime
Visibility
Storage location

Types
Automatic
Global (External)
Static
Register
Automatic Variables (auto)

Definition
Declared inside function.

Example
void test()
{
    int x;
}

or
auto int x;




Properties
Local to function.
Created when function starts.
Destroyed when function ends.
Default storage class.
Global Variables (External Variables)

Definition
Declared outside all functions.

Example
int x;

main()
{
}


Properties
Accessible by every function.
Lifetime is entire program.
Initialized to zero by default.
Local vs Global
int count=5;
main()
{
    int count=10;
}

Inside main
count=10


Local variable hides global variable.
extern Keyword
Used when variable is defined elsewhere.

Example
extern int x;
It tells compiler
"x exists somewhere else."
No new memory is allocated.

Static Variables
Declaration
static int x;

Properties
Initialized only once.
Retains value between function calls.
Scope is local.
Lifetime is entire program.

Example
Call1
x=1
Call2
x=2
Call3
x=3





Auto vs Static
Auto	                                                  Static
Created every call	                                    Created once
Destroyed after function	                      Exists till program ends
Doesn't remember value	                          Remembers previous value





Register ariables
Declaration
register int i;
Stored in CPU register instead of memory.

Advantages
Faster access.
Used for loop counters.

Example
register int i;
for(i=0;i<100;i++)




9. Scope, Visibility and Lifetime
Scope
Area where variable can be used.

Example
Local variable
↓
Only inside its function.

Visibility
Whether variable can be accessed.
Example
Inner local variable hides outer variable.

Lifetime
Time during which variable exists.
Example
Auto
↓
Function execution only.

Static
↓
Entire program.

Scope Rules (Important for Exams)
Global variable scope → Entire program file.
Local variable scope → Block or function where declared.
Formal parameter scope → Only inside its function.
Auto variable in main() lives until program ends but is accessible only in main().
Auto variable in other functions is destroyed when the function exits.
Static local variable retains its value until the program ends.
Variables are visible within their scope unless another variable with the same name hides them.
If a variable is redeclared inside a nested block, the inner declaration hides the outer one.
10. Nested Blocks

Example

{
    int a=10;

    {
        int a=20;
    }
}

Inside inner block
a=20
Outside
a=10
Inner variable hides outer variable.

11. Multifile Programs
Large programs are often split into multiple source files.


Advantages:
Easier maintenance.
Faster recompilation.
Better code organization.
Supports teamwork.

Variables shared across files should be:
Defined in one file.
Declared with extern in other files.

Example:
file1.c
extern int count;
file2.c
int count = 10;
Functions defined in another file should also have a prototype (declaration) in the file where they are called.


*/
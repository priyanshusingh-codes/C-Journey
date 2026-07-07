/*

KEY CONCEPTS (Chapter 12: Pointers)


1. Memory
Definition:
Memory is a sequential collection of storage cells, where each cell has a unique address.
Example
Address     Value
1000         10
1004         20
1008         30
Every variable is stored at some memory address.



2. Pointer
Definition:
A pointer is a derived data type that stores the memory address of another variable.
Example
int x = 10;
int *p = &x;

Here,
x stores 10
p stores the address of x



3. Pointer Variable
Definition:
A pointer variable is a variable whose value is the address of another variable.
Example
int num = 50;
int *ptr = &num;
num

Address : 2000
Value   : 50



ptr
Address : 3000
Value   : 2000
Here,
ptr → num




4. Call by Reference
Definition:
Call by reference is the process of passing the address of variables to a function using pointers.
The function can modify the original variable.
Example
void change(int *x)
{
    *x = 100;
}

int main()
{
    int a = 10;
    change(&a);
    printf("%d", a);
}

Output
100






5. Call by Value
Definition:
Call by value means passing a copy of the variable to a function.
Changes inside the function do not affect the original variable.

Example
void change(int x)
{
    x = 100;
}

int main()
{
    int a = 10;
    change(a);
    printf("%d", a);
}

Output
10


























ALWAYS REMEMBER (Important Exam Points)
1. Pointer stores only addresses.
 
Correct
int x = 10;
int *p = &x;


Wrong
int *p = 10;




2. Pointer type and variable type must be the same.

Correct
int x;
int *p = &x;


Wrong
float x;
int *p = &x;

Reason:
An int pointer should point only to an int variable.



3. Do not assign a variable value to a pointer.

Wrong
int x = 20;
int *p;
p = x;

Correct
p = &x;





4. Use & and * carefully.
Address Operator (&)
Returns the address.

p = &x;


Indirection Operator (*)
Returns the value stored at the address.

printf("%d", *p);
Confusing these operators is one of the most common pointer mistakes.



5. Declaring a pointer does NOT create the target variable.
int *p;
Only memory for p is created.
No integer variable is created automatically.




6. Initialize every pointer before using it.
Wrong
int *p;
*p = 20;
This causes undefined behavior because p contains a garbage address.

Correct
int x;
int *p = &x;




7. Never assign a numeric constant to a pointer.
Wrong
int *p = 5000;

Correct
int x;
int *p = &x;




8. Never assign an address to an ordinary variable.

Wrong
int x;
int y;
y = &x;

Correct
int *p = &x;




9. Understand pointer precedence.

Examples
*p++
means
*(p++)
Pointer increments after dereferencing.

(*p)[3]
Pointer to an array.

*p[3]
Array of pointers.
ptr->member
Access structure members through a pointer.

10. Pointer to Pointer
Single pointer
int *p;
Double pointer
int **pp;
Access
*pp
gives the pointer.
**pp
gives the actual value.





11. Arrays are passed as pointers.
When an array is passed to a function,
fun(arr);
Actually,
Address of arr[0]
is passed.

Example
void fun(int arr[])
is equivalent to
void fun(int *arr)






12. To modify a variable inside a function, pass its address.
Example
swap(&a, &b);
instead of
swap(a, b);





13. Formal parameter must be a pointer.
Calling function
change(&x);
Function definition
void change(int *p)




14. Different pointer types need casting.
Wrong
float f;
int *p = &f;



Correct
int *p = (int *)&f;
Exception: void * can hold any pointer type without explicit casting.


*/
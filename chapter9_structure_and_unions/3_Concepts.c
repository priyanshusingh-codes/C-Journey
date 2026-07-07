/*

KEY CONCEPTS



1. Array
Collection of elements of the same data type.
Fixed size.


Example:
int a[5];




2. Dot Operator (.)
Used to access structure members.
Syntax:
structure_variable.member

Example:
student.roll
student.marks





3. Structure
A user-defined data type that groups variables of different data types under one name.

Example:
struct Student
{
    int roll;
    char name[20];
    float marks;
};




4. Union
Similar to a structure.
All members share the same memory location.
Only one member can store a valid value at a time.

Example:
union Data
{
    int i;
    float f;
    char c;
};






5. Bit Field
Stores data using only the required number of bits.
Saves memory.

Example:
struct info
{
    unsigned int age:7;
    unsigned int gender:1;
};
ALWAYS REMEMBER (Exam Points)
Structure

Put semicolon (;) after every structure definition.

struct Student
{
    int roll;
};

Variables can be declared while defining the structure.

struct Student
{
    int roll;
} s1,s2;

Structure tag comes before the opening brace.

Correct
struct Student
{
    int roll;
};

Wrong
struct
{
    int roll;
} Student;

typedef name comes after the closing brace.

typedef struct
{
    int roll;
} Student;

Variables cannot be declared inside a typedef definition.

Correct
Student s1;
Structure Members

Cannot use a structure variable as its own member.

Wrong
struct Student
{
    struct Student s;
};

Must write struct while declaring variables (unless using typedef).

Correct
struct Student s1;

Wrong
Student s1;

(if typedef is not used)

Never access a member directly.
Wrong
roll = 5;

Correct
student.roll = 5;

Use & with numeric members in scanf().

Correct
scanf("%d",&student.roll);

String member
scanf("%s",student.name);
(No &)

Give meaningful tag names.

Example
struct Employee

instead of

struct A
Structure Operations

Struc ture variables cannot be compared.

Wrong
if(s1==s2)


Structures of different types cannot be assigned.

Wrong
student = employee;



Structures of the same type can be copied.

Correct
s2 = s1;
Pointer to Structure




Dot notation
(*ptr).roll
Parentheses are compulsory.

Wrong
*ptr.roll


Arrow operator
Correct
ptr->roll
No space allowed.


Wrong
ptr - > roll
Array of Structures

Correct
student[0].roll

Wrong
student.roll
Nested Structures

Must include every level.

Correct
employee.address.city

Wrong
employee.city
Structures with Functions




Passing a pointer is faster than passing the whole structure.

Example
fun(&student);
Union

Only one member stores data at a time.
u.i=10;
u.f=2.5;

Now u.i becomes invalid.

Union initialization must match the first member's datatype.

Correct
union item
{
    int a;
    float b;
};

union item x={10};

Wrong
union item x={2.5};
Bit Fields


Cannot use scanf() directly.

Wrong
scanf("%d",&emp.age);


Cannot use pointers.

Wrong
ptr=&emp.age;


Bit fields cannot be arrays.

Wrong
int age[5]:3;




*/
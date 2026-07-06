/*

1. What is a Structure?

Definition
A structure is a collection of logically related variables of different data types stored under a single name.

Example
struct Student
{
    char name[30];
    int roll;
    float marks;
};

Here,
name → character array
roll → integer
marks → float
All belong to one structure called Student.

Why do we use Structures?
Suppose we want to store
Student name
Roll
Marks

Using separate variables
char name[30];
int roll;
float marks;
This becomes difficult when storing 100 students.

Instead,
struct Student
{
    char name[30];
    int roll;
    float marks;
};

struct Student s1, s2, s3;
Everything remains organized.

*/
//Structure Syntax
struct structure_name
{
    //datatype member1;
    //datatype member2;
    //datatype member3;
};

struct Book
{
    char title[50];
    char author[30];
    int pages;
    float price;
};

/*
Structure Tag
Book
Members
title
author
pages
price


*/






/*

Structure Variable Declaration
After defining a structure

struct Book
{
    char title[50];
    int pages;
};

Declare variables
struct Book b1;
struct Book b2;

Or

struct Book b1, b2, b3;



Accessing Members
Use the dot (.) operator

Syntax
variable.member

Example
b1.pages = 250;

Another example

strcpy(b1.title,"C Programming");


Input Using scanf

scanf("%s", b1.title);
scanf("%d",&b1.pages);
scanf("%f",&b1.price);


Output
printf("%s", b1.title);
printf("%d", b1.pages);
printf("%.2f", b1.price);








*/



#include<stdio.h>

struct Student
{
    char name[20];
    int roll;
    float marks;
};

int main()
{
    struct Student s;

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter roll: ");
    scanf("%d",&s.roll);

    printf("Enter marks: ");
    scanf("%f",&s.marks);

    printf("\nStudent Details\n");

    printf("Name = %s\n",s.name);
    printf("Roll = %d\n",s.roll);
    printf("Marks = %.2f\n",s.marks);

    return 0;
}


/*

Structure Initialization
struct Student
{
    int roll;
    float marks;
};

struct Student s1 = {10,89.5};



Here
roll = 10
marks = 89.5


Rules of Initialization
Order must match member order.
Partial initialization allowed.

Example

struct Student s = {10};

Output
roll = 10
marks = 0
*/



/*
Arrays vs Structures
| Arrays                 | Structures               |
| ---------------------- | ------------------------ |
| Same data type         | Different data types     |
| Derived data type      | User-defined data type   |
| All elements identical | Members may differ       |
| Example: int marks[50] | Example: Student details |




Structure Assignment

Allowed
student1 = student2;
Entire structure gets copied.

Structure Comparison
Not allowed
student1 == student2
Invalid



Need to compare members individually.
Example

if(student1.roll==student2.roll)
Operations on Members

Allowed
student.roll++;

Allowed
student.marks += 5;

Allowed
student.marks = student.marks + 10;





Arrays of Structures

Example
struct Student
{
    char name[20];
    int roll;
};

struct Student s[100];

Now
s[0]
s[1]
s[2]
...

Each is a complete structure.

Access
s[0].roll
s[1].name
Arrays Inside Structures

Example
struct Student
{
    char name[20];
    int marks[5];
};

Access
student.marks[0]
student.marks[1]






Structures Within Structures (Nested Structure)
Example

struct Address
{
    char city[20];
    int pin;
};

struct Student
{
    char name[20];
    struct Address add;
};

Access
student.add.city
student.add.pin
typedef Structure

Instead of writing
struct Student s1;

Use
typedef struct
{
    char name[20];
    int roll;
}Student;

Now
Student s1;
No need to write struct.



Passing Structure to Functions
Three methods
1. Pass individual members
fun(student.roll,student.marks);
2. Pass entire structure
fun(student);
3. Pass structure address (pointer)
fun(&student);




Most efficient.
Access Methods
Suppose
struct Student s;
Access
Dot Operator
s.roll
Suppose
struct Student *ptr=&s;
Pointer
(*ptr).roll

or

ptr->roll
Dot Operator vs Arrow Operator
Dot	Arrow
Variable	Pointer
s.roll	ptr->roll
Memory Padding (Slack Bytes)




Structure members are aligned according to machine architecture.
Unused bytes inserted between members are called
Slack Bytes (or padding bytes)

Purpose
Faster memory access
Proper alignment
*/
/*
1. UNION
Definition
A union is a user-defined data type similar to a structure, but all its members share the same memory location. 
Definition: A union is a collection of different data types that share the same memory location, allowing only one member to store a value at a time.

Syntax
union Item
{
    int m;
    float x;
    char c;
};

Declare a variable:
union Item code;

*/
//Example
#include<stdio.h>

union Item
{
    int m;
    float x;
    char c;
};

int main()
{
    union Item code;

    code.m = 100;
    printf("%d\n", code.m);

    code.x = 25.5;
    printf("%.2f\n", code.x);

    return 0;
}


/*
Memory Representation
Union Item

+------------------+
|                  |
|      Memory      |
|                  |
+------------------+

m  ---> Same Memory
x  ---> Same Memory
c  ---> Same Memory
All members point to one common memory location.



Important Point
When one member is assigned a value, the previous value is destroyed.


Example
code.m = 20;
code.x = 15.5;

Now
code.x → correct
code.m → garbage value
because both use the same memory.

Structure vs Union

| Structure                                   | Union                                  |
| ------------------------------------------- | -------------------------------------- |
| Separate memory for each member             | Shared memory                          |
| All members can store values simultaneously | Only one member stores value at a time |
| More memory required                        | Less memory required                   |
| Members are independent                     | Members overwrite each other           |
| Used for storing records                    | Used to save memory                    |






Advantages :
Saves memory.
Useful in embedded systems.
Useful when only one value is needed at a time.


Disadvantages
Only one member is valid at a time.
Accessing another member gives unpredictable results.


Union Initialization

Valid
union Item
{
    int a;
    float b;
};
union Item x = {100};


Invalid
union Item x = {25.5};
because the first member is int.




sizeof() Operator
Definition : sizeof returns the number of bytes occupied by a variable or data type.

Syntax
sizeof(variable)

or

sizeof(datatype)

Example
int x;
printf("%d", sizeof(x));

Output
4
(on most modern systems)



Example
printf("%d", sizeof(float));



Structure Example
struct Student
{
    int roll;
    float marks;
};
printf("%d", sizeof(struct Student));


Returns total bytes occupied by the structure.






Array Example
int a[10];
printf("%d", sizeof(a));

Output
40

because
10 × 4 = 40 bytes




Finding Number of Elements
int a[10];
int n = sizeof(a)/sizeof(a[0]);

Output
10




Very common interview question.
BIT FIELDS
Definition : A bit field is a collection of bits used to store small integer values efficiently.

Instead of using 16 or 32 bits,
we can use only the required number of bits.



Why Bit Fields?
Suppose

Gender
Needs only
0 = Male
1 = Female
Only 1 bit is enough.
Without bit fields
int gender;
Memory = 4 bytes
With bit fields
1 bit only
Huge memory saving.



Syntax
struct
{
    unsigned int age : 7;
    unsigned int sex : 1;
    unsigned int married : 1;
};





General form
datatype variable : number_of_bits;



Example
struct Employee
{
    unsigned int age : 7;
    unsigned int sex : 1;
    unsigned int children : 4;
};
Assigning Values
emp.age = 25;
emp.sex = 1;
emp.children = 2;
Important Rules



1. Maximum bit length depends on machine.
Usually
1–16 bits




2. Bit fields cannot cross integer boundaries.
Compiler automatically starts a new word.



3. Cannot use scanf() directly

Wrong
scanf("%d",&emp.age);

Correct
int temp;
scanf("%d",&temp);
emp.age = temp;



4. Cannot take address
Wrong
&emp.age
Not allowed.




5. Cannot create arrays of bit fields
Invalid
age[5]:3;



6. Values must fit inside the field.
Example
unsigned age :3;
Maximum
2³−1 = 7
Valid
0–7
Formula
Maximum value
2ⁿ − 1
where
n = number of bits




Example
Bits	Maximum Value
1	            1
2	            3
3	            7
4	            15
5	            31
6	            63
7	            127
8	            255



Advantages of Bit Fields
Saves memory.
Faster processing.
Useful in hardware programming.
Useful in embedded systems.


Disadvantages
Machine dependent.
Cannot use pointers.
Cannot use scanf() directly.
Limited range of values.




*/
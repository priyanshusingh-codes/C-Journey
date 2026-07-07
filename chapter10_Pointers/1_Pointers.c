/*
1. Pointer
Definition : A pointer is a variable that stores the memory address of another variable.
Instead of storing data directly, it stores the location where the data is stored.


Example
int x = 10;
int *p;
p = &x;

Memory
x
Address : 1000
Value   : 10

p
Address : 2000
Value   : 1000

Here,
p → x










2. Why are pointers used?


Pointers are used for :
Dynamic memory allocation
Passing arguments by reference
Returning multiple values from functions
Efficient array handling
String manipulation
Linked lists
Trees
Stacks
Queues
Function pointers
Structure manipulation






3. Memory Address
Every variable occupies memory.

Example
int a = 25;


Suppose
Address = 5000
Value = 25

Address can be obtained using  => &

Example
printf("%u",&a);

Output
5000



4. Address Operator (&)
The address operator (&) returns the address of a variable.

Syntax
&variable



Example
int x=10;
printf("%u",&x);




Output
Address of x


Illegal Uses
&125
&(x+y)
&array_name

Valid
&x
&arr[2]





5. Declaring Pointer
Syntax
datatype *pointer_name;

Example
int *p;
float *q;
char *c;

Meaning
p points to int
q points to float
c points to char






6. Initializing Pointer
Example
int x=10;
int *p;
p=&x;

or

int *p=&x;
Important


Never use
int *p;

without initialization.
It contains a garbage address.





7. NULL Pointer
int *p=NULL;
or
int *p=0;

Means
Pointer points to nothing.




8. Dereference Operator (*)
The operator => *
gives the value stored at the address.



Example
int x=50;
int *p=&x;
printf("%d",*p);

Output
50

Difference

p => Stores address
*p => Stores value

Example
int x=20;
int *p=&x;
*p=40;




Now
x=40



9. Pointer Representation
x=100
Address=5000
Pointer p
p=5000
*p=100





10. Chain of Pointers
Pointer can point to another pointer.

x
↓
p1
↓
p2


Declaration
int x=100;
int *p1=&x;
int **p2=&p1;


Access
*p1 =100
**p2 =100




11. Pointer Expressions
Allowed
p+1
p-1
p++
p--
p1-p2
p1==p2



Not allowed
p1+p2
p1*p2
p1/p2





12. Pointer Arithmetic
Suppose
int occupies 4 bytes

Address
1000
After
p++;
Address becomes
1004
NOT
1001


Reason
Scale Factor




13. Scale Factor
Pointer moves according to datatype size.
Data Type	   Size
char	        1
short	        2
int	            4
float	        4
double	        8




14. Rules of Pointer Operations
Allowed
Assignment
Comparison
Increment
Decrement
Add integer
Subtract integer
Subtract two pointers (same array)


Not Allowed
Multiply
Divide
Add two pointers




15. Pointers and Arrays
Array name itself is a pointer.


Example
int x[5]={1,2,3,4,5};
x
↓
x[0]


Equivalent
x=&x[0]

Example
int *p=x;

Access
*p
*(p+1)
*(p+2)
*(p+3)

Equivalent
x[0]
x[1]
x[2]
x[3]




16. Traversing Array
int a[5]={1,2,3,4,5};
int *p=a;
for(i=0;i<5;i++)
{
printf("%d",*p);
p++;
}

Output
1 2 3 4 5






17. Pointer with 2-D Array
Element
a[i][j]
Equivalent
*(*(a+i)+j)

Example
int a[3][4];
a[2][3]=*(*(a+2)+3)


18. Pointers and Strings
String
char *str="GOOD";
or
char str[]="GOOD";
Printing
printf("%s",str);
Length
while(*str!='\0')
{
str++;
}






19. Array of Pointers
Instead of
char name[3][20];
Use
char *name[3];



Example
char *name[]={"Ram","Shyam","Hari"};
Less memory used.




20. Passing Pointer to Function
Example
void change(int *p)
{
*p=*p+10;
}

Main
int x=20;
change(&x);
printf("%d",x);
Output
30





21. Pass by Value
Copy of variable sent.
Original variable remains unchanged.
Example
void fun(int x)
{
x=50;
}
Original remains same.






22. Pass by Reference (Pointer)
Address is passed.
Original value changes.


Example
void fun(int *x)
{
*x=50;
}

Original becomes
50





Difference
| Pass by Value       | Pass by Reference |
| ------------------- | ----------------- |
| Copy passed         | Address passed    |
| Original unchanged  | Original changes  |
| Faster? No          | Yes               |
| Multiple values? No | Yes               |


*/






/*

23. Swapping using Pointer
void swap(int *a,int *b)
{
int t;
t=*a;
*a=*b;
*b=t;
}






24. Returning Multiple Values
void sumdiff(int a,int b,int *sum,int *diff)
{
*sum=a+b;
*diff=a-b;
}




25. Function Returning Pointer

Example
int *larger(int *a,int *b)
{
if(*a>*b)
return a;
else
return b;
}




26. Function Pointer
Declaration
int (*p)();
Assign
p=fun;
Call
(*p)();






27. Void Pointer
Declaration
void *vp;



Features
Generic pointer
Can point to any datatype
Cannot be dereferenced directly
28. Pointer Compatibility

Wrong
int *p;
float x;
p=&x;



Correct
p=(int *)&x;





29. Pointer to Structure
Example
struct student
{
int roll;
char name[20];
};

struct student s;
struct student *p=&s;

Access
p->roll
p->name
Equivalent
(*p).roll
(*p).name


Arrow Operator (->)
Used to access members through pointer.

Example
ptr->roll



30. Common Pointer Errors
1. Uninitialized Pointer
int *p;

*p=10;
Wrong

2. Assigning integer to pointer
int *p;

p=100;
Wrong

3. Printing pointer instead of value
printf("%d",p);

Should be
printf("%d",*p);


4. Wrong assignment
int *p;
float x;
p=&x;
Wrong


5. Comparing unrelated pointers
p>q

Only meaningful if both point to the same array.
*/
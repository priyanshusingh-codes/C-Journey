/*
Type of Conversion: Implicit and Explicit Conversions

Implicit Conversions:
Impilicit type conersion is the automatic conversion of one data type to another by compiler during data evaluation.
It is also called type coercion. It happens when an operator is applied to operands of different types, and the compiler converts one operand to the type of the other to perform the operation.

Why it happens:
TO avoid data loss and ensure that operations are performed on compatible types.

Order of Implicit Conversions:

int > float > double
char > int
short > int
long > int





                       long double |
                    double         |
                  float            |         ^
               unsigned long int   |       |   | 
            long int               |    Increasing
        unsigned int               |
       int                         |
Short | Char                       |
*/




/*
Explicit Conversions:
Explicit type conversion, also known as type casting, is the manual conversion of one data type to another by the programmer. It is done using a cast operator, which specifies the target type to which the value should be converted.

Syntax :
(data type) expression


*/
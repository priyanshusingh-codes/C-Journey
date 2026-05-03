/*
Used when there are multiple conditions / many choices.
Instead of writing many separate if statements, we use a chain:

if (condition1)
    statement1;
else if (condition2)
    statement2;
else if (condition3)
    statement3;
else
    default_statement;

*/




/*

Example 1: Student Grading

Rules:
80+ → Distinction
60+ → First Division
40+ → Pass
below 40 → Fail

*/

//Code
#include <stdio.h>
int main()
{
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 80)
        printf("Distinction");
    else if (marks >= 60)
        printf("First Division");
    else if (marks >= 40)
        printf("Pass");
    else
        printf("Fail");

    return 0;
}


/*
Test Cases
Marks = 85
Distinction

Marks = 65
First Division

Marks = 45
Pass

Marks = 30
Fail


*/
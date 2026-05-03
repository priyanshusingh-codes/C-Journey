/*

When one if...else is placed inside another if or else block, it is called nested if...else.
Used when decisions happen in multiple levels.



Basic Structure
if (condition1)
{
    if (condition2)
        statement1;
    else
        statement2;
}
else
{
    statement3;
}

*/




/*



How It Works

Step 1 : Check condition1
If false → statement3
If true → check condition2


Step 2 : Check condition2
True → statement1
False → statement2


Example
int age = 20;
int marks = 75;

if (age >= 18)
{
    if (marks >= 40)
        printf("Adult Pass");
    else
        printf("Adult Fail");
}
else
{
    printf("Minor");
}


Outputs
age = 20, marks = 75
Adult Pass
age = 20, marks = 30
Adult Fail
age = 15
Minor

| Concept   | Meaning              |
| --------- | -------------------- |
| Nested if | if inside another if |
| Used for  | multiple decisions   |
| else rule | nearest unmatched if |


*/
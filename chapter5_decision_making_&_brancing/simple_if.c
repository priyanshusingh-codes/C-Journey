/*

Simple if


Syntax:
if (condition)
{
   statements;
}
next_statement;

If true:

block runs
then next statement runs

If false:

block skipped
next statement runs





Using if for Counting
if (salary > 50000)
    count++;

Used when counting how many values satisfy a condition.

Compound Conditions
Use logical operators:
| Operator | Meaning |   
| -------- | ------- | - | -- |
| `&&`     | AND     |   |    |
| `        |         | ` | OR |
| `!`      | NOT     |   |    |

*/





/*


De Morgan’s Rule : Used to simplify negative conditions.

Rule:
!(A && B) = !A || !B
!(A || B) = !A && !B

Examples
!(x && y || !z)

Becomes:
!x || !y && z



*/
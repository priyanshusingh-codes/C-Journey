/*

When one choice must be selected from many alternatives, if...else if can become mess
*/ 

//Syntax
switch(expression)
{
    case value1:
        statements;
        break;

    case value2:
        statements;
        break;

    case value3:
        statements;
        break;

    default:
        statements;
}



/*

| Part         | Meaning                |
| ------------ | ---------------------- |
| `expression` | variable/value checked |
| `case`       | possible values        |
| `break`      | exit switch            |
| `default`    | if no match            |


*/







/*

Rules of switch
1. Expression must be integer / char
Allowed:
int, char


2. Case labels must be constants
Correct:
case 1:
case 'A':

Wrong:
case x : (if x is variable)

3. Case labels must be unique

Wrong:
case 1:
case 1:


4. Colon required
case 2:


5. default optional
If no match:
default:
   printf("Invalid");

6. Only one default

7. Nested switch allowed

Switch inside case block.



*/


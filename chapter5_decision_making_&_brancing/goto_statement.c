/*

goto is an unconditional jump statement in C.
It transfers control from one place in a program to another.

syntax :
goto label;

label:
    statement;


Meaning
goto label; → jump command
label: → destination point
*/


#include <stdio.h>

int main()
{
    printf("Line 1\n");

    goto end;

    printf("Line 2\n");

end:
    printf("Line 3\n");

    return 0;
}





/*


Label Rules

A label:
Must be valid identifier
Must end with colon :
Can be before or after goto

Examples:

start:
again:
finish:




Types of Jump


1. Forward Jump
Label is below goto.
goto end;
end:
Skips code in between.

2. Backward Jump
Label is above goto.
begin:
goto begin;
Repeats code → loop.


*/





//Backward Jump Loop
#include <stdio.h>

int main()
{
begin:
    printf("Hello\n");
    goto begin;

    return 0;
}


/*

Output
Hello
Hello
Hello
...

*/




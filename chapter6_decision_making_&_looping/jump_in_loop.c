/*

Why “Jumps in Loops” exist?
Normally, loops run until condition becomes false.

But sometimes we want:

Exit early 
Skip some part 
Jump to another place 

*/

// 1. break => Exit the loop immediately
//Example: Stop when number found
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            break;
        }
        printf("%d ", i);
    }

    return 0;
}

/*
Output:
1 2 3 4
Loop stops as soon as i == 5


break exits only ONE loop
 */





 
 
//Continue → Skip current iteration
//Example: Skip even numbers
#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}

/*
Output:
1 3 5 7 9
Skips even numbers
Loop continues normally
 

 */


 //3. goto → Jump anywhere (⚠️ dangerous)
//Example:
#include <stdio.h>

int main() {
    int i = 1;

start:
    if (i > 5)
        return 0;

    printf("%d ", i);
    i++;

    goto start;
}

/*
Output:
1 2 3 4 5


Why avoid goto?
Makes code messy 
Hard to debug
Breaks structure

Use only in rare cases (deep nested loops, error handling)

*/




//4. exit() → Exit entire program
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n < 0) {
        exit(0);
    }

    printf("Valid number");
}

//Program stops completely



/*

What is <stdlib.h>?
It is a header file in C
It stands for Standard Library

Why we use it?
It gives access to built-in functions like:

exit() → end program
malloc() → memory allocation
free() → free memory
rand() → random numbers
abs() → absolute value



*/
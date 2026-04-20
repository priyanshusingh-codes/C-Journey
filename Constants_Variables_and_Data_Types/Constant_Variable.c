#include <stdio.h>

int main() {
    const int x = 10;   // declare constant variable

    // x = 20;  // ❌ Error: cannot modify a const variable

    printf("Value of x = %d\n", x);
    return 0;
}
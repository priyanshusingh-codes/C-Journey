/*
💻 Overflow and Underflow of Data
🔴 1. Overflow
📌 Definition

Overflow occurs when a value exceeds the maximum limit that a data type can store.

📍 Example
#include<stdio.h>
int main() {
    unsigned char x = 255;
    x = x + 1;
    printf("%d", x);   // Output: 0
}

👉 Why?

unsigned char range = 0 to 255
255 + 1 = 256 (out of range)
So it wraps around to 0
⭐ Key Point
Happens when value is too large
Result becomes incorrect or wraps around
🔵 2. Underflow
📌 Definition

Underflow occurs when a value goes below the minimum limit of a data type.

📍 Example
#include<stdio.h>
int main() {
    unsigned char x = 0;
    x = x - 1;
    printf("%d", x);   // Output: 255
}

👉 Why?

Minimum = 0
0 - 1 = -1 (out of range)
Wraps to 255
⭐ Key Point
Happens when value is too small (below limit)
Also causes wrong results
*/
*/*
Declaration of Variable as Constant (const)
📌 Definition

A constant variable is one whose value cannot be changed after initialization.

🧠 Syntax
const data_type variable_name = value;
 
Example
const int x = 10;
x = 20;   // ❌ Error (cannot modify)


⭐ Key Points
Value is fixed after initialization
Compiler gives error if modified
Improves safety of data


🎯 Use
When you don’t want the value to change (e.g., fixed values like PI, tax rate)



💻 2. Declaration of Variable as Volatile (volatile)
📌 Definition

A volatile variable is one whose value can change anytime outside the program’s control.

🧠 Syntax
volatile data_type variable_name;

📍 Example
volatile int flag;

⭐ Key Points
Tells compiler: do not optimize this variable
Value may change unexpectedly
Always read from memory, not cache


🎯 Use
Hardware registers
Interrupts
Multi-threaded programs


🔄 Combined Example
const volatile int sensor_value;
Value cannot be modified by program
But may change externally (e.g., hardware)

*/
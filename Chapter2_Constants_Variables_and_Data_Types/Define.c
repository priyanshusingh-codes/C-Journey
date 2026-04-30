/*
A symbolic constant is a name given to a fixed value using #define, whose value does not change during program execution.

Syntax
#define NAME value

Example
#define PI 3.14
#define MAX 100

Example
#define PI 3.14
#define MAX 100

Example
#define PI 3.14
#define MAX 100

Characteristics
Defined using preprocessor directive (#define)
No data type is specified
No semicolon at the end
Value is replaced before compilation
Value cannot be changed during execution

Advantages
1. 🛠️ Modifiability
Easy to change values in one place
If value needs update, change only in #define, it reflects everywhere

👉 Example:
#define TAX 10
Change 10 → 12, whole program updates automatically

2. 📖 Understandability (Readability)
Makes code easier to read and understand
Meaningful names improve clarity
👉 Example:
area = PI * r * r;
Better than:
area = 3.14 * r * r;

3. 🔁 Reusability
Same constant can be used multiple times

4. ❌ Error Reduction
Avoids repeated typing of values → fewer mistakes

⚠️ Disadvantages
No type checking
Debugging can be harder
Scope is global
*/
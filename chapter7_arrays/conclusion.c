/*

KEY CONCEPTS – ARRAYS
---------------------

1. Core Definitions
Array
→ Fixed-size collection of elements of the same data type

One-Dimensional Array
→ List of elements accessed using one index
arr[i]

Two-Dimensional Array
→ Table (rows + columns), accessed using two indices
arr[i][j]

Multi-Dimensional Array
→ Array with more than 2 dimensions
arr[i][j][k]




2. Data Structure Concepts
Structured Data Types
→ Organize related data (e.g., arrays, structures)
Searching
→ Finding position of an element in array
Sorting
→ Arranging elements (ascending/descending)





3. Memory Concepts
Static Memory Allocation
→ Memory allocated at compile time
→ Fixed size
→ Static arrays
Dynamic Memory Allocation
→ Memory allocated at run time
→ Flexible size
→ Dynamic arrays (malloc, calloc, realloc)
ALWAYS REMEMBER (VERY IMPORTANT)




4. Declaration Rules

Must specify:
name + type + size




5. Indexing Rules
Index starts from 0
Ends at:
size - 1




6. Common Mistake 

Difference:
kth element → index = k - 1  
element k → index = k





7. Initialization Rule
If not initialized → garbage values
Extra values → compile-time error 




8. Bounds Safety 
Access only:
0 to size - 1
Outside → undefined behavior (dangerous)



9. Loop Errors (VERY COMMON)
Wrong:
for(i = 0; i <= 5; i++)   // goes out of bounds

Correct:
for(i = 0; i < 5; i++)



10. Subscript Errors
Wrong:
x[i, j]   //incorrect

Correct:
x[i][j]


11. Character Array Rule ⚠️
Always leave space for:
'\0'  (null character)



12. Initialization Rules (2D Arrays)
Only first dimension can be omitted
Others must be specified



13. Memory Efficiency Tip
Choose array size wisely:
Too large → waste memory
Too small → overflow risk



*/
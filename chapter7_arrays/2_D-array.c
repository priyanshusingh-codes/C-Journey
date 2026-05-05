/*

TWO-DIMENSIONAL ARRAYS
======================

1. Why 2D Arrays?
1D array → stores a list
2D array → stores a table (matrix)


Example use cases:
Marks of students (rows = students, columns = subjects)
Sales data (rows = salesgirls, columns = item



2. Definition
A two-dimensional array is an array of arrays used to store data in rows and columns




3. Mathematical Representation

In maths:
v[i][j]
i → row
j → column

Example:
v₂₃ → value at 2nd row, 3rd column


4. Declaration in C
Syntax:
type array_name[rows][columns];




5. Indexing Rule
Index starts from 0
First index → row
Second index → column
v[0][0] → first element  
v[1][2] → second row, third column



6. Accessing Elements
v[i][j]

Example:
v[2][2] = 325;




7. Memory Representation 
Stored in row-wise order (VERY IMPORTANT)

Example:
Row 1 → all columns  
Row 2 → all columns  
Row 3 → all columns  
Called Row-Major Order




8. Using Loops (Core Concept)
Always use nested loops

for(int i = 0; i < rows; i++) {
    for(int j = 0; j < cols; j++) {
        // work with array[i][j]
    }
}



9. Example (Multiplication Table Logic)
product[i][j] = (i + 1) * (j + 1);


Why +1?
Because index starts from 0
But table starts from 1
*/






/*


INITIALIZATION OF 2D ARRAYS
===========================


10. Method 1 (Single List)
int table[2][3] = {0, 0, 0, 1, 1, 1};

Filled row-wise:
Row 1 → 0 0 0  
Row 2 → 1 1 1  



11. Method 2 (Row-wise – Better)
int table[2][3] = {
    {0, 0, 0},
    {1, 1, 1}
};
More readable





12. Size Omission Rule
int table[][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
Rows auto-determined (2 rows)




13. Partial Initialization
int arr[2][3] = {
    {1, 1},
    {2}
};
Becomes:
1 1 0  
2 0 0  





14. Initialize All to Zero 
Method 1:
int m[3][5] = {{0}, {0}, {0}};
Method 2 (shortcut):
int m[3][5] = {0};
All elements = 0




15. Real Application (Frequency Table)
int frequency[5][5];
Meaning:
Rows → cities
Columns → car types
frequency[i][j] = number of cars of type j in city i




16. Memory Storage (VERY IMPORTANT)
Stored like this internally:

[0][0], [0][1], [0][2],
[1][0], [1][1], [1][2],
...
Row by row (row-major order)




17. Extension to Multi-Dimensional Arrays

Example:
int arr[2][3][3];

Storage rule:

Rightmost index changes fastest
arr[0][0][0]
arr[0][0][1]
arr[0][0][2]
arr[0][1][0]
...




*/
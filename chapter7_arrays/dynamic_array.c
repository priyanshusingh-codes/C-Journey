/*

DYNAMIC ARRAYS – NOTES
======================

1. Problem with Static Arrays
int arr[100];
Size is fixed at compile time
Cannot change later
You must guess size in advance

Problems:
Waste of memory (if too large)
Overflow risk (if too small)


2. Static Memory Allocation
Memory allocated at compile time
Arrays created like:
int arr[50];
Called static arrays



3. Dynamic Arrays – Definition
Arrays whose memory is allocated at run time

Size can be decided during execution




4. Why Dynamic Arrays?
When size is unknown beforehand
When data size changes
Efficient memory usage


5. How Dynamic Arrays Work

Created using:
Pointers
Memory allocation functions



6. Required Header File
#include <stdlib.h>



7. Important Functions
  1. malloc() (Memory Allocation)
     int *arr;
     arr = (int*) malloc(5 * sizeof(int));

Allocates memory for 5 integers

  2. calloc() (Contiguous Allocation)
     int *arr;
     arr = (int*) calloc(5, sizeof(int));

Allocates memory + initializes all values to 0

  3. realloc() (Resize Array)
arr = (int*) realloc(arr, 10 * sizeof(int));

Changes size from 5 → 10






Key Differences
===============

| Feature           | Static Array   | Dynamic Array |
| ----------------- | -------------- | ------------- |
| Memory allocation | Compile time   | Run time      |
| Size              | Fixed          | Flexible      |
| Memory usage      | May waste      | Efficient     |
| Resize            | Not possible   |  Possible    |



*/
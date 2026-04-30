/*
Manipulation of data at bit level.
Used for testing the bits.
May not applied to float or double.


List of Bitwise Operators:

| Operator | Name        | Meaning                 |                    
| -------- | ----------- | ----------------------- | 
| `&`      | AND         | 1 if both bits are 1    |                            
| `        | `           | OR                      | 
| `^`      | XOR         | 1 if bits are different |                            
| `~`      | NOT         | reverse bits            |                            
| `<<`     | Left Shift  | shift bits left         |                            
| `>>`     | Right Shift | shift bits right        |                            


1. Bitwise AND &
5 & 3
Binary:

  0101
& 0011
------
  0001 → 1

2. Bitwise OR |
5 | 3
  0101
| 0011
------
  0111 → 7

3. Bitwise XOR ^
5 ^ 3
  0101
^ 0011
------
  0110 → 6

//Rule: same bits → 0, different → 1

4. Bitwise NOT ~
~5

Binary:
5 = 00000101
~5 = 11111010

//Result becomes -6 (because of 2’s complement representation)

5. Left Shift <<
5 << 1
0101 → 1010 → 10

Equivalent to: 5 × 2 = 10

6. Right Shift >>
5 >> 1
0101 → 0010 → 2

//Equivalent to: 5 ÷ 2 = 2
*/
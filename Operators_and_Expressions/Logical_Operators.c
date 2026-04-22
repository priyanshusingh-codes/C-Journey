/*
ogical operators are used to combine or modify conditions

They return:
1 (true)
0 (false)


List of Logical Operators
| Operator | Name        | Example           | Meaning                              |        |   |         |                                  |
| -------- | ----------- | ----------------- | ------------------------------------ | ------ | - | ------- | -------------------------------- |
| `&&`     | Logical AND | `a > 5 && b < 10` | True if **both conditions** are true |        |   |         |                                  |
| `        |             | `                 | Logical OR                           | `a > 5 |   | b < 10` | True if **at least one** is true |
| `!`      | Logical NOT | `!(a > 5)`        | Reverses the result                  |        |   |         |                                  |


Truth Table
| A | B | Result |
| - | - | ------ |
| 1 | 1 | 1      |
| 1 | 0 | 0      |
| 0 | 1 | 0      |
| 0 | 0 | 0      |


OR (||)
| A | B | Result |
| - | - | ------ |
| 1 | 1 | 1      |
| 1 | 0 | 1      |
| 0 | 1 | 1      |
| 0 | 0 | 0      |


NOT (!)
| A | Result |
| - | ------ |
| 1 | 0      |
| 0 | 1      |


Important Points 💡
&& → both conditions must be true
|| → at least one must be true
! → flips true ↔ false
Used in:
if-else
loops
decision making
*/
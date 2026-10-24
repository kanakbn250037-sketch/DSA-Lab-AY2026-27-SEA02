# Pattern Printing Using Functions in C

**Name:** Kanak Bindal  
**Roll Number:** SEA02  
**Language:** C

## Aim
To write a menu-driven C program using user-defined functions to print different number, symbol, and alphabet patterns.

## Problem Statement
Create a C program that lets the user select and print one of the following patterns:
1. Right-angle triangle with numbers
2. Diamond-shaped pattern with numbers
3. Pyramid with asterisks
4. Pyramid using alphabets

The number of rows is entered by the user.

## Functions Used
- `rightAngleTriangle(int n)` — prints a right-angle triangle containing numbers from 1 to each row number.
- `diamondNumbers(int n)` — prints an upper and lower number pattern.
- `pyramidAsterisks(int n)` — prints a pyramid made of asterisks.
- `pyramidAlphabets(int n)` — prints a centered alphabet pyramid.
- `main()` — displays the menu, validates input, and calls the selected function.

## Algorithm
1. Start.
2. Display the student's name, roll number, and pattern menu.
3. Read the user's choice.
4. Check that the choice is between 1 and 4.
5. Read the number of rows, from 1 to 26.
6. Call the function corresponding to the selected pattern.
7. Display the pattern.
8. Stop.

## How to Compile and Run
Using GCC:

```bash
gcc program.c -o program
./program
```

On Windows, run the compiled executable `program.exe`.

## Sample Input and Output

### Test Case 1: Right-angle triangle
**Input**
```text
Choice: 1
Rows: 4
```

**Expected output**
```text
1
1 2
1 2 3
1 2 3 4
```

### Test Case 2: Pyramid with asterisks
**Input**
```text
Choice: 3
Rows: 4
```

**Expected output**
```text
   *
  * *
 * * *
* * * *
```

### Test Case 3: Pyramid using alphabets
**Input**
```text
Choice: 4
Rows: 4
```

**Expected output**
```text
   A
  ABA
 ABCBA
ABCDCBA
```

### Test Case 4: Invalid menu choice
**Input**
```text
Choice: 5
```

**Expected output**
```text
Invalid choice. Please select a number from 1 to 4.
```

## Complexity Analysis
Let `n` be the number of rows.

- **Right-angle triangle:** Time `O(n^2)`, auxiliary space `O(1)`.
- **Diamond number pattern:** Time `O(n^2)`, auxiliary space `O(1)`.
- **Asterisk pyramid:** Time `O(n^2)`, auxiliary space `O(1)`.
- **Alphabet pyramid:** Time `O(n^2)`, auxiliary space `O(1)`.

The space complexity is `O(1)` excluding the printed output because the program uses only a fixed number of loop variables.

## Conclusion
The program uses separate user-defined functions to print four patterns. It demonstrates functions, loops, conditional statements, input validation, and formatted output in C.

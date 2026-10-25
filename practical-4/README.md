# Decimal to Binary Conversion Using Stack in C

**Name:** Kanak Bindal  
**Roll Number:** SEA02  
**Language:** C

## Aim
To write a C program to convert a given decimal number into its equivalent binary representation using a stack data structure (Last-In-First-Out property).

## Problem Statement
Create a C program that prompts the user to enter a decimal integer, pushes the remainders of successive divisions by 2 onto a stack array, and pops them in reverse order to output the correct binary sequence.

## Concepts and Data Structures Used
- **Stack:** Implemented using a 1D array (`s[32]`) and a `top` pointer following the LIFO (Last-In-First-Out) principle, which naturally reverses the remainder order required for binary conversion.
- **Modulo & Division Arithmetic:** Extracts binary bits (`n % 2`) and scales down the number (`n / 2`).

## Algorithm
1. Start.
2. Read the decimal number `n` from the user.
3. If `n == 0`, directly display binary `0` and terminate.
4. Initialize stack pointer `top = -1`.
5. Repeat while `n > 0`:
   - Calculate remainder `r = n % 2`.
   - Update `n = n / 2`.
   - Increment `top` and push `r` onto stack `s[top] = r`.
6. Pop and print all elements from `top` down to `0` to get the binary representation.
7. Stop.

## How to Compile and Run
Using GCC:
```bash
gcc program.c -o program
./program

# Searching Contact Names Using Sequential and Binary Search in C

**Name:** Kanak Bindal  
**Roll Number:** SEA02  
**Language:** C

## Aim
To write a C program to store contact details using structures and implement Sequential (Linear) Search and Binary Search to find a specific contact name, tracking the comparison counts for both algorithms.

## Problem Statement
Create a C program that allows a user to:
1. Enter contact details (Name, Phone number, and Address) for $n$ contacts.
2. Display the entered contact list.
3. Perform a **Linear Search** to find a contact by name and count the comparisons made.
4. Sort the contact records alphabetically and perform a **Binary Search** to find the contact by name, tracking the number of binary comparisons.

## Functions/Concepts Used
- **Structures (`contact`):** To bundle contact information (`name`, `phone`, `address`).
- **Sequential Search:** Scans elements one by one from start to finish.
- **Bubble Sort:** Sorts the structures alphabetically by name before binary search.
- **Binary Search:** Repeatedly divides the sorted search interval in half.
- **`strcasecmp()`:** Case-insensitive string comparison function from `<string.h>`.

## Algorithm
1. Start.
2. Read the number of contacts $n$.
3. Loop $n$ times to read Name, Phone, and Address into a structure array `c[]`.
4. Display all stored contacts.
5. Read the target search string (`key`).
6. **Linear Search Process:** Traverse the array sequentially comparing `key` with each name using `strcasecmp`. Increment comparison counter (`lincom`). If matched, display details and break.
7. **Binary Search Process:** Sort the contact array alphabetically using Bubble Sort. Initialize `low = 0` and `high = n - 1`. While `low <= high`, calculate `mid`, compare, adjust bounds, and increment `bincom`.
8. Stop.

## How to Compile and Run
Using GCC:
```bash
gcc program.c -o program
./program

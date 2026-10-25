# Student Result Database Management Using Array of Structures in C

**Name:** Kanak Bindal  
**Roll Number:** SEA02  
**Language:** C

## Aim
To write a menu-driven C program using an array of structures to create, display, search, and sort student academic records (roll number, name, program, subjects, marks, total, and average).

## Problem Statement
Create a C program that manages student result databases with the following operations using a menu-driven interface:
1. **Create:** Enter student details including roll number, name, program, two subject names, and their respective marks. Automatically calculate total and average marks.
2. **Display:** Show all student records in a tabular format.
3. **Search:** Find and display a specific student's record using their Roll Number.
4. **Sort:** Sort student records in ascending order based on their Roll Number using Bubble Sort.
5. **Exit:** Terminate the program.

## Functions Used
- `create(stud s[], int n)` — inputs student details and calculates total and average marks.
- `disp(stud s[], int n)` — displays all student records in a structured table format.
- `search(stud s[], int n, int key)` — searches for a student record by roll number using linear search.
- `sort(stud s[], int n)` — sorts student records in ascending order by roll number.
- `main()` — controls the menu loop and invokes corresponding operations based on user choice.

## Algorithm
1. Start.
2. Display the menu options (Create, Display, Search, Sort, Exit).
3. Read the user choice (`op`).
4. Perform the operation based on the selected choice:
   - Case 1: Read number of students and invoke `create()`.
   - Case 2: Invoke `disp()` to show records.
   - Case 3: Read search key (roll number) and invoke `search()`.
   - Case 4: Invoke `sort()` to order records by roll number.
   - Case 5: Exit the program loop.
5. Repeat until choice is Exit.
6. Stop.

## How to Compile and Run
Using GCC:
```bash
gcc program.c -o program
./program

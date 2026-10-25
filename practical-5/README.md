# Circular Queue Implementation Using Array for Parcel Handling System in C

**Name:** Kanak Bindal  
**Roll Number:** SEA02  
**Language:** C

## Aim
To write a menu-driven C program to implement a Circular Queue data structure using an array for managing and processing parcels in a logistics or postal handling system.

## Problem Statement
Create a C program that simulates a parcel tracking and queue management system using a circular queue of fixed size (e.g., size 5). The program must support the following operations:
1. **Add (Enqueue):** Insert a new parcel number into the circular queue if space is available.
2. **Dispatch (Dequeue):** Remove and dispatch the parcel at the front of the queue.
3. **Display:** Show all active parcels currently waiting in the queue.
4. **Exit:** Terminate the program.

## Concepts and Data Structures Used
- **Circular Queue:** A linear data structure that follows the FIFO (First-In-First-Out) principle, but connects the end back to the front to maximize memory utilization and avoid the limitations of a standard linear queue.
- **Modulo Operator (`%`):** Used to wrap around indices `front` and `rear` circularly within the array bounds.

## Algorithm
1. Start.
2. Initialize `front = -1` and `rear = -1`.
3. Display the operation menu and read user choice (`op`).
4. Perform actions based on menu selection:
   - **Case 1 (Add):** Check if queue is full (`front == (rear + 1) % SIZE`). If not, update `front` if it's the first element, increment `rear circularly`, and store the parcel number.
   - **Case 2 (Dispatch):** Check if queue is empty (`front == -1`). If not, retrieve the element at `front`. If `front == rear`, reset queue (`-1`), otherwise advance `front circularly`.
   - **Case 3 (Display):** Traverse and print elements from `front` to `rear` using circular indexing.
   - **Case 4:** Exit loop.
5. Repeat until choice is Exit.
6. Stop.

## How to Compile and Run
Using GCC:
```bash
gcc program.c -o program
./program

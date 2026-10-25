# Dynamic Text Editor Using Singly Linked List in C

**Name:** Kanak Bindal  
**Roll Number:** SEA02  
**Language:** C

## Aim
To write a menu-driven C program implementing a Singly Linked List (SLL) to simulate a dynamic text editor supporting node creation, insertion at any position, deletion, traversal/display, and list reversal operations.

## Problem Statement
Create a C program that uses dynamic memory allocation (`malloc`, `free`) and pointers to maintain a sequence of text tokens or strings in a singly linked list. The program must provide the following operations:
1. **Create:** Build an initial linked list of text strings by prompting the user.
2. **Insert:** Insert a new text node at any specified position/location.
3. **Display:** Traverse and print all text nodes in order.
4. **Delete:** Remove a text node from a specified position.
5. **Reverse:** Reverse the order of text nodes in the linked list and display the result.
6. **Exit:** Terminate the program.

## Concepts and Data Structures Used
- **Singly Linked List (SLL):** A linear dynamic data structure where each node contains data (`char data[10]`) and a pointer (`struct SLL *next`) referencing the next node.
- **Dynamic Memory Allocation:** Uses `malloc()` to allocate nodes dynamically at runtime and `free()` to release memory during deletion.
- **Pointer Manipulation:** Core algorithms for traversing, inserting between nodes, updating pointers, and inverting link directions for reversal.

## Algorithm
1. Start.
2. Initialize `head = NULL`.
3. Display menu and read choice (`op`).
4. Perform operation based on choice:
   - **Case 1 (Create):** Allocate new nodes in a loop, attach them sequentially, and set pointers.
   - **Case 2 (Insert):** If `loc == 1`, insert at head. Otherwise, traverse to `loc - 1` and insert the new node by updating pointers.
   - **Case 3 (Display):** Traverse from `head` to `NULL`, printing each node's data string.
   - **Case 4 (Delete):** If `loc == 1`, remove head and free memory. Otherwise, traverse to `loc - 1` node, bypass target node, and free memory.
   - **Case 5 (Reverse):** Use three pointers (`prev`, `curr`, `next`) to iteratively reverse link directions, update `head`, and display the reversed list.
   - **Case 6 (Exit):** Terminate loop.
5. Repeat until Exit is selected.
6. Stop.

## How to Compile and Run
Using GCC:
```bash
gcc program.c -o program
./program

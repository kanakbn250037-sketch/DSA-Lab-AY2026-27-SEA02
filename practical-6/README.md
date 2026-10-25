# Train Ticket Booking System Using Queue in C

**Name:** Kanak Bindal  
**Roll Number:** SEA02  
**Language:** C

## Aim
To write a C program to implement a train ticket reservation and waiting list management system using a Circular Queue for confirmed bookings and a linear array for the waiting list.

## Problem Statement
Create a menu-driven C program that manages train seat allocations with a fixed quota:
1. **Book Ticket:** Books a confirmed ticket if slots are available in the circular queue. If the queue is full, adds the passenger to a waiting list queue.
2. **Cancel Ticket:** Removes a ticket from the confirmed queue and automatically promotes the first person from the waiting list into the confirmed list.
3. **Display Bookings:** Displays all currently confirmed tickets and the active waiting list.
4. **Exit:** Terminate the program.

## Concepts and Data Structures Used
- **Circular Queue:** Manages confirmed ticket reservations efficiently with wrap-around pointers (`front` and `rear`).
- **Linear Array / Queue:** Manages overflow passengers in a waiting list (`wait[]` and `wcount`).
- **Dynamic Queue Adjustment:** Automatically shifts confirmed seats and transfers the first waiting-list passenger upon cancellation.

## Algorithm
1. Start.
2. Display the menu options and read user choice (`op`).
3. Handle operations:
   - **Case 1 (Book):** Check if confirmed queue is full. If not, enqueue to confirmed queue. If confirmed queue is full, check waiting list capacity. If space exists, add to waiting list.
   - **Case 2 (Cancel):** Search for ticket in confirmed queue, shift elements to fill the gap, update queue pointers, and if `wcount > 0`, promote the front waiting-list passenger to the confirmed queue and shift waiting list elements.
   - **Case 3 (Display):** Print all confirmed tickets following circular queue traversal, then print waiting list elements.
   - **Case 4:** Exit loop.
4. Stop.

## How to Compile and Run
Using GCC:
```bash
gcc program.c -o program
./program

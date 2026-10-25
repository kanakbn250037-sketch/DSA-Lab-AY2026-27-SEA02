# Graph Traversal for Campus Navigation Using BFS and DFS in C

**Name:** Kanak Bindal  
**Roll Number:** SEA02  
**Language:** C

## Aim
To write a C program to implement graph representations (adjacency matrix) and graph traversal algorithms—Breadth-First Search (BFS) and Depth-First Search (DFS)—for campus navigation between buildings.

## Problem Statement
Create a C program that models a campus map using vertices (buildings) and edges (pathways between buildings). The program must:
1. Accept the number of buildings and connecting paths.
2. Build and display the adjacency matrix representing the graph.
3. Perform **Breadth-First Search (BFS)** starting from a specified building.
4. Perform **Depth-First Search (DFS)** starting from the same building.

## Concepts and Data Structures Used
- **Adjacency Matrix:** A 2D array (`arr[vrtx][vrtx]`) used to store graph edges where `1` indicates a path and `0` indicates no path.
- **Queue (for BFS):** Implemented using an array and pointers to visit nodes level by level (FIFO).
- **Recursion / Stack (for DFS):** Visits deep paths recursively until reaching a dead end (LIFO).

## Algorithm
1. Start.
2. Read vertices count (`vrtx`) and edges count (`edg`).
3. Initialize adjacency matrix with `0`.
4. Read edge pairs (`x`, `y`) and set `arr[x][y] = arr[y][x] = 1`.
5. Print adjacency matrix.
6. **BFS Algorithm:** Use a queue and a `visited` array. Enqueue the starting node, mark as visited, then iteratively visit all unvisited adjacent nodes.
7. **DFS Algorithm:** Use recursion and a `visited` array. Mark current node as visited, print it, and recursively visit all unvisited adjacent nodes.
8. Stop.

## How to Compile and Run
Using GCC:
```bash
gcc program.c -o program
./program

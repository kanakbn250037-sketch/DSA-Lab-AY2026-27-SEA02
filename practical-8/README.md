# Binary Search Tree (BST) Operation for Online Directory System in C

**Name:** Kanak Bindal  
**Roll Number:** SEA02  
**Language:** C

## Aim
To write a menu-driven C program to implement a Binary Search Tree (BST) for an Online Directory System, supporting node insertions alphabetically by contact name, tree traversals (Inorder, Preorder, and Postorder), and efficient contact searching.

## Problem Statement
Create a C program that manages a phone directory using a Binary Search Tree data structure. The program must provide the following features:
1. **Insert:** Add a new contact (Name and Mobile number) into the BST, maintaining the property where left child names are alphabetically smaller and right child names are larger than the root.
2. **Display Traversals:** Output the directory using Inorder, Preorder, and Postorder traversal methods.
3. **Search:** Efficiently locate and display a contact's details by searching for their name in the BST.
4. **Exit:** Terminate the program.

## Concepts and Data Structures Used
- **Binary Search Tree (BST):** A hierarchical non-linear data structure where each node has at most two children, structured such that searching and sorting operations are optimized.
- **Tree Traversals:**
  - *Inorder (Left, Root, Right):* Yields sorted/alphabetical contact listings.
  - *Preorder (Root, Left, Right):* Useful for copying or serializing the tree.
  - *Postorder (Left, Right, Root):* Useful for deletion or bottom-up processing.
- **String Comparison (`strcmp`):** Used to determine alphabetical ordering for BST insertion and searching.

## Algorithm
1. Start.
2. Initialize `root = NULL`.
3. Display the menu and read user choice.
4. Perform actions:
   - **Case 1 (Insert):** Read name and mobile number. Recursively compare name with current node and insert into left or right subtree.
   - **Case 2 (Traversals):** Display contacts using Inorder, Preorder, and Postorder recursive functions.
   - **Case 3 (Search):** Recursively search for a matching name by comparing with the current node value and moving left or right.
   - **Case 4:** Exit loop.
5. Repeat until choice is Exit.
6. Stop.

## How to Compile and Run
Using GCC:
```bash
gcc program.c -o program
./program

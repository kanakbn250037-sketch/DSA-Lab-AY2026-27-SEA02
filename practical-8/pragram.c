// Name: Kanak Bindal
// Roll no: SEA02
// Binary Search Tree Operation for Online Directory System

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char name[30];
    char mobile[15];
    struct Node *left, *right;
};

// Create new node
struct Node* createNode(char name[], char mobile[]) {
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->name, name);
    strcpy(newNode->mobile, mobile);
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insert into BST alphabetically based on name
struct Node* insert(struct Node *root, char name[], char mobile[]) {
    if (root == NULL)
        return createNode(name, mobile);
    
    if (strcmp(name, root->name) < 0)
        root->left = insert(root->left, name, mobile);
    else if (strcmp(name, root->name) > 0)
        root->right = insert(root->right, name, mobile);
    
    return root;
}

// Inorder Traversal (Left, Root, Right - displays contacts in alphabetical order)
void inorder(struct Node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%s\t\t%s\n", root->name, root->mobile);
        inorder(root->right);
    }
}

// Preorder Traversal (Root, Left, Right)
void preorder(struct Node *root) {
    if (root != NULL) {
        printf("%s\t\t%s\n", root->name, root->mobile);
        preorder(root->left);
        preorder(root->right);
    }
}

// Postorder Traversal (Left, Right, Root)
void postorder(struct Node *root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%s\t\t%s\n", root->name, root->mobile);
    }
}

// Search for a contact by name
void search(struct Node *root, char name[]) {
    if (root == NULL) {
        printf("Contact not found.\n");
        return;
    }
    
    int cmp = strcmp(name, root->name);
    if (cmp == 0) {
        printf("\nContact Found!\n");
        printf("Name   : %s\n", root->name);
        printf("Mobile : %s\n", root->mobile);
    } else if (cmp < 0) {
        search(root->left, name);
    } else {
        search(root->right, name);
    }
}

int main() {
    struct Node *root = NULL;
    int choice;
    char name[30], mobile[15];

    do {
        printf("\n--- ONLINE DIRECTORY SYSTEM ---\n");
        printf("1. Create / Insert Contact\n");
        printf("2. Display All Traversals (Inorder, Preorder, Postorder)\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter name: ");
                scanf("%s", name);
                printf("Enter mobile number: ");
                scanf("%s", mobile);
                root = insert(root, name, mobile);
                printf("Contact added successfully.\n");
                break;

            case 2:
                printf("\n--- INORDER TRAVERSAL (Alphabetical) ---\n");
                printf("Name\t\tMobile\n");
                printf("----------------------------------\n");
                inorder(root);

                printf("\n--- PREORDER TRAVERSAL ---\n");
                printf("Name\t\tMobile\n");
                printf("----------------------------------\n");
                preorder(root);

                printf("\n--- POSTORDER TRAVERSAL ---\n");
                printf("Name\t\tMobile\n");
                printf("----------------------------------\n");
                postorder(root);
                break;

            case 3:
                printf("Enter name to search: ");
                scanf("%s", name);
                search(root, name);
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please select between 1 and 4.\n");
        }
    } while(choice != 4);

    return 0;
}

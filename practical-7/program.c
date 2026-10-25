// Name: Kanak Bindal
// Roll no: SEA02
// Dynamic Text Editor Using Singly Linked List

#include <stdio.h>
#include <stdlib.h>

typedef struct SLL {
    char data[10];
    struct SLL *next;
} SLL;

int main() {
    SLL *head = NULL, *p, *q, *nw, *temp;
    int ans, op, loc;

    do {
        printf("\n1. Create\n2. Insert\n3. Display\n4. Delete\n5. Reverse\n6. Exit\n");
        printf("Enter option: ");
        scanf("%d", &op);

        switch (op) {
            case 1: // Create
                do {
                    nw = (SLL*)malloc(sizeof(SLL));
                    printf("Enter data: ");
                    scanf("%s", nw->data);
                    nw->next = NULL;

                    if (head == NULL) {
                        head = nw;
                        p = head;
                    } else {
                        p->next = nw;
                        p = nw;
                    }

                    printf("Do you want to continue (1 for Yes, 0 for No): ");
                    scanf("%d", &ans);
                } while (ans == 1);
                break;

            case 2: // Insert at location
                printf("Enter location: ");
                scanf("%d", &loc);
                
                p = (SLL*)malloc(sizeof(SLL));
                printf("Enter data: ");
                scanf("%s", p->data);

                if (loc == 1) {
                    p->next = head;
                    head = p;
                } else {
                    q = head;
                    int valid = 1;
                    for (int i = 1; i < loc - 1; i++) {
                        if (q == NULL) {
                            printf("Underflow / Invalid Location!\n");
                            valid = 0;
                            break;
                        }
                        q = q->next;
                    }
                    if (valid && q != NULL) {
                        p->next = q->next;
                        q->next = p;
                    } else if (valid && q == NULL) {
                        printf("Underflow / Invalid Location!\n");
                    }
                }
                break;

            case 3: // Display
                if (head == NULL) {
                    printf("List is EMPTY\n");
                } else {
                    for (p = head; p != NULL; p = p->next) {
                        printf("%s->", p->data);
                    }
                    printf("NULL\n");
                }
                break;

            case 4: // Delete at location
                printf("Enter location: ");
                scanf("%d", &loc);

                if (head == NULL) {
                    printf("Underflow! List is empty.\n");
                    break;
                }

                if (loc == 1) {
                    p = head;
                    head = head->next;
                    free(p);
                    printf("Node deleted successfully.\n");
                } else {
                    q = head;
                    int valid = 1;
                    for (int i = 1; i < loc - 1; i++) {
                        if (q == NULL || q->next == NULL) {
                            printf("Underflow / Invalid Location!\n");
                            valid = 0;
                            break;
                        }
                        q = q->next;
                    }
                    if (valid && q->next != NULL) {
                        p = q->next;
                        q->next = p->next;
                        free(p);
                        printf("Node deleted successfully.\n");
                    } else if (valid) {
                        printf("Underflow / Invalid Location!\n");
                    }
                }
                break;

            case 5: // Reverse list and display
                {
                    SLL *prev = NULL, *curr = nxt = NULL; // standard reversal logic
                    curr = head;
                    while (curr != NULL) {
                        nxt = curr->next;
                        curr->next = prev;
                        prev = curr;
                        curr = nxt;
                    }
                    head = prev;

                    printf("Reversed List: ");
                    for (temp = head; temp != NULL; temp = temp->next) {
                        printf("%s->", temp->data);
                    }
                    printf("NULL\n");
                }
                break;

            case 6:
                printf("EXITED SUCCESSFULLY\n");
                break;

            default:
                printf("Invalid option! Please select between 1 and 6.\n");
        }
    } while (op != 6);

    return 0;
}

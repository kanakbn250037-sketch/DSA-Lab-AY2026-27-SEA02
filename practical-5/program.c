// Name: Kanak Bindal
// Roll no: SEA02
// Circular Queue Implementation Using Array for Parcel Handling System

#include <stdio.h> 
#define SIZE 5 

int main() {
    int arr[SIZE]; 
    int op;
    int front = -1, rear = -1; 

    do {
        printf("\n1. Add Parcel\n2. Dispatch Parcel\n3. Display Parcels\n4. Exit\n"); 
        printf("Enter an option: ");
        scanf("%d", &op); 

        switch(op) {
            case 1: // Add / Enqueue
                if (front == (rear + 1) % SIZE) {
                    printf("Parcel queue is Full!\n\n"); 
                } else {
                    if (front == -1) {
                        front = 0; // Initialize front on first element
                    }
                    rear = (rear + 1) % SIZE; 
                    printf("Enter parcel no. to add: "); 
                    scanf("%d", &arr[rear]); 
                    printf("Parcel added successfully.\n\n");
                }
                break;
            
            case 2: // Dispatch / Dequeue
                if (front == -1) {
                    printf("Parcel queue is Empty!\n\n"); 
                } else {
                    printf("Parcel %d is dispatched.\n\n", arr[front]); 
                    if (front == rear) {
                        // Queue becomes empty after dispatching the last element
                        front = -1;
                        rear = -1;
                    } else {
                        front = (front + 1) % SIZE;
                    }
                }
                break;
            
            case 3: // Display
                if (front == -1) {
                    printf("Parcel queue is empty!\n\n"); 
                } else {
                    int i = front;
                    printf("Parcel numbers left in queue are: "); 
                    do {
                        printf("%d ", arr[i]); 
                        i = (i + 1) % SIZE;
                    } while (i != (rear + 1) % SIZE); 
                    printf("\n\n");
                }
                break;
            
            case 4:
                printf("EXITED SUCCESSFULLY\n");
                break;

            default:
                printf("Invalid option! Please choose between 1 and 4.\n\n");
        }
    } while(op != 4);

    return 0;
}

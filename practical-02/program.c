/*
 * Name: Kanak Bindal
 * Roll No: SEA02
 * Practical 02: Diamond Shape with Numbers
 */

#include <stdio.h>

void diamondNumbers(int n);

void diamondNumbers(int n) {
    int i, j;

    /* Upper half */
    for (i = 1; i <= n; i++) {
        for (j = n - 1; j >= i; j--) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    /* Lower half */
    for (i = n - 1; i >= 1; i--) {
        for (j = i; j < n; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

int main(void) {
    int n;

    printf("Name: Kanak Bindal\n");
    printf("Roll No: SEA02\n");
    printf("Practical 02: Diamond Shape with Numbers\n\n");
    printf("Enter the number of rows for the upper half (1-9): ");

    if (scanf("%d", &n) != 1 || n < 1 || n > 9) {
        printf("Invalid input. Please enter a number from 1 to 9.\n");
        return 1;
    }

    printf("\nDiamond pattern:\n");
    diamondNumbers(n);

    return 0;
}

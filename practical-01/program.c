/*
 * Name: Kanak Bindal
 * Roll No: SEA02
 * Program: Pattern printing using functions
 */

#include <stdio.h>

void rightAngleTriangle(int n);
void diamondNumbers(int n);
void pyramidAsterisks(int n);
void pyramidAlphabets(int n);

void rightAngleTriangle(int n) {
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

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

void pyramidAsterisks(int n) {
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = n - 1; j >= i; j--) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void pyramidAlphabets(int n) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = n - 1; j > i; j--) {
            printf(" ");
        }

        for (j = 0; j <= i; j++) {
            printf("%c", 'A' + j);
        }

        for (j = i - 1; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }
}

int main(void) {
    int choice, n;

    printf("Name: Kanak Bindal\n");
    printf("Roll No: SEA02\n");
    printf("\nPattern Printing Using Functions\n");
    printf("1. Right-angle triangle with numbers\n");
    printf("2. Diamond shape with numbers\n");
    printf("3. Pyramid with asterisks\n");
    printf("4. Pyramid using alphabets\n");
    printf("Enter your choice (1-4): ");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    if (choice < 1 || choice > 4) {
        printf("Invalid choice. Please select a number from 1 to 4.\n");
        return 1;
    }

    printf("Enter the number of rows (1-26): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 26) {
        printf("Invalid number of rows. Enter a value from 1 to 26.\n");
        return 1;
    }

    printf("\n");

    switch (choice) {
        case 1:
            printf("Right-angle triangle with numbers:\n");
            rightAngleTriangle(n);
            break;
        case 2:
            printf("Diamond shape with numbers:\n");
            diamondNumbers(n);
            break;
        case 3:
            printf("Pyramid with asterisks:\n");
            pyramidAsterisks(n);
            break;
        case 4:
            printf("Pyramid using alphabets:\n");
            pyramidAlphabets(n);
            break;
        default:
            printf("Invalid choice.\n");
            return 1;
    }

    return 0;
}

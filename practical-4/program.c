// Name: Kanak Bindal
// Roll no: SEA02
// Decimal to Binary Conversion using Stack

#include <stdio.h>

int main() {
    int n;
    printf("Enter Decimal number: ");
    scanf("%d", &n);

    int s[32], top = -1, r;

    // Handle special case for decimal 0
    if (n == 0) {
        printf("Binary number for given decimal number is: 0\n");
        return 0;
    }

    // Push successive remainders onto the stack
    while (n > 0) {
        if (top >= 31) {
            printf("Stack Overflow!\n");
            return 1;
        }
        r = n % 2;
        n = n / 2;
        top++;
        s[top] = r;
    }

    // Pop elements from the stack to display the binary equivalent
    printf("Binary number for given decimal number is: ");
    for (int i = top; i >= 0; i--) {
        printf("%d", s[i]);
    }
    printf("\n");

    return 0;
}

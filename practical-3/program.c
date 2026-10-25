// Name: Kanak Bindal
// Roll no: SEA02
// Searching contact name using Sequential and Binary Search

#include <stdio.h>
#include <string.h>

typedef struct contact {
    char name[20];
    char phone[20];
    char address[20];
} contact;

int main() {
    contact c[20];
    int n, i;
    int lincom = 0, linfound = 0, bincom = 0;
    char key[20];

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    printf("\n---// ENTER CONTACT DETAILS //---\n");
    for (i = 0; i < n; i++) {
        printf("\n~~~ Contact %d ~~~\n", i + 1);
        printf("Name: ");
        scanf("%s", c[i].name);
        printf("Contact: ");
        scanf("%s", c[i].phone);
        printf("Address: ");
        scanf("%s", c[i].address);
    }

    printf("\n---// DISPLAYING CONTACTS //---\n");
    for (i = 0; i < n; i++) {
        printf("\n~~~ Contact %d ~~~", i + 1);
        printf("\nName: %s", c[i].name);
        printf("\nContact: %s", c[i].phone);
        printf("\nAddress: %s\n", c[i].address);
    }
    printf("\n---// END //---\n\n");

    printf("Enter name of contact to search: ");
    scanf("%s", key);

    // 1. Linear Search
    printf("\n---// Linear Search //---");
    for (i = 0; i < n; i++) {
        lincom++;
        if (strcasecmp(key, c[i].name) == 0) {
            printf("\nCONTACT FOUND");
            printf("\nName: %s", c[i].name);
            printf("\nContact: %s", c[i].phone);
            printf("\nAddress: %s", c[i].address);
            linfound = 1;
            break;
        }
    }
    if (linfound == 0) {
        printf("\nCONTACT NOT FOUND");
    }
    printf("\nLinear comparisons: %d\n", lincom);

    // 2. Binary Search (Sorting the entire contact structure array by name)
    printf("\n---// Binary Search //---");
    contact temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcasecmp(c[j].name, c[j+1].name) > 0) {
                temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp;
            }
        }
    }

    int high = n - 1;
    int low = 0;
    int mid;
    int bin_found = 0;

    while (low <= high) {
        mid = (high + low) / 2;
        int cmp = strcasecmp(c[mid].name, key);
        
        if (cmp == 0) {
            bincom++;
            printf("\nContact found at location %d", mid + 1);
            printf("\nName: %s", c[mid].name);
            printf("\nContact: %s", c[mid].phone);
            printf("\nAddress: %s", c[mid].address);
            bin_found = 1;
            break;
        } else if (cmp < 0) {
            bincom++;
            low = mid + 1;
        } else {
            bincom++;
            high = mid - 1;
        }
    }
    
    if (!bin_found) {
        printf("\nContact not found");
    }
    printf("\nNumber of binary comparisons: %d\n", bincom);

    return 0;
}

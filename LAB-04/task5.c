#include <stdio.h>
int main() {
    int choice;
    printf("1. Balance Inquiry\n2. Withdraw Money\n3. Deposit Money\n4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Balance Inquiry Selected\n"); break;
        case 2: printf("Withdraw Money Selected\n"); break;
        case 3: printf("Deposit Money Selected\n"); break;
        case 4: printf("Exit Selected\n"); break;
        default: printf("Invalid Choice\n");
    }

    return 0;
}

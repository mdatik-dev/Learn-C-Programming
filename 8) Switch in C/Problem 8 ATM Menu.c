#include <stdio.h>

int main() {

    int choice;

    printf("1.Balance\n2.Withdraw\n3.Deposit\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Balance Selected"); break;
        case 2: printf("Withdraw Selected"); break;
        case 3: printf("Deposit Selected"); break;
        default: printf("Invalid");
    }

    return 0;
}

#include <stdio.h>

int main() {

    int choice;

    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Balance\n");

    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Deposit Selected");
            break;

        case 2:
            printf("Withdraw Selected");
            break;

        case 3:
            printf("Balance Selected");
            break;

        default:
            printf("Invalid Option");
    }

    return 0;
}

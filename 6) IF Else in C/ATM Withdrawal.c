#include <stdio.h>

int main() {

    int balance, amount;

    printf("Enter Account Balance: ");
    scanf("%d", &balance);

    printf("Enter Withdraw Amount: ");
    scanf("%d", &amount);

    if(amount <= balance)
        printf("Withdrawal Successful");
    else
        printf("Insufficient Balance");

    return 0;
}

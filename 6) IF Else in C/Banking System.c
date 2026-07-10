#include <stdio.h>

int main() {

    int balance = 10000;
    int withdraw;

    printf("Enter Withdraw Amount: ");
    scanf("%d", &withdraw);

    if(withdraw <= balance)
        printf("Transaction Successful");
    else
        printf("Insufficient Balance");

    return 0;
}

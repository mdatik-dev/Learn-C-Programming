#include <stdio.h>

int main() {

    int amount;

    printf("Enter Recharge Amount: ");
    scanf("%d", &amount);

    if(amount >= 1000)
        printf("Bonus: 20 GB");
    else if(amount >= 500)
        printf("Bonus: 10 GB");
    else
        printf("No Bonus");

    return 0;
}

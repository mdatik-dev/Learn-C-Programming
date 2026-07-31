#include <stdio.h>

int main() {
    int recharge;

    printf("Enter Recharge Amount: ");
    scanf("%d", &recharge);

    if(recharge >= 1000)
        printf("You Get 20GB Bonus Internet");
    else if(recharge >= 500)
        printf("You Get 10GB Bonus Internet");
    else if(recharge >= 200)
        printf("You Get 2GB Bonus Internet");
    else
        printf("No Bonus");

    return 0;
}

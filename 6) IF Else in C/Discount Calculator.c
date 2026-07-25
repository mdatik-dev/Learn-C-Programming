#include <stdio.h>

int main() {
    float amount, discount;

    printf("Enter Purchase Amount: ");
    scanf("%f", &amount);

    if(amount >= 10000)
        discount = amount * 0.20;
    else if(amount >= 5000)
        discount = amount * 0.10;
    else
        discount = 0;

    printf("Discount = %.2f", discount);

    return 0;
}

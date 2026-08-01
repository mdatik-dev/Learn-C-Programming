#include <stdio.h>

int main() {

    float amount;

    printf("Enter Purchase Amount: ");
    scanf("%f", &amount);

    if(amount >= 5000)
        printf("Congratulations! You Got Discount.");
    else
        printf("No Discount");

    return 0;
}

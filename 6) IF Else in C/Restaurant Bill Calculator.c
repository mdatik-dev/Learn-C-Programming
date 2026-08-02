#include <stdio.h>

int main() {

    float bill;

    printf("Enter Bill Amount: ");
    scanf("%f", &bill);

    if(bill >= 3000)
        printf("Discount = %.2f", bill * 0.15);
    else
        printf("Discount = 0");

    return 0;
}

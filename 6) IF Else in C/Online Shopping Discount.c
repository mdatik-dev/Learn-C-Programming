#include <stdio.h>

int main() {

    float total;

    printf("Enter Shopping Amount: ");
    scanf("%f", &total);

    if(total >= 10000)
        printf("20%% Discount");
    else if(total >= 5000)
        printf("10%% Discount");
    else
        printf("No Discount");

    return 0;
}

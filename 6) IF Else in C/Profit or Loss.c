#include <stdio.h>

int main() {
    float cost, sell;

    printf("Enter Cost Price: ");
    scanf("%f", &cost);

    printf("Enter Selling Price: ");
    scanf("%f", &sell);

    if(sell > cost)
        printf("Profit = %.2f", sell - cost);
    else if(sell < cost)
        printf("Loss = %.2f", cost - sell);
    else
        printf("No Profit No Loss");

    return 0;
}

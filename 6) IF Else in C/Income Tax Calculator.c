#include <stdio.h>

int main() {
    int income;

    printf("Enter Annual Income: ");
    scanf("%d", &income);

    if(income <= 300000)
        printf("No Tax");
    else if(income <= 600000)
        printf("Tax = 10%%");
    else if(income <= 1000000)
        printf("Tax = 20%%");
    else
        printf("Tax = 30%%");

    return 0;
}

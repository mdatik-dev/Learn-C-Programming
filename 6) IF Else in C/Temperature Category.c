#include <stdio.h>

int main() {
    int temp;

    printf("Enter Temperature: ");
    scanf("%d", &temp);

    if(temp < 15)
        printf("Cold");
    else if(temp <= 30)
        printf("Warm");
    else
        printf("Hot");

    return 0;
}

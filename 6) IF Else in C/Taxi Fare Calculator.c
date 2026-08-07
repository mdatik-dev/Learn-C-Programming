#include <stdio.h>

int main() {

    int km;

    printf("Enter Distance (KM): ");
    scanf("%d", &km);

    if(km <= 5)
        printf("Fare = %d Taka", km * 20);
    else
        printf("Fare = %d Taka", km * 30);

    return 0;
}

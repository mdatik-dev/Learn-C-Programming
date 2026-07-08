#include <stdio.h>

int main() {

    int age;
    float height;

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Height (feet): ");
    scanf("%f", &height);

    if(age >= 18 && height >= 5.5)
        printf("Eligible");
    else
        printf("Not Eligible");

    return 0;
}

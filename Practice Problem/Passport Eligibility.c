#include <stdio.h>

int main() {

    int age;

    printf("Enter Age: ");
    scanf("%d", &age);

    if(age >= 18)
        printf("Eligible to Apply for Passport");
    else
        printf("Not Eligible");

    return 0;
}

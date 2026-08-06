#include <stdio.h>

int main() {

    int age;

    printf("Enter Age: ");
    scanf("%d", &age);

    if(age >= 15 && age <= 25)
        printf("Eligible for Sports Competition");
    else
        printf("Not Eligible");

    return 0;
}

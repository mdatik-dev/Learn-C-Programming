#include <stdio.h>

int main() {

    int age;

    printf("Enter Age: ");
    scanf("%d", &age);

    if(age >= 21)
        printf("Eligible for Marriage");
    else
        printf("Not Eligible");

    return 0;
}

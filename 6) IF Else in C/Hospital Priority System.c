#include <stdio.h>

int main() {

    int age;

    printf("Enter Age: ");
    scanf("%d", &age);

    if(age >= 60)
        printf("High Priority");
    else
        printf("Normal Priority");

    return 0;
}

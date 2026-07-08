#include <stdio.h>

int main() {
    int age;

    printf("Enter Age: ");
    scanf("%d", &age);

    if(age < 13)
        printf("Child");
    else if(age < 20)
        printf("Teenager");
    else if(age < 60)
        printf("Adult");
    else
        printf("Senior Citizen");

    return 0;
}

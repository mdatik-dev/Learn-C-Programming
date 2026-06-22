#include <stdio.h>

int main() {

    int age;
    float height;
    char grade;
    char name[50];

    printf("Enter Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Height: ");
    scanf("%f", &height);

    printf("Enter Grade: ");
    scanf(" %c", &grade);

    printf("\nName: %s", name);
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}

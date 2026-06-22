#include <stdio.h>

int main() {
    int age;
    float height;

    printf("Enter Age and Height: ");
    scanf("%d %f", &age, &height);

    printf("Age = %d\n", age);
    printf("Height = %.2f", height);

    return 0;
}

#include <stdio.h>

int main() {

    int age;

    printf("Enter Age: ");
    scanf("%d", &age);

    if(age >= 18)
        printf("Allowed to Watch");
    else
        printf("Not Allowed");

    return 0;
}

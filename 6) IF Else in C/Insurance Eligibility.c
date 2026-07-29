#include <stdio.h>

int main() {

    int age;
    int smoker;

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Are you a smoker? (1 = Yes, 0 = No): ");
    scanf("%d", &smoker);

    if(age >= 18 && age <= 60 && smoker == 0)
        printf("Eligible for Insurance");
    else
        printf("Not Eligible");

    return 0;
}
